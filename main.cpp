#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <queue>

using namespace std;

    void poner (queue<int> &Q, char C, int &N);
    //saca el ultimo elemento de la cola
    void sacar (queue<int> &Q, char C, int &N);
    //muestra todos los elementos de una cola
    void imprimir (queue<int> &Q, char C);
    //muestra la cabecera de la cola
    void consultar (queue<int> &Q, char C);

    void menu();

    void opciones(char &opt, queue<int> &cI, queue<int> &cP, int &N);


char opcion='Z';
int main()
{
    queue<int> colaI, colaP;
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
            sacar(colaI, 'I', nProcesos);

        break;

        case 'D':
            sacar(colaP, 'P', nProcesos);

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

        default:
            opcion='Z';
        break;


    }


    }

    return 0;
}
void opciones(char opt, queue<int> cI, queue<int> cP, int N){



}

void menu(){
        system("CLS");
        cout << "\n\tPractica 1: Colas\n";
        cout << "\t.....................\n\n\n";
        cout << "\tOperaciones disponibles:\n\n";
        cout << "\t\tA) Poner un proceso en la cola I\n";
        cout << "\t\tB) Poner un proceso en la cola P\n";
        cout << "\t\tC) Quitar el primer proceso en la cola I\n";
        cout << "\t\tD) Quitar el primer proceso en la cola P\n";
        cout << "\t\tE) Imprimir la cola I\n";
        cout << "\t\tF) Imprimir la cola P\n";
        cout << "\t\tG) Consultar la cabecera de la cola I\n";
        cout << "\t\tH) Consultar la cabecera de la cola P\n";
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
void sacar (queue<int> &Q, char C, int &N){
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











