//Tales Miura
//Area da circunferencia
#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

int main(){
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	
	double area, diametro, perimetro, raio;
	double PI=3.14;
	cout<<"Informe o perimetro da circunferencia \n";
	cin>>perimetro;
	diametro=perimetro/PI;
	raio=diametro/2;
	area=raio*raio*PI;
	cout<<"\nA area da circunferencia eh igual a "<<area;
	
	return 0;	
}
