#include "BoolAndCow.h"


int bools(vector <char> guess,vector<char> number, const int SIZE)
// ф-ция нахождения кол-ва быков.
// предусловие: два чаровских массива, длина поиска.
// постусловие возврат кол-во быков.
{
	int counterBools = 0;

	for (int i = 0; i < SIZE; ++i)           // сравниваем каждые соответсвующие елементы массивов, если найденны одинаковые то кол-во быков увеличивается. 
	{
		if (guess[i] == number[i])           // т.е совпадает и елемент и его позиция.
			counterBools++;
	}
	return counterBools;
}

int cows(vector <char> guess,vector<char> number, const int SIZE)
{
	int counterCows = 0;
	for (int i = 0; i < SIZE; ++i)           // блок нахождения кол-ва быков и коров методом проверки проверки каждого литерала введенного значения 
	{
		for (int j = 0; j < SIZE; ++j)       // с каждым литералом имеющимся(заданым мною) значением. 
		{
			if (guess[i] == number[j])        // если находятся одинаковые значения
			{
				if (j != i)                  // проверяется их позиция НЕ равна - найдена корова.
					counterCows++;
			}
		}
	}
	return counterCows;
}
