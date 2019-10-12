#include "_Play.h"
#include <vector>
#include <Windows.h>
#include <mmsystem.h>
#include <iostream>
using namespace std;
struct Name{
	char data[30];
};
vector <Name> ch;

void Textcolor(int color)
{
	HANDLE hConsoleColor;
	hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleColor, color);
}
void AnTroChuot()
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = FALSE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}
void HienTroChuot()
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = TRUE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}
int ReadChedo(char a[30])
{
	int d1, d2, chedo;
	system("cls");
	ifstream f;
	f.open(a, ios::in);
	if (!f){
		_Common::gotoXY(35, 46);
		cout << "\n FILE KHONG TON TAI!" << endl;
		Sleep(1000);
		ScreenStartGame(99);
	}
	else
		f >> d1>> d2 >> chedo;
	f.close();
	return chedo;
}
void ReadNameFile()
{
	Textcolor(Cyan);
	_Common::gotoXY(60, 18);
	cout << "LIST FILE NAME";
	int i = 19;
	ifstream f;
	f.open("Name.txt", ios::in);
	while (!f.eof())
	{
		char s[30];
		f >> s;
		_Common::gotoXY(50, i);
		cout << s;
		i++;
	}
	f.close();
}
void PrintCaro()
{
	int x = 25, y = 0;
	Textcolor(rand()%15+1);
	_Common::gotoXY(x, y);				   cout << "ooooooooooooo";
	_Common::gotoXY(x-3, y+1);			cout << "oooooooooooooooo";
	_Common::gotoXY(x - 5, y + 2);    cout << "oooooooooooooooooo";
	_Common::gotoXY(x - 6, y + 3);   cout << "ooooooooooooooooooo";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x - 7, y + 4);  cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 5); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 6); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 7); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 8); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 9); cout << "ooooooo";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x - 8, y + 10);cout << "ooooooo";
	_Common::gotoXY(x - 7, y + 11); cout << "ooooooo";
	_Common::gotoXY(x - 6, y + 12);  cout << "ooooooooooooooooooo";
	_Common::gotoXY(x - 5, y + 13);   cout << "oooooooooooooooooo";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x - 3, y + 14);		cout << "oooooooooooooooo";
	_Common::gotoXY(x, y+15);			   cout << "ooooooooooooo";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x - 4 + 22, y + 4);				    cout << "ooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 2, y + 5);		      cout << "ooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 6);		     cout << "ooooooooooooooooo";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x - 4 + 22 - 3, y + 7);			 cout << "ooooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 8);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 9);			 cout << "oooooo     oooooo";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x - 4 + 22 - 3, y + 10);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 11);		 cout << "ooooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 12);		 cout << "oooooo     oooooo";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x - 4 + 22 - 3, y + 13);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 14);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 15);		 cout << "oooooo     oooooo";

	Textcolor(rand() % 15 + 1);

	_Common::gotoXY(x  + 33, y + 4);			cout << "ooooo   ooooooooo";
	_Common::gotoXY(x  + 33, y + 5);			cout << "oooooooooooooooooo";
	_Common::gotoXY(x  + 33, y + 6);			cout << "ooooooooooooooooooo";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x  + 33, y + 7);			cout << "oooooooooooooooooooo";
	_Common::gotoXY(x + 1 + 33, y + 8);			 cout << "ooooooo     ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 9);			 cout << "ooooooo     ooooooo";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x + 1 + 33, y + 10);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 11);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 12);		 cout << "ooooooo";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x + 1 + 33, y + 13);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 14);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 15);		 cout << "ooooooo";
	// Textcolor(Yellow);
	_Common::gotoXY(x + 57, y + 4);					cout << "ooooooooooo";
	_Common::gotoXY(x + 57 - 2, y + 5);			  cout << "ooooooooooooooo";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x + 57 - 3, y + 6);			 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 7);			 cout << "ooooooooooooooooo";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x + 57 - 3, y + 8);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 9);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 10);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 11);		 cout << "oooooo     oooooo";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x + 57 - 3, y + 12);		 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 13);		 cout << "ooooooooooooooooo";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x + 57 - 2, y + 14);		  cout << "ooooooooooooooo";
	_Common::gotoXY(x + 57, y + 15);				cout << "ooooooooooo";


	
}     
void PrintCaro2()
{
	int x = 25, y = 0;
	Sleep(200);
	Textcolor(Red);
	_Common::gotoXY(x, y);				   cout << "ooooooooooooo";
	_Common::gotoXY(x - 3, y + 1);			cout << "oooooooooooooooo";
	_Common::gotoXY(x - 5, y + 2);    cout << "oooooooooooooooooo";
	_Common::gotoXY(x - 6, y + 3);   cout << "ooooooooooooooooooo";
	_Common::gotoXY(x - 7, y + 4);  cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 5); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 6); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 7); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 8); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 9); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 10); cout << "ooooooo";
	_Common::gotoXY(x - 7, y + 11); cout << "ooooooo";
	_Common::gotoXY(x - 6, y + 12);  cout << "ooooooooooooooooooo";
	_Common::gotoXY(x - 5, y + 13);   cout << "oooooooooooooooooo";
	_Common::gotoXY(x - 3, y + 14);		cout << "oooooooooooooooo";
	_Common::gotoXY(x, y + 15);			   cout << "ooooooooooooo";
	Sleep(200);
	Textcolor(Green);
	_Common::gotoXY(x - 4 + 22, y + 4);				    cout << "ooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 2, y + 5);		      cout << "ooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 6);		     cout << "ooooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 7);			 cout << "ooooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 8);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 9);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 10);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 11);		 cout << "ooooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 12);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 13);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 14);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 15);		 cout << "oooooo     oooooo";
	Sleep(200);
	Textcolor(Blue);

	_Common::gotoXY(x + 33, y + 4);			cout << "ooooo   ooooooooo";
	_Common::gotoXY(x + 33, y + 5);			cout << "oooooooooooooooooo";
	_Common::gotoXY(x + 33, y + 6);			cout << "ooooooooooooooooooo";
	_Common::gotoXY(x + 33, y + 7);			cout << "oooooooooooooooooooo";
	_Common::gotoXY(x + 1 + 33, y + 8);			 cout << "ooooooo     ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 9);			 cout << "ooooooo     ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 10);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 11);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 12);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 13);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 14);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 15);		 cout << "ooooooo";
	Sleep(200);
	Textcolor(Yellow);
	_Common::gotoXY(x + 57, y + 4);					cout << "ooooooooooo";
	_Common::gotoXY(x + 57 - 2, y + 5);			  cout << "ooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 6);			 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 7);			 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 8);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 9);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 10);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 11);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 12);		 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 13);		 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 2, y + 14);		  cout << "ooooooooooooooo";
	_Common::gotoXY(x + 57, y + 15);				cout << "ooooooooooo";
	Textcolor(defaultColor);


}
void PrintCaro3()
{
	int x = 25, y = 0;
	Textcolor(Red);
	_Common::gotoXY(x, y);				   cout << "ooooooooooooo";
	_Common::gotoXY(x - 3, y + 1);			cout << "oooooooooooooooo";
	_Common::gotoXY(x - 5, y + 2);    cout << "oooooooooooooooooo";
	_Common::gotoXY(x - 6, y + 3);   cout << "ooooooooooooooooooo";
	_Common::gotoXY(x - 7, y + 4);  cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 5); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 6); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 7); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 8); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 9); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 10); cout << "ooooooo";
	_Common::gotoXY(x - 7, y + 11); cout << "ooooooo";
	_Common::gotoXY(x - 6, y + 12);  cout << "ooooooooooooooooooo";
	_Common::gotoXY(x - 5, y + 13);   cout << "oooooooooooooooooo";
	_Common::gotoXY(x - 3, y + 14);		cout << "oooooooooooooooo";
	_Common::gotoXY(x, y + 15);			   cout << "ooooooooooooo";
	Textcolor(Green);
	_Common::gotoXY(x - 4 + 22, y + 4);				    cout << "ooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 2, y + 5);		      cout << "ooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 6);		     cout << "ooooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 7);			 cout << "ooooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 8);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 9);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 10);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 11);		 cout << "ooooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 12);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 13);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 14);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 15);		 cout << "oooooo     oooooo";
	Textcolor(Blue);

	_Common::gotoXY(x + 33, y + 4);			cout << "ooooo   ooooooooo";
	_Common::gotoXY(x + 33, y + 5);			cout << "oooooooooooooooooo";
	_Common::gotoXY(x + 33, y + 6);			cout << "ooooooooooooooooooo";
	_Common::gotoXY(x + 33, y + 7);			cout << "oooooooooooooooooooo";
	_Common::gotoXY(x + 1 + 33, y + 8);			 cout << "ooooooo     ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 9);			 cout << "ooooooo     ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 10);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 11);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 12);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 13);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 14);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 15);		 cout << "ooooooo";
	Textcolor(Yellow);
	_Common::gotoXY(x + 57, y + 4);					cout << "ooooooooooo";
	_Common::gotoXY(x + 57 - 2, y + 5);			  cout << "ooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 6);			 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 7);			 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 8);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 9);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 10);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 11);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 12);		 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 13);		 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 2, y + 14);		  cout << "ooooooooooooooo";
	_Common::gotoXY(x + 57, y + 15);				cout << "ooooooooooo";
	Textcolor(defaultColor);

}
void About()
{
	system("cls");
	PrintCaro3();
	Textcolor(Cyan);
	_Common::gotoXY(60, 18);
	cout << "ABOUT";
	_Common::gotoXY(50, 21);
	cout << "DO AN GAME CARO - LOP 17CTT2 - HCMUS" << endl;
	_Common::gotoXY(50, 22);
	cout << "-> MSSV   : 1712272." << endl;
	_Common::gotoXY(50, 23);
	cout << "-> Ho ten : HUYNH THAI ANH." << endl;
	_Common::gotoXY(50, 24);
	cout << "-> Lop    : 17CTT2." << endl;
	_Common::gotoXY(50, 25);
	cout << "-> GV huong dan : Truong Toan Thinh " << endl;

	_Common::gotoXY(50, 26);
	cout << "-> Chuc moi nguoi choi game vui ve !!" << endl;
	_Common::gotoXY(60, 30);
	cout << "BACK";
	char command = ' ';
	command = _getch();			
	system("cls");
}
void Help()
{
	system("cls");
	PrintCaro3();
	Textcolor(Cyan);
	_Common::gotoXY(60, 18);
	cout << "HELP";
	_Common::gotoXY(50, 21);
	cout << "HUONG DAN" << endl;
	_Common::gotoXY(50, 22);
	cout << "1. Ban co gom 16x16 o vuong." << endl;
	_Common::gotoXY(50, 23);
	cout << "2. Su dung cac phim W A S D de di chuyen va Enter de danh." << endl;
	_Common::gotoXY(50, 24);
	cout << "3. Luat choi cu du 5 quan co X hoac O theo hang ngang, doc, cheo se chien thang." << endl;
	_Common::gotoXY(50, 25);
	cout << "4. Luat choi tuan theo quy dinh chan 2 dau " << endl;

	_Common::gotoXY(50, 26);
	cout << "-> Chuc moi nguoi choi game vui ve !!" << endl;
	_Common::gotoXY(60, 30);
	cout << "BACK";
	char command = ' ';
	command = _getch();
	system("cls");
}
void LoadLoad()
{
	int n = 100;
	system("cls");
	PrintCaro3();
	ReadNameFile();
	char data[30];
	_Common::gotoXY(50, 32);
	HienTroChuot();
	cout << "ENTER FILE NAME: ";
	cin.getline(data, 30);
	int chedo = ReadChedo(data);
	if (chedo == -30 || chedo == -31)
	{
		Diem a;
		a.score1 = 0;
		a.score2 = 0;
		int t = PlayerVsPlayer(a, chedo, data);
		if (t == 27)
		{
			system("cls");
			ScreenStartGame(n - 1);
		}
	}
	if (chedo == -4)
	{
		Diem a;
		a.score1 = 0;
		a.score2 = 0;
		int t = PlayerVsCom2(a, -4, data);
		if (t == 27)
		{
			system("cls");
			ScreenStartGame(n - 1);
		}
	}
	if (chedo == -5)
	{
		Diem a;
		a.score1 = 0;
		a.score2 = 0;
		int t = PlayerVsCom(a, -5, data);
		if (t == 27)
		{
			system("cls");
			ScreenStartGame(n - 1);
		}
	}
}
void ScreenStartGame(int n)
{
	
	AnTroChuot();
	int x = 50, y = 20;
	int i;
	char s[30] = " ";	
	int check = 1;
	Textcolor(Red);
	_Common::gotoXY(50, 20); cout << "Player Vs Player";
	Textcolor(7);
	_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
	_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
	_Common::gotoXY(50, 23); cout << "Load Game";
	_Common::gotoXY(50, 24); cout << "Help";
	_Common::gotoXY(50, 25); cout << "About";
	_Common::gotoXY(50, 26); cout << "Exit";
	_Common::gotoXY(50, 32); cout << "....... W - S : Move ( Off Unikey - Off Caps Lock ) ";
	_Common::gotoXY(50, 33); cout << "....... Enter : Select ";
	if (n == 100)
	{
		PlaySound(TEXT("nhacnen.wav"), NULL, SND_FILENAME | SND_ASYNC);
		Screen();
		PrintCaro2();
	}
	else
		PrintCaro3();
	
	while (check)
	{
		if (_kbhit())
		{
			switch (_getch())
			{
			case 'w':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				if (y > 20)
				{
					y--;
					_Common::gotoXY(x, y);
				}
				if (y == 20)
				{
					Textcolor(Red);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					Textcolor(7);
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 21)
				{
					Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					Textcolor(Red);
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					Textcolor(7);
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 22)
				{
					Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					Textcolor(Red);
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					Textcolor(7);
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 23)
				{
					Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					Textcolor(Red);
					_Common::gotoXY(50, 23); cout << "Load Game";
					Textcolor(7);
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 24)
				{
					Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					Textcolor(Red);
					_Common::gotoXY(50, 24); cout << "Help";
					Textcolor(7);
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 25)
				{
					Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					Textcolor(Red);
					_Common::gotoXY(50, 25); cout << "About";
					Textcolor(7);
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 26)
				{
					Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					Textcolor(Red);
					_Common::gotoXY(50, 25); cout << "About";
					Textcolor(7);
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				break;
			case 's':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				if (y<26)
				{
					y++;
					_Common::gotoXY(x, y);
				}
				if (y == 20)
				{
					Textcolor(Red);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					Textcolor(7);
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 21)
				{
					Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					Textcolor(Red);
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					Textcolor(7);
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 22)
				{
					Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					Textcolor(Red);
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					Textcolor(7);
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 23)
				{
					Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					Textcolor(Red);
					_Common::gotoXY(50, 23); cout << "Load Game";
					Textcolor(7);
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 24)
				{
					Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					Textcolor(Red);
					_Common::gotoXY(50, 24); cout << "Help";
					Textcolor(7);
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 25)
				{
					Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					Textcolor(Red);
					_Common::gotoXY(50, 25); cout << "About";
					Textcolor(7);
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 26)
				{
					Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::gotoXY(50, 25); cout << "About";
					Textcolor(Red);
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				break;
			case 13:
				PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
				if (y == 20)
				{
					Diem a;
					a.score1 = 0;
					a.score2 = 0;
					int t = PlayerVsPlayer(a,0,s);
					if (t == 27)
					{
						system("cls");
						ScreenStartGame(99);
					}
				}
				if (y == 21)
				{
					Diem a;
					a.score1 = 0;
					a.score2 = 0;
					int t = PlayerVsCom2(a,0,s);
					if (t == 27)
					{
						system("cls");
						ScreenStartGame(99);
					}
				}
				if (y == 22)
				{
					Diem a;
					a.score1 = 0;
					a.score2 = 0;
					int t = PlayerVsCom(a,0,s);
					if (t == 27)
					{
						system("cls");
						ScreenStartGame(99);
					}
				}
				if (y == 23)
				{
					LoadLoad();
					
				}
				if (y == 24)
				{
					Help();
					ScreenStartGame(99);
				}
				if (y == 25)
				{
					About();
					ScreenStartGame(99);
				}
				if (y == 26)
				{
					exit(0);
				}
				break;
			}
		}	
	}
}
void PrintScoreBoard()
{
	Textcolor(Pink);
	// cot doc
	for (int i = 1; i < SIZE*2; i++){
		Sleep(1);
		_Common::gotoXY(SIZE * 4 + 18, i);
		cout << char(219);
	}
	Textcolor(DarkPink);
	for (int i = 1; i < SIZE * 2; i++){
		Sleep(1);
		_Common::gotoXY(SIZE * 4 + 17, i);
		cout << char(219);
	}
	//
	Textcolor(White);
	Sleep(1);
	_Common::gotoXY(SIZE * 4 + 1, (SIZE * 2 - 1) / 2 + 1); cout << "    C A R O";
	// cot ke ben ban co
	for (int i = 0; i < (SIZE * 2-1)/2-2; i++)
	{
		Sleep(1);
		_Common::gotoXY(SIZE * 4+1 , i+1);
		cout << char(186);
	}
	Sleep(1);
	_Common::gotoXY(SIZE * 4 + 1, 0); cout << char(187);
	_Common::gotoXY(SIZE * 4 + 1, SIZE*2); cout << char(188);
	for (int i = (SIZE * 2 - 1) / 2 +3; i < SIZE * 2 - 1; i++)
	{
		Sleep(1);
		_Common::gotoXY(SIZE * 4 + 1, i + 1);
		cout << char(186);
	}
	//
	_Common::gotoXY(SIZE * 4 + 1, (SIZE * 2 - 1) / 2 -1); cout << char(200);
	for (int i = 0; i < 15; i++)
	{
		Sleep(1);
		cout << char(205);
	}
	_Common::gotoXY(SIZE * 4 + 1, (SIZE * 2 - 1) / 2 +3 ); cout << char(201);
	for (int i = 0; i < 15; i++)
	{
		Sleep(1);
		cout << char(205);
	}
	//Bang 2
	_Common::gotoXY(SIZE * 4 + 19, (SIZE * 2 - 1) / 2 + 1);
	cout << char(219) << char(205) << char(205) << char(205) << char(205) << char(254);
	for (int i = 0; i < 8; i++){
		Sleep(1);
		_Common::gotoXY(SIZE * 4 + 25, 11+i);
		cout << char(219);
	}
	for (int i = 0; i < 8; i++){
		Sleep(1);
		_Common::gotoXY(SIZE * 4 + 61, 11+i);
		cout << char(219);
	}
	_Common::gotoXY(SIZE * 4 + 25, 10);
	for (int i = 0; i < 37; i++){ 
		Sleep(1);
		cout << char(220);
	}
	_Common::gotoXY(SIZE * 4 + 25, 11+8);
	for (int i = 0; i < 37; i++){ 
		Sleep(1);
		cout << char(223);
	}
	// Bang 3
	Sleep(1);
	_Common::gotoXY(SIZE * 4 + 19, (SIZE * 2 - 1) -3);
	cout << char(219) << char(205) << char(205) << char(205) << char(205) << char(254);
	for (int i = 0; i < 10; i++){
		Sleep(1);
		_Common::gotoXY(SIZE * 4 + 25, SIZE * 2 -i);
		cout << char(219);
	}
	for (int i = 0; i < 10; i++){
		Sleep(1);
		_Common::gotoXY(SIZE * 4 + 61, SIZE * 2 - i);
		cout << char(219);
	}
	_Common::gotoXY(SIZE * 4 + 25, SIZE * 2);
	for (int i = 0; i < 37; i++){ 
		Sleep(1);
		cout << char(223);
	}
	_Common::gotoXY(SIZE * 4 + 25, SIZE * 2 - 10);
	for (int i = 0; i < 37; i++){ 
		Sleep(1);
		cout << char(220); 
	}
	// Bang 1
	Sleep(1);
	_Common::gotoXY(SIZE * 4 + 19, 4);
	cout << char(219) << char(205) << char(205) << char(205) << char(205) << char(254);
	for (int i = 0; i < 8; i++){
		Sleep(1);
		_Common::gotoXY(SIZE * 4 + 25, i+1);
		cout << char(219);
	}
	for (int i = 0; i < 8; i++){
		Sleep(1);
		_Common::gotoXY(SIZE * 4 + 61, i+1);
		cout << char(219);
	}
	_Common::gotoXY(SIZE * 4 + 25, 0);
	for (int i = 0; i < 37; i++){ 
		Sleep(1);
		cout << char(220); 
	}
	_Common::gotoXY(SIZE * 4 + 25, 8+1);
	for (int i = 0; i < 37; i++){ 
		Sleep(1);
		cout << char(223); 
	}




	_Common::gotoXY(SIZE * 4 + 40, 2);
	cout << "PLAYER 1";
	_Common::gotoXY(SIZE * 4 + 30, 4);
	cout << "So quan X : ";
	_Common::gotoXY(SIZE * 4 + 30, 5);
	cout << "So tran da thang : ";


	_Common::gotoXY(SIZE * 4 + 40, 12);
	cout << "PLAYER 2";
	_Common::gotoXY(SIZE * 4 + 30, 14);
	cout << "So quan O : ";
	_Common::gotoXY(SIZE * 4 + 30, 15);
	cout << "So tran da thang : ";




	_Common::gotoXY(SIZE * 4 + 30, 27);
	cout << "-----------------------";
	_Common::gotoXY(SIZE * 4 + 30, 28);
	cout << " W A S D : Move ";
	_Common::gotoXY(SIZE * 4 + 30, 29);
	cout << " L : Save Game ";
	_Common::gotoXY(SIZE * 4 + 30, 30);
	cout << " T : Load Game ";
	_Common::gotoXY(SIZE * 4 + 30, 31);
	cout << " ESC : Exit ";

	_Common::gotoXY(2,1);
} // IN BANG DIEM
void Screen()
{
	int check = 1;
	while (check<20)
	{
		PrintCaro();
		Sleep(100);
		check++;
	}
}
int PlayerVsCom(Diem &a, int load , char data[30])
{
	int k = 1, n = 100;
	HienTroChuot();
	_Game g(SIZE, 0, 0);
	g.setCountXY();
	if (load == -5)
	{
		g.LoadGame(data);
	}
	else
	{
		g.startGame();
		g.setTurn();
	}
	PrintScoreBoard();
	Textcolor(Cyan);
	_Common::gotoXY(SIZE * 4 + 32, 24);
	cout << " PLAYER VS BOT (HARD) ";
	Textcolor(Blue);
	_Common::gotoXY(SIZE * 4 + 30 + 18, 5);
	cout << a.score1;
	Textcolor(Red);
	_Common::gotoXY(SIZE * 4 + 30 + 18, 15);
	cout << a.score2;
	_Common::gotoXY(2, 1);
	while (g.isContinue())
	{
		if (!g.getTurn())
		{
			if (g.DemNuocCoDaDi() == 0)
			{
				g.setX((SIZE * 4 / 2)-2);
				g.setY((SIZE * 2 / 2)-1);
				_Common::gotoXY((SIZE * 4 / 2) - 2, (SIZE * 2 / 2) - 1);
				g.setCommand(13);
			}
			else
			{
				g.TimKiemNuocDi();
				int x = g.getXatEnter();
				int y = g.getYatEnter();
				_Common::gotoXY(x, y);
				Sleep(300);
				g.setCommand(13);
			}
		}
		else
			g.waitKeyBoard();
		if (g.getCommand() == 27)
		{
			PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
			return 27;
		}
		else
		{
			switch (g.getCommand())
			{
			case 'A':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveLeft();
				break;
			case 'D':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveRight();
				break;
			case 'W':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveUp();
				break;
			case 'S':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveDown();
				break;
			case 'L':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.SaveGame(-5);
				break;
			case 'T':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				LoadLoad();
				break;
			case 13:
				PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
				int x = g.getXatEnter();
				int y = g.getYatEnter();
				if (g.processCheckBoard()){
					switch (g.processFinish(x, y)){
					case -1:
						a.score1++;
						while (k)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
									load = 0;
									return PlayerVsCom(a,load,data);
									break;
								case 27:
									PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
									system("cls");
									ScreenStartGame(n-1);
									break;
								}
							}
						}
						break;
					case 1:
						a.score2++;
						while (k)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
									load = 0;
									return PlayerVsCom(a, load, data);
									break;
								case 27:
									PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
									system("cls");
									ScreenStartGame(n-1);
									break;
								}
							}
						}

						break;
					case 0:
						while (k)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
									load = 0;
									return PlayerVsCom(a, load, data);
									break;
								case 27:
									PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
									system("cls");
									ScreenStartGame(n-1);
									break;
								}
							}
						}
						break;
					}
				}
			}
		}

	}
}
int PlayerVsCom2(Diem &a, int load, char data[30])
{
	int n = 99;
	int k = 1;
	HienTroChuot();
	_Game g(SIZE, 0, 0);
	g.setCountXY();
	if (load == -4)
	{
		g.LoadGame(data);
	}
	else
	{
		g.startGame();
		g.setTurn();
	}
	PrintScoreBoard();
	Textcolor(Cyan);
	_Common::gotoXY(SIZE * 4 + 32, 24);
	cout << " PLAYER VS BOT (EASY) ";
	Textcolor(Blue);
	_Common::gotoXY(SIZE * 4 + 30 + 18, 5);
	cout << a.score1;
	Textcolor(Red);
	_Common::gotoXY(SIZE * 4 + 30 + 18, 15);
	cout << a.score2;
	_Common::gotoXY(2, 1);
	while (g.isContinue())
	{
		if (!g.getTurn())
		{
			if (g.DemNuocCoDaDi() == 0)
			{
				g.setX((SIZE * 4 / 2) - 2);
				g.setY((SIZE * 2 / 2) - 1);
				_Common::gotoXY((SIZE * 4 / 2) - 2, (SIZE * 2 / 2) - 1);
				g.setCommand(13);
			}
			else
			{
				g.TimKiemNuocDi2();
				int x = g.getXatEnter();
				int y = g.getYatEnter();
				_Common::gotoXY(x, y);
				Sleep(300);
				g.setCommand(13);
			}
		}
		else
			g.waitKeyBoard();
		if (g.getCommand() == 27){
			PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
			return 27;
		}
		else
		{
			switch (g.getCommand())
			{
			case 'A':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveLeft();
				break;
			case 'D':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveRight();
				break;
			case 'W':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveUp();
				break;
			case 'S':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveDown();
				break;
			case 'L':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
					g.SaveGame(-4);
				break;
			case 'T':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				LoadLoad();
				break;
			case 13:
				PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
				int x = g.getXatEnter();
				int y = g.getYatEnter();
				if (g.processCheckBoard()){
					switch (g.processFinish(x, y)){
					case -1:
						a.score1++;
						while (k)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
									load = 0;
									return PlayerVsCom2(a,load,data);
									break;
								case 27:
									PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
									system("cls");
									ScreenStartGame(n);
									break;
								}
							}
						}

						break;
					case 1:
						a.score2++;
						while (k)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
									load = 0;
									return PlayerVsCom2(a,load,data);
									break;
								case 27:
									PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
									system("cls");
									ScreenStartGame(n);
									break;
								}
							}
						}

						break;
					case 0:
						while (k)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
									load = 0;
									return PlayerVsCom2(a,load,data);
									break;
								case 27:
									PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
									system("cls");
									ScreenStartGame(n);
									break;
								}
							}
						}
						break;
					}
				}
			}
		}

	}
}
int PlayerVsPlayer(Diem &a, int load, char data[30])
{
	int k = 1;
	int n = 99;
	HienTroChuot();
	_Game g(SIZE, 0, 0);
	g.setCountXY();
	if (load == -30)
	{
		g.setTurn();
		g.LoadGame(data);
	}
	else if (load == -31)
		{
		g.LoadGame(data);
		}
		else 
			g.startGame();
	PrintScoreBoard();
	Textcolor(Cyan);
	_Common::gotoXY(SIZE * 4 + 32, 24);
	cout << " PLAYER VS PLAYER ";
	Textcolor(Blue);
	_Common::gotoXY(SIZE * 4 + 30 + 18, 5);
	cout << a.score1;
	Textcolor(Red);
	_Common::gotoXY(SIZE * 4 + 30 + 18, 15);
	cout << a.score2;
	_Common::gotoXY(2, 1);
	while (g.isContinue())
	{
		g.waitKeyBoard();
		if (g.getCommand() == 27){
			PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
			return 27;
		}
			
		else
		{
			switch (g.getCommand())
			{
			case 'A':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveLeft();
				break;
			case 'D':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveRight();
				break;
			case 'W':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveUp();
				break;
			case 'S':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				g.moveDown();
				break;
			case 'L':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				if (g.getTurn() == 1)
					g.SaveGame(-31);
				else
					g.SaveGame(-30);
				break;
			case 'T':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				LoadLoad();
				break;
			case 13:
				PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
				int x = g.getXatEnter();
				int y = g.getYatEnter();
				if (g.processCheckBoard()){
					switch (g.processFinish(x, y)){
					case -1:
						a.score1++;
						while (k)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
									load = 0;
									return PlayerVsPlayer(a,load,data);
									break;
								case 27:
									PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
									system("cls");
									ScreenStartGame(n);
									break;
								}
							}
						}
						break;
					case 1:
						a.score2++;
						while (k)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
									load = 0;
									return PlayerVsPlayer(a, load, data);
									break;
								case 27:
									PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
									system("cls");
									ScreenStartGame(n);
									break;
								}
							}
						}
						break;
					case 0:
						while (k)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
									load = 0;
									return PlayerVsPlayer(a, load, data);
									break;
								case 27:
									PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
									system("cls");
									ScreenStartGame(n);
									break;
								}
							}
						}
						break;

					}
				}
			}
		}
	}
}
