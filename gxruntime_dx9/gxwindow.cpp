//#include "gxwindow.h"
#include <SDL.h>
#include <SDL_Syswm.h>

SDL_Window* window;

void Init_D3D9(int d_w, int d_h, bool windowed);
void Clean_D3D9();

int window_width, window_height;

void Window_Init()
{
	SDL_Init(SDL_INIT_EVERYTHING);
}

void Window_Create(int w, int h, int windowed)
{

	switch (windowed)
	{
	case 0:
		window = SDL_CreateWindow(
			"Blitz3D - Direct3D 9",
			SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED,
			w, h, SDL_WINDOW_SHOWN|SDL_WINDOW_FULLSCREEN_DESKTOP
		);

		SDL_GetWindowSize(window,&window_width,&window_height);

		Init_D3D9(window_width,window_height,false);

		break;
	case 1:
		window = SDL_CreateWindow(
			"Blitz3D - Direct3D 9",
			SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED,
			w, h, SDL_WINDOW_SHOWN 
		);

		SDL_GetWindowSize(window, &window_width, &window_height);

		Init_D3D9(window_width, window_height, true);

		break;
	default:
		break;
	}
}

void Window_SetTitle(const char* title)
{
	SDL_SetWindowTitle(window,title);
}

void Window_Close()
{
	Clean_D3D9();
	SDL_DestroyWindow(window);
	SDL_Quit();
}

HWND Window_GetHWND()
{
	SDL_SysWMinfo sysInfo;
	SDL_VERSION(&sysInfo.version);
	SDL_GetWindowWMInfo(window, &sysInfo);
	return sysInfo.info.win.window;
}


