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
//no la pasamos por referencia para evitar su borrado, ya
//que para mostrarlas hay que ir quitando elementos
void imprimir (queue<int> Q, char C){
    //comprobamos que la cola no esté vacia
    if(!Q.empty()){
        int tam = Q.size();
        int i;
        for(i=0;i<tam;i++){
            cout << Q.front() << " ";
            //De mayor a menor (de ultimo añadido a primero)
            //añadimos al final el último
            Q.push(Q.front());
            //quitamos el ultmio, ya que lo hemos mostrado
            Q.pop();
        }

    }
    else
        count << "\n\n\t\t - La cola " << C << " esta vacia";
}
void consultar (queue<int> &Q, char C){
    if(!Q.empty()){

    }
    else
        count << "\n\n\t\t - La cola " << C << " esta vacia";
}









