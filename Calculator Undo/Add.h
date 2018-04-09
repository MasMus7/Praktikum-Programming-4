#include<iostream>
#include"Number1.h"
#include"Number2.h"
using namespace std;

class Add{
	public:
		Number1 num1;
		Number2 num2;
		int hasil;
		void add(){
			hasil = num1.input + num2.input;
			cout<<hasil;
		}
};
