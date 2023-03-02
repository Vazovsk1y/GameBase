#include "ProverkaAndInitialization.h"

vector<char> initialization()        // ������������� ����������������� �����.
{
	vector <char> guessNumber;       // ������������ ����� ������� ������� ������ � ��� ������ �������, �� �������� ����� ������ 4 ������.

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
{                                         // ���������� ��������� ������ ��������� �� ���� �� 1 �� 9
	srand(time(0));
	vector <char> computerNumber;
	char temp;
	for (size_t i = 0; i < 4; i++)
	{
		temp = '0' + rand() % 9 + 1;      // ������� ����������� � ���, ����� ���������� '0' � ��������������� �����.
		computerNumber.push_back(temp);
	}
	return computerNumber;
}

bool gameFlag(vector <char> userNumber)               // �-��� �������� �� ������� ���� �����.
{
	vector <char> stopWord = { 'q', 'u', 'i', 't' };

	if (stopWord == userNumber)
		return true;

	return false;
}

