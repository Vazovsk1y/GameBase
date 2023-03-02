//#pragma once

#ifndef ProverkaAndInitializationm_H
#define ProverkaAndInitializationm_H

#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

constexpr auto LENGTH = 4;                // длина(кол-во) символов в 4 значном числе.

vector <char> initialization();
vector <char> randomizer();
bool gameFlag(vector <char> userNumber);

#endif // !ProverkaAndInitializationm