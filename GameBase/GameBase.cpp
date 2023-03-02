#include <iostream>                    // игра быки и коровы упр 12, глава 5 из книги Страусупа.
#include <vector>
#include "BoolAndCow.h"                // для ф-ции поиска быков и коровы. Определения даны в спп файле с соответствующим названием.
#include "ProverkaAndInitialization.h" // для ф-ций ввода и инициализации.
using namespace std;


void displayTheUserNumber(vector <char> number)
{                                                   // ф-ция вывода пользовательского числа на екран.
	cout << "Your number: ";
	for (size_t i = 0; i < number.size(); i++)
	{
		cout << number[i] << ", ";
	}
	cout << endl;
}

void invitationTotheGame()
{

	cout << "\t\t\t\t\tHello, Base!" << endl;      // блок приглашения, оглашения задания
	cout << "\t\tI am proposing you to play the game \"Bools and Cows\"!" << endl;
	cout << "\t\tYou task is to guess the 4 numbers that program wished." << endl;
	cout << "\t\tProgram wished foursigh number where every sign is from 1 to 9." << endl;
	cout << "\t\tLike (1 5 6 8) or ( 2 8 4 1) or (5 5 6 6)." << endl;
	cout << "\t\tEnter four number and try to guess the number that program wished." << endl;
	cout << "\t\tFor quit the game you need to enter \"quit\"." << endl;

	cout << endl;
    system("pause");
}

void cinClear()        // ф-ция очистки потока ввода.
{
	cin.clear();
	while (cin.get() != '\n');
}

void gameLoop()                                                         // основная ф-ция игры.
{
	const int LENGTH_NUMBER = 4;                                        // константное значение длины числа (4 цифры), кол-во цифр в числе.
	int boolsCount, cowsCount;                                          // кол-во найденных быков и коров.

	vector <char> computerNumber = randomizer();                         // число в виде вектора, сгенерированное компом.
	vector <char> userNumber;                                            // число пользователя.

	system("cls");
	while (true)                                                         // блок цикличной игры.
	{
		userNumber = initialization();                                   // число в виде вектора, введенное пользователем.
		displayTheUserNumber(userNumber);                                // вывод пользовательского числа, чтобы он видел что учитывается только 4 символа, остальные бесполезны.

		if (gameFlag(userNumber))                                        // проверка на стоп-слово "quit".
			break;

		boolsCount = bools(userNumber, computerNumber, LENGTH_NUMBER);   // кол-во быков находится в ф-ции быки
		cowsCount = cows(userNumber, computerNumber, LENGTH_NUMBER);     // кол-во коров в ф-ции коровы.

		cout << boolsCount << " bools" << endl;
		cout << cowsCount << " cows" << endl;

		cinClear();                                                       // после работы с предыдущим числом пользоваетеля очищаем поток ввода от мусора.
		                                                                  // тк пользователь мог вводить больше 4 значений и они оставались в потоке, а нам с каждым ентером нужен чистый поток ввода.
		if (boolsCount == LENGTH_NUMBER)                                  // если обнаружено 4 быка, игра заканчивается.
		{
			computerNumber = randomizer();                                // генерирует заново число
			cout << "Congratulations! YOU WON!" << endl;
			system("pause");
			system("cls");
			cout << "System generate a new number!" << endl;
		}
	}
}

int main()
{
	system("title Bools and Cows");

	invitationTotheGame();       // приглашение в игру.

	gameLoop();                  // блок игры.

	return 0;
}



