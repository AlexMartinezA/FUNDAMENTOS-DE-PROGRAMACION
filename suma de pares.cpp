// saa.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;
void main()
{
	int n,num,sumapar=0,mayor=0,menor=1000,aux;
	cout<<"Cantidad de numeros:";cin>>n;
	while(n>0)
		{
			cout<<"Numeros:"; cin>>num;
			if(n==0)
			{mayor=num;menor=num;}
			if(num>mayor)
			{mayor=num;}
			if(num<menor)
			{menor=num;}
			if(num%2==0)
			{sumapar=sumapar+num;}
			n=n-1;
	}
cout<<"mayor:"<<mayor<<endl;
cout<<"menor:"<<menor<<endl;
cout<<"suma de pares:"<<sumapar<<endl;
getch();
}
