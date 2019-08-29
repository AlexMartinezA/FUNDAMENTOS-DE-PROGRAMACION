// ejercicio 8.cpp : Defines the entry point for the console application.

//Alex Martinez 



#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "math.h"

//---------------------

using namespace std;

void main()

{

	float c,a,interes,i;
	cout<< "ingrese el capital: ";
	cin>> c;
	cout<< "ingrese el periodo de años: ";
	cin>> a;
	cout<< "ingrese el interes: ";
	cin>> interes;
	i=c*(interes/100)*(a/365);
	cout<<"el interes simple es: "<< i;
	getch();

}