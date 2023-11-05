#include <iostream>
/*
1)Создать и инициализировать переменные пройденных типов данных (short int, int, long long, char, bool, float, double).
2)Создать перечисление(enum) с возможными вариантами символов для игры в крестики - нолики.
3)Создать массив, способный содержать значения такого перечисления и инициализировать его.
* Создать структуру(struct) данных «Поле для игры в крестики - нолики» и снабдить его всеми необходимыми свойствами(подумайте что может понадобиться).
* *Создать структуру(struct) объединяющую: union (int, float, char) и 3 - и битовых поля(флага)
указывающими какого типа значение в данный момент содержится в объединении(isInt, isFloat, isChar).Продемонстрировать пример использования в коде этой структуры.
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
