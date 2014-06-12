#include "MyTADs.hpp"

void poner (queue<int> &Q, char C, int &N){
    //aumentamos el numero de coches
    N++;
    //añadimos el numero de coche
    Q.push(N);
    cout << "\n\n\t - Vehiculo " << Q.back() << " puesto en cola " << C;
    cout << "\n\n\n\t ... Pulse cualquier tecla para continuar ...";
    getch();
}
void sacar (queue<int> &Q, char C, int &N){
    if(!Q.empty()){
        cout << "\n\n\t\t - Vehiculo " << Q.front() << " sacado de la cola " << C;
         Q.pop();
    }
    else
        count << "\n\n\t\t - La cola " << C << " esta vacia";
}
//void imprimir (queue<int> &Q, char C);
//void consultar (queue<int> &Q, char C);
