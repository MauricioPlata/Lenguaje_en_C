
#include<iostream>
using namespace std;

int main(){
int numero;
int entrada;


cout<<"Opcion numero 1 - Mostrar tabla de multiplicar\n";
cout<<"Opcion numero 2 - Numero mayor a 100\n";
cout<<"Seleccione una opcion: ";
cin>>entrada;

switch(entrada){
	case 1: 
	cout<<"¿Que tabla desea visualizar?";
	cin>>numero;
			int i;
			for(i=1; i<=10; i++){
				cout<<i;
				cout<<"x";
				cout<<numero;
				cout<<"=";
				cout<<i*numero<<endl;
			}
	break;
	case 2:
		cout<<"Ingresa un numero: ";
		cin>>numero;
		while(numero<= 100){
			cout<<"Intentalo de nuevo, Ingresa un nuevo numero mayor a 100: ";
			cin>>numero;
		}
	break;
	
	default: cout<<"Selecciona una opcion entre 1 y 2  ";break; 
}
	return 0;
}




