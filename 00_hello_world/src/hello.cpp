#include "pch.h"
#include <gps/hello.h>

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

namespace gps
{
	void hello()
	{
		MessageBox(NULL, "Hello, World!", "Hello!", MB_OK);
	}
}
