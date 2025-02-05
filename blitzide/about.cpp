#include "stdafx.h"
#include "prefs.h"
#include "libs.h"
#include "resource.h"
#include "../MultiLang/MultiLang.h"

#include <mmsystem.h>


class Dialog : public CDialog {
	bool _quit;
public:
	Dialog() :_quit(false) {}

	afx_msg void OnOK() {
		_quit = true;
	}

	void wait() {
		_quit = false;
		MSG msg;
		while(!_quit && GetMessage(&msg, 0, 0, 0)) {
			if(!AfxGetApp()->PreTranslateMessage(&msg)) {
				TranslateMessage(&msg);
				DispatchMessage(&msg);
			}
		}
		EndDialog(0);
	}

	void wait(int n) {
		int _expire = (int)timeGetTime() + n;
		for(;;) {
			int tm = _expire - (int)timeGetTime();
			if(tm < 0) tm = 0;
			MsgWaitForMultipleObjects(0, 0, false, tm, QS_ALLEVENTS);

			MSG msg;
			if(PeekMessage(&msg, 0, 0, 0, PM_REMOVE)) {
				if(!AfxGetApp()->PreTranslateMessage(&msg)) {
					TranslateMessage(&msg);
					DispatchMessage(&msg);
				}
			}
			if(!tm) return;
		}
	}
};

void aboutBlitz() {

	AfxGetMainWnd()->EnableWindow(0);

	Dialog about;

	about.Create(IDD_ABOUT);

	std::string credits = MultiLang::current_language;
	credits += "\r\n\r\n";

	credits += MultiLang::credits;
	credits += "\r\n";

	about.GetDlgItem(IDC_CREDITS)->SetWindowText(credits.c_str());

	std::string t = "";

	t += "Blitz3D";
	t += MultiLang::title_release;
	t += "\r\n";

	about.GetDlgItem(IDC_PRODUCT)->SetWindowText(t.c_str());

	t = "Runtime V" + itoa((VERSION & 0xffff) / 1000) + "." + itoa((VERSION & 0xffff) % 1000);

	about.GetDlgItem(IDC_VERSION)->SetWindowText(t.c_str());

	about.wait();
	about.EndDialog(0);
	AfxGetMainWnd()->EnableWindow(1);
}