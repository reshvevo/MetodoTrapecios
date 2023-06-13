#include <stdio.h>
#include <math.h>
#include <iostream>
#include <iomanip>
#include "Metodo.hpp"
#include "Trapecio.hpp"
#include "RAINBOW.hpp"


using namespace :: std;
 
 int main(){
        Trapecio* cosa = new Trapecio();
        int opc = 0;
		do{
        cosa->LeerIntervalos();//Pide los datos a ingresar
        cosa->AproximarIntMin();//Evalua "a" dentro de la función
        cosa->AproximarIntMax();//Evalua "b" dentro de la función
        cosa->CalcularH();
        cosa->ObtenerNoIntervalos();//Obtiene el número de X que tendremos
        cosa->EncontrarX();//Calcula los valores de X
        cosa->AproximarX();//Calcula f(x) de las x
        cosa->MostrarTabla();//Encuentra los valores de X
        cosa->MostrarResultado();//Muestra el resultado final de nuestro metodo
        print_colored("¿Quieres volver a evaluar la integral con otros numeros?(Ingresa el numero correspondiente) \n Si = 1     No = cualquier otro numero \n \n", RED, BG_BLACK);
        cin>>opc;
        } while(opc = 1);//Seguira ejecutando el programa hasta que opc sea igual a 1
		

		system("pause");
        return 0;
    }
