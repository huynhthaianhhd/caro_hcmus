#include "_Game.h"

_Game::_Game(int pSize, int pLeft, int  pTop)
{
	_b = new _Board(pSize, pLeft, pTop);
	_loop = _turn = true;
	_command = -1;
	_x = pLeft;
	_y = pTop;
}
int _Game::getCommand(){ return _command; }
bool _Game::isContinue(){ return _loop; }
char _Game::waitKeyBoard()
{
	_command = toupper(_getch());
	return _command;
}
char _Game::askContinue()
{
	_Common::gotoXY(0, _b->getYAt(_b->getSize() - 1, _b->getSize() - 1) + 4);
	return waitKeyBoard();
}
void _Game::startGame()
{
	system("cls");
	_b->resetData();
	_b->drawBoard();
	_x = _b->getXAt(0, 0);
	_y = _b->getYAt(0, 0);
	if (_turn == 1)
	{
		Textcolor(Blue);
		_Common::gotoXY(SIZE * 4 + 32, 26);
		cout << " Den luot PLAYER 1 ";
	}
	else
	{
		Textcolor(Red);
		_Common::gotoXY(SIZE * 4 + 32, 26);
		cout << " Den luot PLAYER 2 ";
	}
	Textcolor(Blue);
	_Common::gotoXY(SIZE * 4 + 30 + 11, 4);
	cout << _b->CountX;
	Textcolor(Red);
	_Common::gotoXY(SIZE * 4 + 30 + 11, 14);
	cout << _b->CountY;
}
void _Game::exitGame()
{
	_loop = false;
}
void _Game::moveRight()
{
	if (_x<_b->getXAt(_b->getSize() - 1, _b->getSize() - 1))
	{
		_x += 4;
		_Common::gotoXY(_x, _y);
	}
}

void _Game::moveLeft(){
	if (_x>_b->getXAt(0,0))
	{
		_x -= 4;
		_Common::gotoXY(_x, _y);
	}
}
void P1WIN()
{
	AnTroChuot();
	int check = 1;
	Box();
	while (check<30)
	{
		P1();
		Sleep(200);
		check++;
	}
}
void P2WIN()
{
	AnTroChuot();
	int check = 1;
	Box();
	while (check<30)
	{
		P2();
		Sleep(200);
		check++;
	}
}
void PDraw()
{
	AnTroChuot();
	int check = 1;
	Box();
	while (check<30)
	{
		Draw();
		Sleep(200);
		check++;
	}
}
void _Game::moveDown() {
	if (_y<_b->getYAt(_b->getSize() - 1, _b->getSize() - 1))
	{
		_y += 2;
		_Common::gotoXY(_x, _y);
	}
}
void _Game::moveUp() {
	if (_y>_b->getYAt(0,0))
	{
		_y -= 2;
		_Common::gotoXY(_x, _y);
	}
}
bool _Game::processCheckBoard()	
{
	switch (_b->checkBoard(_x, _y, _turn))
	{
	case -1:
		Textcolor(Blue);
		cout << "X";
		_Common::gotoXY(SIZE * 4 + 30+12, 4);
		cout << _b->CountX;
		Textcolor(Red);
		_Common::gotoXY(SIZE * 4 + 30+12, 14);
		cout << _b->CountY;
		_Common::gotoXY(SIZE * 4 + 32, 26);
		cout << " Den luot PLAYER 2 ";

		_Common::gotoXY(_x, _y);
		break;
	case 1:
		Textcolor(Red);
		cout << "O";
		Textcolor(Blue);
		_Common::gotoXY(SIZE * 4 + 30 + 12, 4);
		cout << _b->CountX;
		_Common::gotoXY(SIZE * 4 + 32, 26);
		cout << " Den luot PLAYER 1 ";
		Textcolor(Red);
		_Common::gotoXY(SIZE * 4 + 30 + 12, 14);
		cout << _b->CountY;

		break;
	case 0:
		return false;
		break;
	}
	return true;
}
int _Game::DemNuocCoDaDi()
{
	return _b->CountX + _b->CountY;
}
void P1()
{
	int i = 10, j = 10;
	_Common::gotoXY(i, j);     cout << " .----------------.  .----------------.   .----------------.  .----------------.  .-----------------.";
	_Common::gotoXY(i, j + 1); cout << "| .--------------. || .--------------. | | .--------------. || .--------------. || .--------------. |";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(i, j + 2); cout << "| |   ______     | || |     __       | | | | _____  _____ | || |     _____    | || | ____  _____  | |";
	_Common::gotoXY(i, j + 3); cout << "| |  |_   __ " << char(92) << "   | || |    /  |      | | | ||_   _||_   _|| || |    |_   _|   | || ||_   " << char(92) << "|_   _| | |";
	_Common::gotoXY(i, j + 4); cout << "| |    | |__) |  | || |    `| |      | | | |  | | /" << char(92) << " | |  | || |      | |     | || |  |   " << char(92) << " | |   | |";
	_Common::gotoXY(i, j + 5); cout << "| |    |  ___/   | || |     | |      | | | |  | |/  " << char(92) << "| |  | || |      | |     | || |  | |" << char(92) << " " << char(92) << "| |   | |";
	_Common::gotoXY(i, j + 6); cout << "| |   _| |_      | || |    _| |_     | | | |  |   /" << char(92) << "   |  | || |     _| |_    | || | _| |_" << char(92) << "   |_  | |";
	_Common::gotoXY(i, j + 7); cout << "| |  |_____|     | || |   |_____|    | | | |  |__/  "<<char(92)<<"__|  | || |    |_____|   | || ||_____|"<<char(92)<<"____| | |";
	_Common::gotoXY(i, j + 8); cout << "| |              | || |              | | | |              | || |              | || |              | |";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(i, j + 9); cout << "| '--------------' || '--------------' | | '--------------' || '--------------' || '--------------' |";
	_Common::gotoXY(i, j + 10); cout << " '----------------'  '----------------'   '----------------'  '----------------'  '----------------' ";
}
void P2()
{
	int i = 10, j = 10;
	_Common::gotoXY(i, j);     cout << " .----------------.  .----------------.   .----------------.  .----------------.  .-----------------.";
	_Common::gotoXY(i, j + 1); cout << "| .--------------. || .--------------. | | .--------------. || .--------------. || .--------------. |";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(i, j + 2); cout << "| |   ______     | || |    _____     | | | | _____  _____ | || |     _____    | || | ____  _____  | |";
	_Common::gotoXY(i, j + 3); cout << "| |  |_   __ "<<char(92)<<"   | || |   / ___ `.   | | | ||_   _||_   _|| || |    |_   _|   | || ||_   "<<char(92)<<"|_   _| | |";
	_Common::gotoXY(i, j + 4); cout << "| |    | |__) |  | || |  |_/___) |   | | | |  | | /"<<char(92)<<" | |  | || |      | |     | || |  |   "<<char(92)<<" | |   | |";
	_Common::gotoXY(i, j + 5); cout << "| |    |  ___/   | || |   .'____.'   | | | |  | |/  "<<char(92)<<"| |  | || |      | |     | || |  | |"<<char(92)<<" "<<char(92)<<"| |   | |";
	_Common::gotoXY(i, j + 6); cout << "| |   _| |_      | || |  / /____     | | | |  |   /"<<char(92)<<"   |  | || |     _| |_    | || | _| |_"<<char(92)<<"   |_  | |";
	_Common::gotoXY(i, j + 7); cout << "| |  |_____|     | || |  |_______|   | | | |  |__/  "<<char(92)<<"__|  | || |    |_____|   | || ||_____|"<<char(92)<<"____| | |";
	_Common::gotoXY(i, j + 8); cout << "| |              | || |              | | | |              | || |              | || |              | |";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(i, j + 9); cout << "| '--------------' || '--------------' | | '--------------' || '--------------' || '--------------' |";
	_Common::gotoXY(i, j + 10); cout << " '----------------'  '----------------'   '----------------'  '----------------'  '----------------' ";
}
void Draw()
{
	int i = 18, j = 10;
	_Common::gotoXY(i, j);     cout << " .----------------.  .----------------.  .----------------.  .----------------. ";
	_Common::gotoXY(i, j + 1); cout << "| .--------------. || .--------------. || .--------------. || .--------------. |";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(i, j + 2); cout << "| |  ________    | || |  _______     | || |      __      | || | _____  _____ | |";
	_Common::gotoXY(i, j + 3); cout << "| | |_   ___ `.  | || | |_   __  "<<char(92)<<"   | || |     /  "<<char(92)<<"     | || ||_   _||_   _|| |";
	_Common::gotoXY(i, j + 4); cout << "| |   | |   `. "<<char(92)<<" | || |   | |__) |   | || |    / /"<<char(92)<<" "<<char(92)<<"    | || |  | | /"<<char(92)<<" | |  | |";
	_Common::gotoXY(i, j + 5); cout << "| |   | |    | | | || |   |  __ /    | || |   / ____ "<<char(92)<<"   | || |  | |/  "<<char(92)<<"| |  | |";
	_Common::gotoXY(i, j + 6); cout << "| |  _| |___.' / | || |  _| |  "<<char(92)<<" "<<char(92)<<"_  | || | _/ /    "<<char(92)<<" "<<char(92)<<"_ | || |  |   /"<<char(92)<<"   |  | |";
	_Common::gotoXY(i, j + 7); cout << "| | |________.'  | || | |____| |___| | || ||____|  |____|| || |  |__/  "<<char(92)<<"__|  | |";
	_Common::gotoXY(i, j + 8); cout << "| |              | || |              | || |              | || |              | |";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(i, j + 9); cout << "| '--------------' || '--------------' || '--------------' || '--------------' |";
	_Common::gotoXY(i, j + 10); cout << " '----------------'  '----------------'  '----------------'  '----------------' ";
}
void Box()
{
	int i = 8, j = 8;
		_Common::gotoXY(i, j);
		for (int i = 0; i < 110; i++){
			Textcolor(rand() % 15 + 1);
			Sleep(1);
			cout << char(178);
		}
		_Common::gotoXY(i, j+14);
		for (int i = 0; i < 110; i++){
			Textcolor(rand() % 15 + 1);
			Sleep(1);
			cout << char(178);
		}
		Textcolor(Cyan);
		_Common::gotoXY(50, j + 18);
		cout << "Y   : Play Again";
		_Common::gotoXY(50, j + 19);
		cout << "ESC : BACK";
}
int _Game::processFinish(int x,int y)
{
	_Common::gotoXY(0, _b->getYAt(_b->getSize() - 1, _b->getSize() - 1) + 2);
	int pWhoWin = _b->testBoard(x,y);
	switch (pWhoWin)
	{
	case -1:
		system("cls");
		P1WIN();
		break;
	case 1:
		system("cls");
		P2WIN();
		break;
	case 0:
		system("cls");
		PlaySound(TEXT("nhacnen.wav"), NULL, SND_FILENAME | SND_ASYNC);
		PDraw();
		break;
	case 2:
		_turn = !_turn;
	}
	_Common::gotoXY(_x, _y);// Trả về vị trí hiện hành của con trỏ màn hình bàn cờ
	return pWhoWin;
}
int _Game::getXatEnter()
{
	return _x;
}
int _Game::getYatEnter()
{
	return _y;
}
void _Game::TimKiemNuocDi()
{
	_x = _b->Tim_Kiem_NuocDi_1().getX();
	_y = _b->Tim_Kiem_NuocDi_1().getY();
}
void _Game::TimKiemNuocDi2()
{
	_x = _b->Tim_Kiem_NuocDi_2().getX();
	_y = _b->Tim_Kiem_NuocDi_2().getY();
}
_Game::~_Game()
{
	delete _b;
}

void _Game::SaveGame(int n)
{
	char data[30];
	ofstream f1;
	ofstream f2;
	_Common::gotoXY(35, SIZE*2+1);
	cout << "ENTER FILE NAME: ";
	Textcolor(Cyan);
	cin.getline(data, 30);
	f1.open(data, ios::out);
	f2.open("Name.txt", ios::app);
	f2 << data << " " << endl;
	//thong tin
	f1 << scorep1 << " " << scorep2 << " " << n << endl;
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			f1 << _b->get_Check(i, j) << " ";
		}
		f1 << endl;
	}
	f1.close();
	f2.close();
	_Common::gotoXY(35, SIZE * 2 + 2);
	cout << "ESC : BACK";
	int t = 1;
	while (t)
	{
		if (_kbhit())
		{
			switch (_getch())
			{
			case 27:
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				t = 0;
				system("cls");
				ScreenStartGame(99);
				break;
			}
		}
	}
}
void _Game::LoadGame(char data[30])
{

	//NHAP FILE
	ifstream f;
	f.open(data, ios::in);
	if (!f){
		_Common::gotoXY(35, 46);
		cout << "\n FILE KHONG TON TAI!" << endl;
	}
	else
	{
		f >> scorep1 >> scorep2 >> chedo;
		system("cls");
		//thong tin
		//ban co
		int k;
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				f >> k;
				_b->loadData(i, j, k);
			}
		}
		_x = _b->getXAt(0, 0);
		_y = _b->getYAt(0, 0);
		_b->drawBoard();
		f.close();
	}
	Textcolor(Blue);
	_Common::gotoXY(SIZE * 4 + 30 + 12, 4);
	cout << _b->CountX;
	Textcolor(Red);
	_Common::gotoXY(SIZE * 4 + 30 + 12, 14);
	cout << _b->CountY;
	if (_turn == 1)
	{
		Textcolor(Blue);
		_Common::gotoXY(SIZE * 4 + 32, 26);
		cout << " Den luot PLAYER 1 ";
	}
	else
	{
		Textcolor(Red);
		_Common::gotoXY(SIZE * 4 + 32, 26);
		cout << " Den luot PLAYER 2 ";
	}
	
}