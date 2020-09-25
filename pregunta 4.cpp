 
 #include<iostream>
 #include<math.h>
 #include<fstream> //esta libreria facilita el nombrar el archivo broh! //
 using namespace std;
 void escribir();
int main()
 {
 	 escribir();
	system("pause");
	
 	const int v = 340 ;//constante velocidad del sonido 340 m/s a temperatura ambiente//
 	int t,d;
 	
 	
 	printf("Introduzca los valores \n\n");
 	printf("Valor de Tiempo (en segundos): ");
 	scanf ("%d", &t );  //este es para asignarlo a la variable//
 	
 	d=((t*v)/2);
 	
 	printf("\nD(en metros)= %d\n\n", d); //pa que aparezca en pantalla bro ;D //
 	
 	
	
	
	return 0 ;
}

void escribir()
{
	using namespace std;
	float d,t;
	ofstream archivo; //para crear el archivo// 
	string frase; // esto es para que el user le asigne el nombre//
	

	archivo.open("Tabla de valores de variables",ios::out); //para abrir el archivo!! // 
	if(archivo.fail()){   /* este es por si hay error*/
		
       cout<<"no se puede abrir el archivo";
       exit(1);
	}
      cout<<"\nIngrese su nombre y codigo correspondiente para el encabezado:"<<endl;
   getline(cin,frase); //memorizar caracteres ingresados //
   
   archivo<<frase; 
   archivo<<"\n\nLa siguientes son las variables definidas de la ecuación en el siguiente orden: \n\n t(segundos):\n\n d(metros):\n\n"<<endl;
   archivo<<t<<endl;
   archivo<<d<<endl;
   archivo.close(); //para cerrar el archivo//
   
	
}

