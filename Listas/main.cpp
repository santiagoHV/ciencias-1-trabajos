#include <iostream>
#include <cstdlib>
#include <string>
#include "lista.h"

using namespace std;

struct per{
	string nombre;
	int ID;
};


int main(int argc, char** argv) {
	
	List<int> list_enteros;
	List<char> list_char;
	List <per> list_per;
	per P1;
	
	int i, tamanio, dato;
		
	list_enteros.insertar_inicio(3);
	list_enteros.insertar_inicio(5);
	//list_enteros.insertar_pos(8,2);
	list_char.insertar_inicio('s');
	list_char.insertar_inicio('f');
	//list_char.insertar_pos('z',30);
	
	P1.nombre = 'Deicy';
	P1.ID=12345;
	list_per.insertar_inicio(P1);
	P1.nombre="Pepito";
	P1.ID = 5468;
	list_per.insertar_inicio(P1);
	P1.nombre="Margarita";
	P1.ID = 1346;
	//list_per.insertar_pos(P1,2);
	
	
	tamanio = list_enteros.Tam_Lista();
	for(i = 0; i <= tamanio; i ++){
		dato = list_enteros.obtenerDato(i);
		cout<<i<<"->"<<dato<<endl;
	}
	
	
	
	
	return 0;
}
