#include "ProverkaAndInitialization.h"

vector<char> initialization()        // инициализация пользовательского числа.
{
	vector <char> guessNumber;       // пользователь может вводить сколько угодно и как угодно символы, но занесены будут только 4 первых.

	cout << "Enter your number: ";
	for (int i = 0; i<LENGTH ; i++)
	{
		char temp;
		cin >> temp;
		guessNumber.push_back(temp);
	}
	
	return guessNumber;
}

vector<char> randomizer()
{                                         // генерирует рандомный вектор состоящий из цифр от 1 до 9
	srand(time(0));
	vector <char> computerNumber;
	char temp;
	for (size_t i = 0; i < 4; i++)
	{
		temp = '0' + rand() % 9 + 1;      // которые переводятся в чар, путем добавления '0' к сгенерированому числу.
		computerNumber.push_back(temp);
	}
	return computerNumber;
}

bool gameFlag(vector <char> userNumber)               // ф-ция проверки на наличие стоп слова.
{
	vector <char> stopWord = { 'q', 'u', 'i', 't' };

	if (stopWord == userNumber)
		return true;

	return false;
}

