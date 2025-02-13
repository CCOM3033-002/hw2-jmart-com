/*
Javier A. Martinez Ballagas / jmart-com

801-24-2310

CCOM 3033-001

*/

#include<iostream>

using namespace std;

int main()
{
  
    // Desplegar Proposito

    cout << "Este programa suma dos fracciones." << endl;

    // Declarar Variables

    double a;
    double b;;
    double c;
    double d;
    double resultN;
    double resultD;

    // Obtener variables

    cout << "Entre el numerador de la 1ra fracción: ";
    cin >> a;
    cout << "Entre el denominador de la 1ra fracción: ";
    cin >> b;

    cout << "Entre el numerador de la 2da fracción: ";
    cin >> c;
    cout << "Entre el denominador de la 2da fracción: ";
    cin >> d;

    // Calcular resultado

    resultN = (a * d) + (b * c);
    resultD = b * d;

    // Desplegar resultado

    cout << "La suma es: " << resultN << "/" << resultD << endl;


    return 0;
}
