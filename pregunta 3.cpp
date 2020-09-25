 #include<iostream>
 #include<math.h>
 using namespace std;
 
int main()
 {
 	const int v = 340 ;
 	int t,d;
 	
 	
 	printf("Introduzca los valores \n\n");
 	printf("Valor de Tiempo (en segundos): ");
 	scanf ("%d", &t );  
 	
 	d=((t*v)/2);
 	
 	printf("\nD(en metros)= %d\n\n", d); 
 	
return 0; 
 }
