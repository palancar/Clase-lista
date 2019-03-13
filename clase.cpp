//Introducion al concepto de clase

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "listaNum.h"
#define MAX_ELEM 100
using namespace std;

ListaNum::ListaNum() { nElem = 0; }
int main()
{
	ListaNum l;
	l.push_back(57);
	l.print(cout);
	ListaNum::npos pos = l.find(25);
	int pos = l.find(25);


}

	//ListaNum 1;
