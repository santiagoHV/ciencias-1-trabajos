#include <cstdlib>
#include <iostream>

using namespace std;

template < class T >  // o template<typename T >
T maximo( T valor1, T valor2, T valor3 )
{ T max = valor1;
   if ( valor2 > max )
      max = valor2;
   if ( valor3 > max )
      max = valor3;
   return max;
}

int main()
{int entero1, entero2, entero3; // maximo con valores enteros
 cout << "Introduzca tres valores enteros: ";
 cin >> entero1 >> entero2 >> entero3;
 cout << "El valor entero mayor es: "<< maximo(entero1,entero2, entero3);        
 double doble1, doble2, doble3; // maximo con valores double
 cout << "\n\nIntroduzca tres valores double: ";
 cin >> doble1 >> doble2 >> doble3;
 cout << "El valor double mayor es: " << maximo( doble1, doble2, doble3 );
 char car1, car2, car3;
 cout << "\n\nIntroduzca tres caracteres: ";
 cin >> car1 >> car2 >> car3;
 cout << "El valor caracter mayor es: "<<maximo( car1,car2,car3 )<<endl;
 return 0;  // indica terminaci�n exitosa 
 } 

