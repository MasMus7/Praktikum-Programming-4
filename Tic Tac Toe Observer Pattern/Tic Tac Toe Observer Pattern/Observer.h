#pragma once
#include"Board.h"
#include<iostream>
using namespace std;

class Observer {
	public:
		virtual void Update(char square) = 0;
};