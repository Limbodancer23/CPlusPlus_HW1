#include <iostream>
/*
1)������� � ���������������� ���������� ���������� ����� ������ (short int, int, long long, char, bool, float, double).
2)������� ������������(enum) � ���������� ���������� �������� ��� ���� � �������� - ������.
3)������� ������, ��������� ��������� �������� ������ ������������ � ���������������� ���.
* ������� ���������(struct) ������ ����� ��� ���� � �������� - ������ � �������� ��� ����� ������������ ����������(��������� ��� ����� ������������).
* *������� ���������(struct) ������������: union (int, float, char) � 3 - � ������� ����(�����)
������������ ������ ���� �������� � ������ ������ ���������� � �����������(isInt, isFloat, isChar).������������������ ������ ������������� � ���� ���� ���������.
*/
short int sfoo = 1;
int ifoo = 11;
long long bigNum = 12312459112;
char name = 'dan';
bool flag = false;
float const PI = 3.14;
double const EXP = 2.71;
int main()
{
	enum COLORS
	{
		O,
		X,
		_
	};

	COLORS game[3] = { O, X, _ };


	struct GameOptions
	{
		wchar_t player1;
		wchar_t player2;
		int timer;
		int maxTime;
		bool playerTurn;
		bool isOver;
	};

	struct gameProcces
	{
		union typeOn {
			int number;
			float fnum;
			char string;
		};
		bool isInt;
		bool isFloat;
		bool isChar;
	};
	
}
