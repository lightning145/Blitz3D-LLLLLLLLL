//#include "gxevent.h"
#include <SDL.h>

SDL_Event event;

void InitEvent()
{
	SDL_PollEvent(&event);
}

int GetEventType()
{
	return event.type;
}

int GetWindowQuitEvent()
{
	return SDL_QUIT;
}
