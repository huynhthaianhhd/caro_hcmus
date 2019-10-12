#include "_Point.h"
#include "_Board.h"
#include "_Common.h"
#include "_Game.h"
#include "_Play.h"
#include <string.h>

int main()
{
	int n = 100;
	_Common::fixConsoleWindow();
	_Common::setConsoleWindow(1000, 600);
	ScreenStartGame(n);
	system("pause");
}