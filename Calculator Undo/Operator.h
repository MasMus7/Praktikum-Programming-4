#include<iostream>
using namespace std;

class Operator{
	public:
		int num1, num2, hasil1;
		float hasil;

		void add() {
			hasil1 = num1 + num2;
			cout << hasil1;
		}
		void subtract() {
			hasil1 = num1 - num2;
			cout << hasil1;
		}
		void multiple() {
			hasil1 = num1 * num2;
			cout << hasil1;
		}
		void divide() {
			hasil1 = num1 / num2;
			cout << hasil1;
		}
};
