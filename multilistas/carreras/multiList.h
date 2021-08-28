#include <iostream>
#ifndef MULTILIST_H
#define MULTILIST_H
using namespace std;


template<typename T>
struct node{
	int index;
	T *next;
	T *person;
};

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
class MultiList{
	
	node<T> *head;
	int lenght;
	
	public:
		MultiList(){
			lenght = 0;
			head = new node<T>;
		}
		
		void addPerson(string name, string activity, string career);
		void deletePerson(string name);
		void getList(); //asignacion de tipo pendiente
};

template<typename T>
void MultiList<T>::addPerson(string name, string activity, string career){
	
}



#endif
