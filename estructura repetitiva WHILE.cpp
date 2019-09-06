// WHILE.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;
void main()

{
	int n,i,fact;
	fact=1
	i=1
		cout<<"Ingrese el valor de n: ";
	cin>>n;
	while(i<=n)
	{
			fact=fact*i;
			i=i+1;
	}
	cout<<"Factorial"<<fact;
	getch();
}
	
	