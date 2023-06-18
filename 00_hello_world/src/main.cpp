#include "pch.h"

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include <gps\hello.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow)
{
	gps::hello();
	return 0;
}
