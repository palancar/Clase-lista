#pragma once
//listanum.h interfaz...

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX_ELEM 100

template <typename T>
class ListaNum {
private:
	int nElem;
	T lista[MAX_ELEM];
public:
	ListaNum               ()         { clear(); };
	enum { EMPTY_POS = 0xFFFFFF };
	typedef size_t npos; //TIPO PARA INDICES

	//constructor apropiado
	void    push_back  (T dato);
	T     at         (int pos);
	npos    find       (T elem);
	size_t  size           ()          { return nElem; };
	void    clear          ()          { nElem = 0; };

	//I/O
	std::string to_string();
	std::ostream& print(std::ostream&);

};
