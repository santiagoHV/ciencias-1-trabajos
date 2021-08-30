#include <iostream>
#ifndef MULTILIST_H
#define MULTILIST_H
using namespace std;

// Apunta a cada persona y al siguiente elemento

//   1         2
// Node 1 -> Node 2
//  |          |
//  v		   v
// Pers 1    Pers 2



template<typename T>
struct persons{
	string name;
	string career;
	string activity;
	T *nextName;
	T *nextActivity;
	T *nextCareer;
};

template<typename T>
struct nodeMulti{
	int index;
	nodeMulti<T> *next;
	persons<T> *person;
};


template<typename T>
class MultiList{
	
	nodeMulti<T> *head; 
	int lenght;
	
	public:
		MultiList(){
			lenght = 0;
			head = new nodeMulti<T>;
			head->index = 0;
		}
		
		void addPerson(string name, string activity, string career);
		bool deletePerson(int index);
		T obtenerDatoMulti(int index);
		void getList(); //asignacion de tipo pendiente
};

template<typename T>
void MultiList<T>::addPerson(string name, string activity, string career){
	
	persons<T> *auxPerson = new persons<T>;

	auxPerson->name = name;
	auxPerson->activity = activity;
	auxPerson->career = career;
	
	lenght++;
	
	nodeMulti<T> *aux = new nodeMulti<T>;
	
	aux->index = head->index+1;
	aux->person = auxPerson;
	aux->next = head;
	head = aux;
}

// Eliminar
//template<typename T>
//bool MultiList<T>::deletePerson(int index){
//	
//	nodeMulti<T> *aux = head;
//	nodeMulti<T> *anterior = NULL;
//	
//	while((aux != NULL)&&(aux->index != index)){
//		anterior = aux;
//		aux = aux->next;
//	}
//	
//	// En caso de que el elemento se encuentre en la primera posición
//	if(anterior == NULL){
//		head = head->next;
//		delete aux;
//	} else {
//		anterior->next = aux->next;
//		delete aux;
//	}
//	
//	if(aux == NULL){
//		return false;
//	}	
//}

template <typename T>
T MultiList<T>::obtenerDatoMulti(int index){
	
	nodeMulti<T> *aux = head;
	
	while((aux != NULL)&&(aux -> index != index)){
		aux = aux->next;
	}
	
	if (aux == NULL){
		return "Valor no encontrado";
	}
	
	return aux->person->name;
}



#endif
