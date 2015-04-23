//============================================================================
// Name        : tp01.cpp
// Author      : Nayla Taguada
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Nayla Taguada
//Curso: k1091
//AED - Turno: Noche
//Fecha 15/04/15

#include <iostream>
using namespace std;

int main() {
bool racingEsCampeon = true;

	string texto1str,texto2str,texto3str,finalstr;
	texto1str = "Racing";
	texto2str = "Subcampeon";
	texto3str = "Campeon";
	int numerito1,numerito2;
	numerito1 = 6;
	numerito2 = -1;
	if(!racingEsCampeon) {
	finalstr = texto1str+ " " + texto2str;
	cout << finalstr << endl;
}
	else {
		finalstr = texto1str+ " " + texto3str;
	cout << finalstr << endl;
	}
	int num1,num2;
	num1 = 12;
	num2 = 23;
	cout << "La suma es: " << num1+num2 << endl;
	cout << "La resta es: " << num1-num2 << endl;
	double resultado;
	double num1d,num2d;
	num1d = 123123;
	num2d = 123213124214;
	resultado = num1d/num2d;
	cout << "La division es: " << resultado << endl;
    char letra1,letra2;
    letra1 = 'n';
    letra2 = letra1 + 10;
    cout << letra2 << endl;
	if(numerito1>2 && numerito1<10) {
		cout<< "numero meyor a dos y menor a 10" <<endl;
	}
	if(numerito2>0 || numerito2==-3) {
		cout<<"Numero mayor a 0 o es -3"<<endl;
	}
    return 0;
}
