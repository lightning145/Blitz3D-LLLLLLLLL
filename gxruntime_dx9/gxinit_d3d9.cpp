#include <d3dx9.h>

IDirect3D9* d3d9;
IDirect3DDevice9* device;

HWND Window_GetHWND();

void Init_D3D9(int d_w,int d_h,bool windowed)
{
	d3d9 = Direct3DCreate9(D3D_SDK_VERSION);

	D3DPRESENT_PARAMETERS d3dpp;
	ZeroMemory(&d3dpp, sizeof(d3dpp));
	d3dpp.BackBufferWidth = d_w;
	d3dpp.BackBufferHeight = d_h;
	d3dpp.BackBufferFormat = D3DFMT_A8R8G8B8;
	d3dpp.BackBufferCount = 1;
	d3dpp.MultiSampleType = D3DMULTISAMPLE_NONE;
	d3dpp.MultiSampleQuality = 0;
	d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
	d3dpp.hDeviceWindow = Window_GetHWND();
	d3dpp.Windowed = windowed;
	d3dpp.EnableAutoDepthStencil = true;
	d3dpp.AutoDepthStencilFormat = D3DFMT_D24S8;
	d3dpp.Flags = 0;
	d3dpp.FullScreen_RefreshRateInHz = D3DPRESENT_RATE_DEFAULT;
	d3dpp.PresentationInterval = D3DPRESENT_INTERVAL_IMMEDIATE;

	d3d9->CreateDevice(
		D3DADAPTER_DEFAULT,
		D3DDEVTYPE_HAL,
		Window_GetHWND(),
		D3DCREATE_HARDWARE_VERTEXPROCESSING,
		&d3dpp,
		&device
	);

	device->SetRenderState(D3DRS_LIGHTING, false);
}

void Clean_D3D9()
{
	device->Release();
	d3d9->Release();
}

