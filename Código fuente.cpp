#include <cstdlib>
#include <iostream>
#include <conio.h>

#include <queue>

using namespace std;

void poner (queue<int> &Q, char C, int &N);   
void sacar (queue<int> &Q, char C, int &N);
void imprimir (queue<int> &Q, char C);
void consultar (queue<int> &Q, char C);

main()
{
    queue<int> G,D,M;    
    int n=0;
    char o;
    
    while(o!='q' && o!='Q')
    {
    system("cls"); 
    cout << "\n\n\t\t GESTION DE COLAS ITV";
    cout << "\n\n\t-------------------------------------------";     
    cout << "\n\n\t A) Poner un coche en cola G";
    cout << "\n\t B) Poner un coche en cola D";
    cout << "\n\t C) Poner un coche en cola M";
    cout << "\n\t D) Sacar el primer coche de la cola G";
    cout << "\n\t E) Sacar el primer coche de la cola D";
    cout << "\n\t F) Sacar el primer coche de la cola M";
    cout << "\n\t G) Imprimir la cola G";
    cout << "\n\t H) Imprimir la cola D";
    cout << "\n\t I) Imprimir la cola M";
    cout << "\n\t J) Consultar la cabecera de la cola G";
    cout << "\n\t K) Consultar la cabecera de la cola D";
    cout << "\n\t L) Consultar la cabecera de la cola M";   
    cout << "\n\n\t Q) Salir de la aplicacion";
    cout << "\n\n\t-------------------------------------------";
    
    o=getch();     
          
	if(o== 'a' || o=='A') 
	   {
        poner(G,'G',n);
       }
    
    else if(o== 'b' || o=='B') 
	   {
        poner(D,'D',n);
       }
       
    else if(o== 'c' || o=='C') 
	   {
        poner(M,'M',n);
       }
       
    else if(o== 'd' || o=='D') 
	   {
        sacar(G,'G',n);
       }
       
    else if(o== 'e' || o=='E') 
	   {
        sacar(D,'D',n);
       }
       
    else if(o== 'f' || o=='F') 
	   {
        sacar(M,'M',n);
       }
    
    else if(o== 'g' || o=='G') 
	   {
        imprimir(G,'G');     
       }
       
    else if(o== 'h' || o=='H') 
	   {
        imprimir(D,'D'); 
       }
       
    else if(o== 'i' || o=='I') 
	   {
        imprimir(M,'M');
       }
       
    else if(o== 'j' || o=='J') 
	   {
        consultar(G,'G');
       }
       
    else if(o== 'k' || o=='K') 
	   {
        consultar(D,'D');
       }
       
    else if(o== 'l' || o=='L') 
	   {
        consultar(M,'M');
       } 
                
    }
}

void poner (queue<int> &Q, char C, int &N)
    {
        N++;
        Q.push(N); 
        
        cout << "\n\n\t - Vehiculo " << Q.back() << " puesto en cola " << C; 
        cout << "\n\n\n\t ... Pulse cualquier tecla para continuar ...";
        getch(); 
    }
    
void sacar (queue<int> &Q, char C, int &N)
    {
       if(Q.empty()) cout << "\n\n\t\t - La cola " << C << " esta vacia";
        else
            {
            cout << "\n\n\t\t - Vehiculo " << Q.front() << " sacado de la cola " << C;
            Q.pop();          
            }
        cout << "\n\n\n\t ... Pulse cualquier tecla para continuar ...";
        getch(); 
    }

    
void imprimir (queue<int> &Q, char C)
    { 
        if(Q.empty()) cout << "\n\n\t\t - La cola " << C << " esta vacia";
        else  
        {
        cout << "\n\n\t\t - Cola " << C << ": ";
        for (int i=0;i<Q.size();i++)
            {        
            cout << Q.front() << " " ;  
            Q.push(Q.front()); 
            Q.pop();
            } 
        }
        cout << "\n\n\n\t ... Pulse cualquier tecla para continuar ...";
        getch();
    } 
    
void consultar (queue<int> &Q, char C)
    {
        if(Q.empty()) cout << "\n\n\t\t - La cola " << C << " esta vacia";
        else cout << "\n\n\t\t - Cabecera de la cola " << C << ": " << Q.front();
        cout << "\n\n\n\t ... Pulse cualquier tecla para continuar ...";
        getch();
    }
