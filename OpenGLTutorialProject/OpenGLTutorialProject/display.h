#pragma once

#ifndef DISPLAY_H
#define DISPLAY_H

#include <SDL2\SDL.h>
#include <string>

using namespace std;

class Display
{
public:
	Display(int width, int height, const string& title);

	void Clear(float r, float g, float b, float a);
	void Update();
	bool IsClosed();

	virtual ~Display();
protected:
private:
	Display(const Display& other) {}
	Display& operator=(const Display& other) {}

	SDL_Window* m_window;
	SDL_GLContext m_glContext;
	bool m_isClosed;
};

#endif // DISPLAY_H