#pragma once
#include"Observer.h"
#include<iostream>
using namespace std;

class Boards {
	
public:
	char square[10] = { 'o','1','2','3','4','5','6','7','8','9' };
	int CheckWin();
	void Board();
};