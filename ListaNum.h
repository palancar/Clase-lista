#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>

#define MAX_ELEM 100
//COMETE TOAAAAA MI POLLAAAAAAAAAAAA

using namespace std;

template<typename T>


class ListaNum {
public:
	enum { EMPTY_POS = 0xFFFFFF };
	typedef size_t npos; //tipo para índices
private:
	int nElem;
	T lista[MAX_ELEM];
public:
	//constructor apropiado…
	ListaNum() {
		clear();
	}

	void push_back(T dato);
	T at(int pos);
	npos find(T elem);
	size_t size(); //nomenclatura típica
	void clear();

	//I/O
	string to_string();
	ostream& print(ostream&); //l.print(cout);
};


/*TODAS LAS DEFINICIONES JEJEJEJEJEJEJEJE*/
template<typename T>
void ListaNum<T>::push_back(T dato) {
	if (nElem < MAX_ELEM) lista[nElem++] = dato;
	else cout << "numero maximo de elementos alcanzado" << endl;
}
template<typename T>
T ListaNum<T>::at(int pos) {
	if (pos < nElem) return lista[pos];
	else { cout << "No hay elemento en esa posicion" << endl; return 0; }
}
template<typename T>
typename ListaNum<T>::npos ListaNum<T>::find(T elem) {
	for (int i = 0; i < nElem; i++) {
		if (lista[i] == elem)
			return i;
	}
	return static_cast <npos> (EMPTY_POS); //?????????????????????????????
}
template<typename T>
size_t ListaNum<T>::size() {
	return nElem;
}//nomenclatura típica
template<typename T>
void ListaNum<T>::clear() {
	nElem = 0;
}

//I/O
template<typename T>
string ListaNum<T>::to_string() {
	string str;
	stringstream sstr;

	sstr << "Lista de " << nElem << " elemento(s)" << endl;
	for (int i = 0; i < nElem; i++) {
		sstr << lista[i] << " ";
	}
	sstr << endl;
	str = sstr.str();
	return str;
}
template<typename T>
//inline
//en caso de fallos
ostream& ListaNum<T>::print(ostream& a) {
	a << to_string();
	return a;
}//l.print(cout);
