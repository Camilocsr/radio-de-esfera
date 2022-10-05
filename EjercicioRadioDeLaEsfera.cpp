// primer programa en c++
// Actividad clase tres.
//Crea un programa que pida al usuario el radio de una esfera y muestre por pantalla el volumen de la esfera.


#include<iostream>
#include<math.h>

using namespace std;
int main(){
	double Rad, area, volumen;
	cout<<"Ingrese el radio de la esfera: "<<endl;
	cin>> Rad;
	
	//area = 4 * M_PI * pow(Rad,2);
	volumen = (4/3) * M_PI * pow(Rad,3);
	cout<<"\nEl volumen de la esfera es: "<<volumen<<endl;
	
	
	return 0;
}
