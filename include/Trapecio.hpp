#pragma once
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <iomanip>
#include "Metodo.hpp"
using namespace :: std;

class Trapecio:public Metodo {
	private:
		float x[2000];
		float fa, fb, moy, changuito, fx[2000];
		
	
	public:
		void EncontrarX();
		void AproximarX();
		void AproximarIntMin();
		void AproximarIntMax();

		void MostrarTabla();
		void MostrarResultado();
		
};
