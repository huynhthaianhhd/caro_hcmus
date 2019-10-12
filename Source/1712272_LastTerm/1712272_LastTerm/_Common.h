#pragma once
#include <Windows.h>

class _Common
{
public :
	static void fixConsoleWindow();
	// Cố định màn hình Console
	static void gotoXY(int, int);
	// Di chuyển đến tọa độ (x,y) trong màn hình Console
	static void setConsoleWindow(int w, int h);
	// Chỉnh size của màn hình Console 
public:
	_Common();
	~_Common();
};

