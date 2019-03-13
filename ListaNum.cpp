#include "listaNum.h"
#include <string>
#include <iostream>
#include <sstream>
template<typename T>
ListaNum<T>::npos ListaNum<T>::find(int elem) {
	for (int i = 0; i < nElem; i++) {
		if (lista[i] == elem) return i;
	}
	return static_cast <ListaNum::npos> (EMPTY_POS);
}


template<typename T>
ListaNum<T>::ListaNum<T>() { nElem = 0; }
template<typename T>
void ListaNum<T>::push_back(T dato) {
	if (nElem < MAX_ELEM) lista[nElem++] = dato;
	else std::cout << "Numero maximo de elementos alcanzado" << std::endl;
}


template<typename T>
T ListaNum<T>::at(int pos) {
	if (pos < nElem) return 0;
	else return 0;
}


template<typename T>
std::string ListaNum<T>::to_string() { 
	std::string str; 
	std::stringstream sstr;
	for (int i = 0; i < nElem; i++) {
		sstr << lista[i] << " ";
	}
}


