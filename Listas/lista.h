#ifndef LISTA_H
#define LISTA_H

template<typename T>
struct node{
	T value;
	node<T> *next;
};

template<typename T>
class List{
	
	
	node<T> *headList;
	node<T> *lastItem;
	int sizeList;
		
	public:
		
		List(){
			sizeList = 0;
			headList = new node<T>;
			lastItem = headList;
		}
		
		T obtenerDato(int pos);
		bool eliminar(int pos);	
		void insertar_final(T infoNueva);
		void insertar_inicio(T infoNueva);
		void insertar_pos(T InfoNueva, int Pos);
		bool lista_vacia();
		int Tam_Lista(); 
};

template<typename T>
T List<T>::obtenerDato(int pos){
	if(pos > sizeList){
		return false;
	}
	
	node<T> *nodo = headList;
	
	for(int i = 0; i < pos; i++){
		nodo = nodo->next;
	}
	
	return nodo->value;
}
	
template<typename T>	
bool List<T>::eliminar(int pos){
	if(pos > sizeList){
		return false;
	}
	
	node<T> *nodoBefore = headList;
	
	for(int i = 0; i < pos - 1; i++){
		nodoBefore = nodoBefore->next;
	}
	
	nodoBefore->value = nodoBefore->next->next->value;
	nodoBefore->next = nodoBefore->next->next;
	
	return true;
}	
		
template<typename T>
void List<T>::insertar_final(T infoNueva){
	lastItem->value = infoNueva;
	lastItem->next = new node<T>;
	sizeList++;
}
		
template<typename T>
void List<T>::insertar_inicio(T infoNueva){
	node<T> *aux = headList;
	headList->value = infoNueva;
	headList->next = headList;
	sizeList++;
}


template<typename T>
void List<T>::insertar_pos(T InfoNueva, int pos){
	if(pos > sizeList){
		return;//llamar al final
	}
	
	//node<T> *nodoBefore = headList;
	
	//for(int i = 0; i < pos - 1; i++){
	//	nodo = nodo.next;
	//}
	
	
	return;
}

template<typename T>		
bool List<T>::lista_vacia(){
	if(sizeList == 0) return true;
	return false;
}  
		
template<typename T>		
int List<T>::Tam_Lista(){
	return sizeList;
}; 



#endif

