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
/*
    Queue
    --------
    push([data])    -> añadir
    pop()           -> quitar
    front()         -> siguiente elemento
    size()          -> numero de elementos


*/
//añade un elemento a la cola
void poner (queue<int> &Q, char C, int &N);
//saca el ultimo elemento de la cola
void sacar (queue<int> &Q, char C, int &N);
//muestra todos los elementos de una cola
void imprimir (queue<int> &Q, char C);
//muestra la cabecera de la cola
void consultar (queue<int> &Q, char C);
