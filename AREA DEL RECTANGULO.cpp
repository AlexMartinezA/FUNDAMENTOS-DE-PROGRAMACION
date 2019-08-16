// area del rectangulo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main()

{
	float area,a,b;
	cout<<"ingrese el valor de a: ";
	cin>>a;
	cout<<"ingrese el valor de b: ";
	cin>>b;
	cout<<"el area del rectangulo es: ";
	area= b*a;
	cout<<area;
	getch();
}

