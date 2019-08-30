// ejercicio 8.cpp : Defines the entry point for the console application.

//Alex Martinez 



#include "stdafx.h"
#include <iostream>
#include <string>
#include "conio.h"
#include "math.h"

//---------------------

using namespace std;

void main()

{
	float H,PH,IVA, salariobruto,salarioneto;
	string N;
	IVA=0.13;

	cout<<"ingrese el nombre del Trabajador: ";
	cin>>N;
	cout<<"Ingrese el numero de horas trabajadas por el trabajador: ";
	cin>>H;
	cout<<"Ingrese el precio por hora: ";
	cin>>PH;	
	salariobruto=H*PH;
	cout<<salariobruto;
	if (salariobruto>8272)
	{
		salarioneto=salariobruto-(salariobruto*IVA);
		}
		getch();
}
			
		
			

