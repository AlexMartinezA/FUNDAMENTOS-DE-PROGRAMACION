// llame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;
int areacircunferencia(int r);
	int main(){
		int x;
		cout<<"Digite el radio:";
		cin>>x;
		cout<<"El area de la circunferencia es:"<<areacircunferencia(x)<<endl;

		getch();
		return 0;
}
int areacircunferencia (int r){
	int areacircun;
	areacircun=3.1415*r*r;
	return areacircun;
}
