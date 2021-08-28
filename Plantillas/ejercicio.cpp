#include <cstdlib>
#include <iostream>

using namespace std;

template<class T, class S>
struct nodo {
	T clave;
	S descrip;
};

template<class T, class S>
nodo<T,S> sumarNodos(nodo<T,S> n1, nodo<T,S> n2){
	nodo<T,S> res;
	res.clave = n1.clave + n2.clave;
	res.descrip = n1.descrip + n2.descrip;
	
	return res;
}

int main(){
	
	nodo<int, char> nodo1;
	nodo<int, char> nodo2;
	nodo1.clave = 4;
	nodo2.clave = 6;
	nodo1.descrip = 'a';
	nodo2.descrip = 's';
	
	nodo<int,char> res = sumarNodos(nodo1, nodo2);
	cout<<res.clave<<endl;
	cout<<res.descrip<<endl;
	
	
	return 0;
}
