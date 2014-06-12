#include <iostream>
#include <cstdlib>
//#include "MyTADs.hpp"
#include <conio.h>
#include <queue>
using namespace std;

/*
    Q -> cola enteros
    C -> nombre de la cola
    N -> numero de coches
*/

void poner (queue<int> &Q, char C, int &N);
void sacar (queue<int> &Q, char C, int &N);
void imprimir (queue<int> &Q, char C);
void consultar (queue<int> &Q, char C);
