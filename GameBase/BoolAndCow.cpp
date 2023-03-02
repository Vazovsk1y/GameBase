#include "BoolAndCow.h"


int bools(vector <char> guess,vector<char> number, const int SIZE)
// �-��� ���������� ���-�� �����.
// �����������: ��� ��������� �������, ����� ������.
// ����������� ������� ���-�� �����.
{
	int counterBools = 0;

	for (int i = 0; i < SIZE; ++i)           // ���������� ������ �������������� �������� ��������, ���� �������� ���������� �� ���-�� ����� �������������. 
	{
		if (guess[i] == number[i])           // �.� ��������� � ������� � ��� �������.
			counterBools++;
	}
	return counterBools;
}

int cows(vector <char> guess,vector<char> number, const int SIZE)
{
	int counterCows = 0;
	for (int i = 0; i < SIZE; ++i)           // ���� ���������� ���-�� ����� � ����� ������� �������� �������� ������� �������� ���������� �������� 
	{
		for (int j = 0; j < SIZE; ++j)       // � ������ ��������� ���������(������� ����) ���������. 
		{
			if (guess[i] == number[j])        // ���� ��������� ���������� ��������
			{
				if (j != i)                  // ����������� �� ������� �� ����� - ������� ������.
					counterCows++;
			}
		}
	}
	return counterCows;
}
