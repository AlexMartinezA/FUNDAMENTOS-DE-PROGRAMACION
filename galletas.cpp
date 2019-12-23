#include "stdafx.h"
#include <iostream>
#include <string.h>
using namespace std;




float* solicitarPreciosGalletas() {
	static float preciosGalletas[6]; // con esto se cal

	float pChoc, pGeng, pMiel, pAlegres, lado, alto;
	cout << "------------------------------------" << endl;
	cout << "---------- MENU DE PRECIOS ---------" << endl;
	cout << "------------------------------------" << endl;
	cout << "Ingrese el Precio de las Galletas (Bs)" << endl;

	cout << "1) Galleta de Chocolate : ";
	cin >> pChoc;
	cout << endl;

	cout << "2) Galleta de Gengibre : ";
	cin >> pGeng;
	cout << endl;

	cout << "3) Galleta de Miel : ";
	cin >> pMiel;
	cout << endl;

	cout << "4) Galletas Alegres : ";
	cin >> pAlegres;
	cout << endl;
	
	cout << "------------------------------------" << endl;

	preciosGalletas[0] = pChoc;
	preciosGalletas[1] = pGeng;
	preciosGalletas[2] = pMiel;
	preciosGalletas[3] = pAlegres;
	
	return preciosGalletas;
}


void mostrarMenuOpciones(float* precios) {
	float pChoc, pGeng, pMiel, pAlegr, lado, alto;

	pChoc = *(precios + 0);
	pGeng = *(precios + 1);
	pMiel = *(precios + 2);
	pAlegr = *(precios + 3);
	

	cout << "--------- MENU DE OPCIONES ------------" << endl;
	cout << "1. Galletas de Chocolate\t" << pChoc << " Bs." << endl;
	cout << "2. Galletas de Gengibre \t" << pGeng << " Bs." << endl;
	cout << "3. Galletas de Miel\t" << pMiel << " Bs." << endl;
	cout << "4. Galletas de Alegres\t" << pAlegr << " Bs." << endl;
	cout<<"5.area del triangulo"<<endl;
	cout << "6. FIN, FACTURAR Y SALIR" << endl;
	cout << "------------------------------------" << endl;
}

int pedirCantGalleta() {
	cout << "Ingresar Cantidad : ";
	int cant;
	cin >> cant;
	return cant;
}

bool algunProductoComprado(float* cantidades, int n) {
	for (int i = 0; i < n; i++)
	{
		int cantAct = *(cantidades + i);
		if (cantAct != 0) {
			return true;
		}
	}
	return false;
}

void facturarPedido(float* cantidades, float* precios, int n) {
	static float importeTotal[4];
	float importe = 0;
	if (algunProductoComprado(cantidades, n)) {
		for (int i = 0; i < n; i++)
		{
			float cantAct = *(cantidades + i);
			float precioAct = *(precios + i);
			importeTotal[i] = cantAct * precioAct;
			importe = importe + importeTotal[i];
		}
		cout << "---------------------------- FACTURA DE COMPRA ----------------------------" << endl;
		cout << "---------------------------------------------------------------------------" << endl;
		cout << "\t" << "PRODUCTO" << "\t\t\t" << "CANTIDAD" << "\t\t" << "SUBTOTAL" << endl;
		cout << "---------------------------------------------------------------------------" << endl;

		int nro = 0;
		if (cantidades[0] > 0) {
			cout << ++nro << "\t" << "Galletas de Chocolate" << "\t\t" << cantidades[0] << "\t\t" << importeTotal[0] << endl;
		}
		if (cantidades[1] > 0) {
			cout << ++nro << "\t" << "Galletas de Gengibre" << "\t\t" << cantidades[1] << "\t\t" << importeTotal[1] << endl;
		}
		if (cantidades[2] > 0) {
			cout <<++nro << "\t" << "Galletas de Miel" << "\t\t" << cantidades[2] << "\t\t" << importeTotal[2] << endl;
		}
		if (cantidades[3] > 0) {
			cout << ++nro << "\t" << "Galletas Alegres" << "\t\t" << cantidades[3] << "\t\t" << importeTotal[3] << endl;
		}

	}

	else {
		cout << "NO SE AGREGO NINGUN PRODUCTO AL CARRITO DE COMPRAS" << endl;
	}
	cout << "---------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\t\tTOTAL: " << importe << endl;
}

void realizarCompra(float* precios, int n) {
	static float cantidades[4];  // 0 => Cant. Chocolate, 1 => Cant. Gengibre, 2 => Galletas Miel, 3 => Galletas Alegres
	float* importesPorGalleta = NULL;
	bool detenerCompra = false;
	mostrarMenuOpciones(precios);
	while (!detenerCompra) {
		bool opcionIncorrecta = false;
		cout << "Seleccione una opcion (elija el numero): " << endl;
		int opcion;
		cin >> opcion;
		int cantGalleta;
		switch (opcion)
		{
		case 1:
			cout << "Galletas de Chocolate" << endl;
			break;
		case 2:
			cout << "Galleta de Gengibre" << endl;
			break;
		case 3:
			cout << "Galleta de Miel" << endl;
			break;
		case 4:
			cout << "Galleta Alegres " << endl;
			break;
		case 5:
			cout << "calculo del triangulo" << endl;
			float areatri,lado, alto;
			cout<<"ingrese los valores";cin>>lado>>alto;
			areatri=(lado*alto)/2;
			cout<<"area del TRIANGULO ES"<<areatri<<endl;
			break;
		case 6: // Facturar y Salir
			facturarPedido(cantidades, precios, n);
			detenerCompra = true;
			break;
		default:
			cout << "Opcion Incorrecta, a continuacion nuevamente el menu de opciones" << endl;
			mostrarMenuOpciones(precios);
			opcionIncorrecta = true;
			break;
		}
		if (!detenerCompra && !opcionIncorrecta) {
			cantGalleta = pedirCantGalleta();
			cantidades[opcion - 1] = cantidades[opcion - 1] + cantGalleta;
		}
	}
}



int main()
{
	int cantGalletas = 4;
	float* precios = solicitarPreciosGalletas();

	realizarCompra(precios, cantGalletas);



	system("pause");
	return 0;
}