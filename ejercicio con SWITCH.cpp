// VHV.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"conio.h"
using namespace std;

void main()
{
	float costo;
	int opcion, cantidad;
	cout<<"Ingrese la cantidad: ";
	cin>>cantidad;
	cout<<"Seleccione su pedido: ";
	cout<<"/n /t MENU"<<endl;
	cout<<"/n /nt===="<<endl;
	cout<<"1.HAMBURGUESA"<<endl;
	cout<<"2.HAMBURGUESA CON QUESO"<<endl;
	cout<<"3.PAPAS FRITAS"<<endl;
	cout<<"4.SODA"<<endl;
	cout<<"Ingrese una opcion: ";
	cin>>opcion; 

	switch(opcion)
	{
	case 1: costo=3;
		break;
	case 2: costo=5;
		break;
	case 3: costo=2;
		break;
	case 4: costo=2.5;
		break;
	default: cout<<"OPCION INVALIDA: "<<endl;
	}
	cout<<"El costo es: "<<costo*cantidad;
	getch();
}