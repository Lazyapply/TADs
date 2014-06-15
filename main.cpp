#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <queue>

using namespace std;

    void poner (queue<int> &Q, char C, int &N);
    //saca el ultimo elemento de la cola
    void sacar (queue<int> &Q, char C);
    //muestra todos los elementos de una cola
    void imprimir (queue<int> &Q, char C);
    //muestra la cabecera de la cola
    void consultar (queue<int> &Q, char C);

    void vaciar(queue<int> &Q, char C);

    void menu();

    queue<int> crearColaT(queue<int> cI, queue<int> cP);


char opcion='Z';
int main()
{
    queue<int> colaI, colaP, colaT;
    int nProcesos=0;




    while(opcion !='Q'){

        switch (opcion){
        case 'Z':
            menu();
            cout << "\n\n\tEliga una opcion: ";
            cin >> opcion;
            opcion = toupper(opcion);
        break;

        case 'A':
            poner(colaI, 'I', nProcesos);

        break;

        case 'B':
            poner(colaP, 'P', nProcesos);

        break;

        case 'C':
            sacar(colaI, 'I');

        break;

        case 'D':
            sacar(colaP, 'P');

        break;

        case 'E':
            imprimir(colaI, 'I');

        break;

        case 'F':
            imprimir(colaP, 'P');

        break;

        case 'G':
            consultar(colaI, 'I');

        break;

        case 'H':
            consultar(colaP, 'P');

        break;

        case 'I':
            vaciar(colaI, 'I');

        break;

        case 'J':
            vaciar(colaP, 'P');

        break;

        case 'K':
            colaT=crearColaT(colaI, colaP);

        break;

        case 'L':
            sacar(colaT, 'T');

        break;

        case 'M':
            imprimir(colaT, 'T');

        break;

        case 'N':
            consultar(colaT, 'T');

        break;

        case 'O':
            vaciar(colaT, 'T');

        break;

        default:
            opcion='Z';
        break;


    }


    }

    return 0;
}


void menu(){
        system("CLS");
        cout << "\n\tPractica 1: Colas\n";
        cout << "\t...................................\n\n";
        cout << "\tOperaciones disponibles:\n\n";
        cout << "\t\tA) Poner un proceso en la cola I\n";
        cout << "\t\tB) Poner un proceso en la cola P\n";
        cout << "\t\tC) Quitar el primer proceso en la cola I\n";
        cout << "\t\tD) Quitar el primer proceso en la cola P\n";
        cout << "\t\tE) Imprimir la cola I\n";
        cout << "\t\tF) Imprimir la cola P\n";
        cout << "\t\tG) Consultar la cabecera de la cola I\n";
        cout << "\t\tH) Consultar la cabecera de la cola P\n";
        cout << "\t\tI) Vaciar la cola I\n";
        cout << "\t\tJ) Vaciar la cola P\n";
        cout << "\t\tK) Crear cola T\n";
        cout << "\t\tL) Quitar el primer proceso en la cola T\n";
        cout << "\t\tM) Imprimrir la cola T\n";
        cout << "\t\tN) Consultar la cabecera de la cola T\n";
        cout << "\t\tO) Vaciar la cola T\n";
        cout << "\n\t\tQ) Cerrar programa\n";

}


void poner (queue<int> &Q, char C, int &N){
    //aumentamos el numero de coches
    N++;
    //añadimos el numero de coche
    Q.push(N);
    system("CLS");
    cout << "\n\n\t.............................";
    cout << "\n\tProceso " << Q.back() << " puesto en cola " << C;
    cout << "\n\t.............................\n\n\n";
    cout << "\tPulse cualquier tecla para continuar";
    getch();
    opcion = 'Z';

}
void sacar (queue<int> &Q, char C){
    if(!Q.empty()){
        system("CLS");
        cout << "\n\n\t.............................";
        cout << "\n\tProceso " << Q.front() << " quitado de la cola " << C;
        cout << "\n\t.............................\n\n\n";
        cout << "\tPulse cualquier tecla para continuar";
        getch();
        opcion = 'Z';
        Q.pop();
    }
    else{
        system("CLS");
        cout << "\n\n\t.............................";
        cout << "\n\n\t\tLa cola " << C << " esta vacia";
        cout << "\n\t.............................\n\n\n";
        cout << "\tPulse cualquier tecla para continuar";
        getch();
        opcion = 'Z';
    }
}
//no la pasamos por referencia para evitar su borrado, ya
//que para mostrarlas hay que ir quitando elementos
void imprimir (queue<int> &Q1, char C){
    queue<int> Q = Q1;
    //comprobamos que la cola no esté vacia
    if(!Q.empty()){
        int tam = Q.size();
        int i;
        system("CLS");
        cout << "\n\n\t.............................";
        cout << "\n\n\tElementos de la cola " << C << ": ";
        for(i=0;i<tam;i++){
            cout << Q.front() << ", ";
            //De mayor a menor (de ultimo añadido a primero)
            //añadimos al final el último
            Q.push(Q.front());
            //quitamos el ultmio, ya que lo hemos mostrado
            Q.pop();
        }
        cout << "\n\t.............................\n\n\n";
        cout << "\tPulse cualquier tecla para continuar";
        getch();
        opcion = 'Z';
    }
    else{
        system("CLS");
        cout << "\n\n\t.............................";
        cout << "\n\n\t\tLa cola " << C << " esta vacia";
        cout << "\n\t.............................\n\n\n";
        cout << "\tPulse cualquier tecla para continuar";
        getch();
        opcion = 'Z';
    }

}
void consultar (queue<int> &Q, char C){
    if(!Q.empty()){
        system("CLS");
        cout << "\n\n\t.............................";
        cout << "\n\n\tLa cabecera de la cola " << C << " es " << Q.front();
        cout << "\n\t.............................\n\n\n";
        cout << "\tPulse cualquier tecla para continuar";
        getch();
        opcion = 'Z';
    }
    else{
        system("CLS");
        cout << "\n\n\t.............................";
        cout << "\n\n\t\tLa cola " << C << " esta vacia";
        cout << "\n\t.............................\n\n\n";
        cout << "\tPulse cualquier tecla para continuar";
        getch();
        opcion = 'Z';
    }
}

void vaciar(queue<int> &Q, char C){
    if(!Q.empty()){
        while(Q.size()!=0){
            sacar(Q, C);
        }
    }
    else{
        system("CLS");
        cout << "\n\n\t.............................";
        cout << "\n\n\t\tLa cola " << C << " esta vacia";
        cout << "\n\t.............................\n\n\n";
        cout << "\tPulse cualquier tecla para continuar";
        getch();
        opcion = 'Z';
    }

}

queue<int> crearColaT(queue<int> cI, queue<int> cP){

    queue<int> cAux;
    int aux=0;

    if((!cI.empty()) || (!cP.empty())){
        //1)poner I en T
        //2)sacar de I
        //3)poner P en T
        //4)sacar de P
        while((!cI.empty()) || (!cP.empty())){
            if(aux == 0){
                if(!cI.empty()){
                    cI.front()=cI.front()- 1;
                    poner(cAux, 'T', cI.front());
                    cI.pop();
                }
                aux = 1;
            }
            else{
                if(!cP.empty()){
                    cP.front()=cP.front()- 1;
                    poner(cAux, 'T', cP.front());
                    cP.pop();
                }
                aux = 0;
            }
        }
    }
    else{
        system("CLS");
        cout << "\n\n\t.............................";
        cout << "\n\n\t\tUna(ambas) cola(s) esta(n) vacia(s)";
        cout << "\n\t.............................\n\n\n";
        cout << "\tPulse cualquier tecla para continuar";
        getch();
        opcion = 'Z';
    }

    return cAux;
}









