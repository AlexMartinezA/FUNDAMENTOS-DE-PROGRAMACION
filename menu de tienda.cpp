// HOY.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;
void main()
{
	float pc,pp,pz;
	cout<<"precio x camisa, pantalones y zapatos: "; 
	cin>>pc>>pp>>pz;
	cout<<"---MENU---"<<endl;
	cout<<"1. camisa"<<endl;
	cout<<"2.pantalones"<<endl;
	cout<<"3.zapatos"<<endl;
	cout<<"4.facturar y salir"<<endl;
	int op,cc=0,cp=0,cz=0;
	while(true){
		cout<<"ingrese el menu";
		cin>>op;
		int cant;
		switch(op){
		case 1:cout<<"cantidad:"; cin>>cant;
			cc=cc+cant;
			break;
		case 2:cout<<"cantidad:"; cin>>cant;
			cp=cp+cant;
			break;
		case 3:cout<<"cantidad:"; cin>>cant;
			cz=cz+cant;
			break;
		case 4:cout<<"---FACTURA---"<<endl;
			cout<<"producto cantidad total:"<<endl;
			cout<<"camisa"<<" "<<cc<<" "<<cp*pc<<"Bs"<<endl;
			cout<<"pantalones"<<" "<<cp<<" "<<cp*pp<<"Bs"<<endl;
			cout<<"zapatos"<<" "<<cz<<" "<<cp*pz<<"Bs"<<endl;
			cout<<"total"<<cc*cp+cp*cp+cz*pz<<"Bs"<<endl;
		    break;
		default:
			cout<<"ERROR";
		}
	}
	getch();
}
			