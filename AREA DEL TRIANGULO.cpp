// �rea del tri�ngulo.cpp : Defines the entry point for the console application.
//autor: Alex Mart�nez Avenda�o

#include "stdafx.h"
#include<iostream>
#include"conio.h"

using namespace std;

void main()

{
	float area,a,b;
	cout<<"Ingrese el valor de a: ";
	cin>>a;
	cout<<"Ingrese el valor de b: ";
	cin>>b;
	cout<<"El area del circulo es: ";
	area=b*a/2;
	cout<<area;

	getch ();
}

