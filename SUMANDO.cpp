// sumando.cpp : Defines the entry point for the console application.
//autor:Alex Martínez Avendaño

#include "stdafx.h"
#include <iostream> 
#include "conio.h"
//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
using namespace std;

void main()

{
	float suma,a,b;
	cout<<"Ingresar el valor de a: ";
	cin>>a;
	cout<<"Ingresar el valor de b: ";
	cin>>b;
	cout<<"el resultado es: ";
	suma=a+b;
	cout<<suma;
	getch();
}