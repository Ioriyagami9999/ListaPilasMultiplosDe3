#include <stdlib.h>
#include <stdio.h>

typedef struct _nodo {
   int valor;
   struct _nodo *siguiente;
} tipoNodo;

typedef tipoNodo *pNodo;
typedef tipoNodo *Pila;


void Push(Pila *l, int v);
int Pop(Pila *l);


void Push(Pila *pila, int v)
{
   pNodo nuevo;

   nuevo = (pNodo)malloc(sizeof(tipoNodo));
   nuevo->valor = v;

   nuevo->siguiente = *pila;
  *pila = nuevo;
}

int Pop(Pila *pila)
{
   pNodo nodo;
   int v;


   nodo = *pila;
   if(!nodo) return 0;

   *pila = nodo->siguiente;
   v = nodo->valor;

   free(nodo);
   return v;
}
void capturaDatos(){
 int i,a;
   Pila pila = NULL;
   pNodo p;

   printf("***LLENADO PILA ***");
printf("\n");

for(a=3;a<=21;a=a+3){
  printf("se ha insertado en la pila el numero %s%i"," : " ,a);
printf("\n");
}
printf("\n");




   printf("***VACIANDO PILA***");
printf("\n");

for(i=3;i<=21;i=i+3){
Push(&pila, i);


}

for(i=3;i<=21;i=i+3){
  printf("se ha sacado de la pila el valor %s%d "," : " ,Pop(&pila));
printf("\n");
}


}
int main()
{

capturaDatos();


   system("PAUSE");
   return 0;
}


