#include <stdio.h>
#include <math.h>
#include <iostream>
#include <iomanip>
#include "Metodo.hpp"
#include "Trapecio.hpp"
using namespace :: std;



void Trapecio::AproximarIntMin(){
	fa = DesarrollarFuncion(a);
}
void Trapecio::AproximarIntMax(){
	fb= DesarrollarFuncion(b);
}
void Trapecio::EncontrarX(){
	int j = 0;
	for(float i= a ; i <= b; i = i+h ){
		x[j]=i;
		j++;          
	};
}

void Trapecio::MostrarTabla(){
	cout << fixed;//Ayuda a que cuente el setprecision despues del punto
	cout << setprecision(8);//Numero de digitos que queremos ver
	cout<<"Los valores de las x y f(x) son:"<<endl;
	cout<<"|   X   | Valor de X |  f(x)  | Error Relativo |"<<endl;
	float ER = 0;
	cout<<"| X"<<0<<" | "<<x[0]<<" | "<<fx[0]<<" | "<< ER << " |"<<endl;
	for(int j = 1; j <= g; j++){
		ER=(abs(fx[j]-fx[j-1]))/fx[j];
		cout<<"| X"<<j<<" | "<<x[j]<<" | "<<fx[j]<<" | "<< ER << " |"<<endl;
		
	}; }

void Trapecio::MostrarResultado(){
	cout << fixed;
	cout << setprecision(8);
	cout<<"El resultado final es: "<< changuito<< endl;
}
void Trapecio::AproximarX(){
	moy = 0;
	changuito = 0;
	fx[0]= DesarrollarFuncion(x[0]);
	fx[g]= DesarrollarFuncion(x[g]);
	for(int j = 1; j<=(g-1);j++){
		moy+=fx[j]=DesarrollarFuncion(x[j]);
	};
	changuito=(h/2)*(fa+fb+(2*(moy)));
	
}

