#include <iostream>
#include <string>
#ifndef SIMPLELIST_H
#define SIMPLELIST_H
#include "multiList.h"
using namespace std;


template<typename T>
struct node{
	string name;
	T value;
	node<T> *next;
};


template<typename T>
class SimpleList{
	
	node<T> *head;
	node<T> *last;
	int lenght;
	
	public:
		
		SimpleList(){
			lenght = 0;
			head = new node<T>;
			head->next = NULL;
		}
		
		bool pop(string name);
		void push(string name, T value);
		void changeValue(string name, T newValue);
		T obtenerDato(string name);
		
};

// Insertar
template<typename T>
void SimpleList<T>::push(string name,T value){
	lenght++;
	node<T> *aux = new node<T>;
	aux->name = name;
	aux->value = value;
	aux->next = head;
	head = aux;
}

// Eliminar
template<typename T>
bool SimpleList<T>::pop(string name){
	
	node<T> *aux = head;
	node<T> *anterior = NULL;
	
	while((aux != NULL)&&(aux -> name != name)){
		anterior = aux;
		aux = aux->next;
	}
	
	// En caso de que el elemento se encuentre en la primera posición
	if(anterior == NULL){
		head = head->next;
		delete aux;
	} else {
		anterior->next = aux->next;
		delete aux;
	}
	
	if(aux == NULL){
		return false;
	}	
}

//template<typename T>
//void SimpleList<T>::changeValue(string name, T newValue){
//	
//	node<T> *aux = head;
//	
//	for(int i = 0; i < lenght; i++){
//		if(aux->name == name){
//			break;
//		}
//		aux = aux->next;
//	}
//	
//	if(aux == NULL){
//		return false
//	}	
//	aux->value = newValue;
//}

template <typename T>
T SimpleList<T>::obtenerDato(string name){
	
	node<T> *aux = head;
	
	while((aux != NULL)&&(aux -> name != name)){
		aux = aux->next;
	}
	
	if (aux == NULL){
		return -1;
	}
	
	return aux->value;
}


#endif
