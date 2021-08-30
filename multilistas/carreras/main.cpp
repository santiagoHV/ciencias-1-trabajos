#include <iostream>
#include <cstdlib>
#include <string>
#include "simpleList.h"
#include "multiList.h"

using namespace std;

int main(int argc, char** argv) {
	
	//Personas
	
	MultiList<string> personsList;
	
	personsList.addPerson("Raulito", "Basket", "Sistemas");
	cout<<personsList.obtenerDatoMulti(0)<<endl;
	
	SimpleList<int> headersList;
	
	//lista de cabeceros
	headersList.push("Sistemas", 0);
	headersList.push("Electronica", 0);
	headersList.push("Indusplay", 0);
	headersList.push("Electrica", 0);
	
	headersList.push("Danza", 0);
	headersList.push("Basket", 0);
	headersList.push("Natacion", 0);
	headersList.push("Beisbol", 0);
	
	headersList.push("Nombres", 0);
	headersList.push("Edades", 0);
	
	cout<<headersList.obtenerDato("Sistemas")<<endl;
	
	
	
//	headersList.pop("Sistemas");
//	
//	cout<<headersList.obtenerDato("Sistemas")<<endl;
	
	return 0;
}
