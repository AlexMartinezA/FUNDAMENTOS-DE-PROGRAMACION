// área del ciruclo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"conio.h"

using namespace std;

void main()
{
	float Pi,area,r;
	Pi=3.141516;
	cout<<"ingrese el valor de r: ";
	cin>>r;
	cout<<"el area del circulo es: ";
	area=Pi*r*r;
	cout<<area;
	getch();
}

