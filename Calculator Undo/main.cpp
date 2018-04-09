#include<iostream>
#include"Add.h"
#include"Subtract.h"
#include"Multiple.h"
#include"Divide.h"
#include"Queue.h"
#include"Stack.h"

int main() {
	Add a;
	Subtract s;
	Multiple m;
	Divide d;
	int pilih;
	cout << "1. Penambahan\n"
		"2. Pengurangan\n"
		"3. Perkalian\n"
		"4. Pembagian\n";
	
	cin>>pilih;
	cout<<"*****************\n";
	
	switch(pilih){
		case 1:
			cin>>a.num1;
			cin>>a.num2;
			cout<<"hasilnya = ";
			a.add();
			break;
		
		case 2:
			cin>>s.num1;
			cin>>s.num2;
			cout<<"hasilnya = ";
			s.subtract();
			break;
		
		case 3:
			cin>>m.num1;
			cin>>m.num2;
			cout<<"hasilnya = ";
			m.multiple();
			break;
			
		case 4:
			cin>>d.num1;
			cin>>d.num2;
			cout<<"hasilnya = ";
			d.divide();
			break;
	}
}
