// Prototipo de Presentacion de Menus

// Se insertan las librerias necesarias
#include<iostream>  // cin    cout
#include<stdio.h>   // printf
using namespace std ;
//  declaracion de variables globales
int  mult, n1, n2, ab   ; 
// declaracion de prototipos

int  sumar_numeros ( int  p , int q);            //  si-si
void  restar_numeros (  int p , int   q , int *resul);      // si-no,  por referencia
void  multiplicar_numeros ( int p , int   q ) ;       // si-no, global
float  dividir_numeros ();    // no - si 
void  valor_ab  ();       // no-no

// Programa principal
int main()
{
// Area de declaracion de variables locales
	int opcion = 0, num1, num2, suma , resta ;  
	float divi ; 
	 
	while (opcion != 6 )
	{	
		cout<<"\n				MENU PRINCIPAL ";
		cout<<"\n\n\n";
		cout<<"			1. Sumar 2 numeros ? \n";
		cout<<"			2. Restar 2 numeros ? \n";
		cout<<"			3. Multiplicar 2 numeros ?\n";
		cout<<"			4. Dividir 2 numeros ? \n";
		cout<<"			5. Valor absoluto de un numero ? \n";
		cout<<"			6. Salir\n\n";
		cout<<"\n			Digite la opcion que desee: ";
		cin>>opcion;

	switch (opcion)      //  en caso de que opcion sea 
	{

	case 1:  //sumar 2 numeros 
		cout << "\n ingrese dos numeros separados por espacios : ";
		cin >> num1>> num2 ;
		// invocacion del modulo de suma   int  sumar_numeros ( int  p , int q); 
		suma = sumar_numeros (   num1 , num2  );
		cout << " \n La suma es : " << suma ;
		//  cout << " \n La suma es : " <<   sumar_numeros (   num1 , num2  );
		break ;

	case 2: // restar 2 numeros    // void  restar_numeros (  int p , int   q , int *resul);
		
		cout << "\n ingrese dos numeros separados por espacios : ";
		cin >> num1 >> num2 ;
		restar_numeros ( num1, num2, &resta  );
		cout << " \n La resta es : " << resta ;
		
		break;

	case 3:  //Multiplicar 2 numeros    void  multiplicar_numeros ( int p , int   q )
		cout << "\n ingrese dos numeros separados por espacios : ";
		cin >> num1 >> num2 ;
		multiplicar_numeros  ( num1  , num2  ); 
		cout << " \n La multiplicacion es : " << mult ;	
		break;

	case 4:	 // Dividir 2 numeros    float  dividir_numeros (); 
		cout << "\n ingrese el dividendo y el divisor separados por espacios : ";
		cin >> n1 >> n2 ;
		if ( n2 != 0 )
		{
			divi = dividir_numeros();      
			cout << " \n La division es : " << divi ;	
    		}
		else 
		{
			cout << "\n EL DIVISOR NO PUEDE SER CERO  \n" ;
		}
		break;

	case 5:		// void  valor_ab  ();
		cout << "\n Ingrese un numero entero cualquiera : " ;
		cin >>  n1 ;
		valor_ab();
		cout << " \n el valor absoluto del numero es : "<< ab ;
		
		break;

	case 6:  
		
		printf("\n !!! Adios !!!\n");
		break;

	default:  // Opcion invalida
			printf("\n                        ==============================");
			printf("\n                        ! **** Opcion Invalida ***** !") ;
			printf("\n                        ==============================");
	

	}  // fin del switch
	cout<<endl;
	 
}	// fin del while
		

}  // fin del main

int  sumar_numeros ( int  p , int q)   //  si-si
{
  int sum ; 
  sum = p + q;
  return  (sum)  ;     //  return ( p+q);
}

void  restar_numeros (  int p , int   q , int *resul)     // si-no,  por referencia
{
    
*resul  =  p - q ;

}
void  multiplicar_numeros ( int p , int   q )        // si-no, global
{

mult = p * q ;


}

float  dividir_numeros ()  // no - si 
{  
float cociente ; 
  
cociente  = (n1 *1.0)/ n2 ;       //   cociente =  n1 / n2 ---->  7  / 2 =   3.0 

return ( cociente);

}



void  valor_ab  ()
{
if ( n1 < 0 )
		{
			ab = n1 * ( -1) ;
		}
		else
		{
		ab = n1 ;
		}

}

