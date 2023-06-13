#pragma once
#include<stdio.h>
#include<math.h>
#include<iostream>
#include<iomanip>
using namespace :: std;

class Metodo{
	public:
		float a,b,h;
		int n,g;
		
	
	public:
		float DesarrollarFuncion(float x);
		void ObtenerNoIntervalos();
		void LeerIntervalos();
		void CalcularH();
		
};
