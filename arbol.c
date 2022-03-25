#include <stdlib.h>
#include <stdio.h>
#include "arbol.h"

//Creamos apuntador a la estructura arbol
void creaArbol(arbolBin* a){
  *a = NULL;
}

//Comprobamos si el árbol es o no vacío
int esVacio(arbolBin *a){
  if(*a == NULL)
    return 1;
  else
    return 0;
}

Arbol* creaNodo(int dato){
  Arbol* temp = (Arbol *)malloc(sizeof(Arbol));
  temp->dato = dato; //Colocamos el dato en la parte del arbol que apunta al dato
  temp->der = NULL; //la parte derecha del nodo apunta a vacío
  temp->izq = NULL; //La parte izq del nodo apunta a vacío
  return temp; //regresamos el nodo Arbol
}

void agregaNodo(arbolBin *a, int dato){
  //Comprobamos si el arbol es vacío
  if(esVacio(a) == 1){
    *a = creaNodo(dato); //El apuntador al arbol ahora apunta al nuevo nodo
  }else{
    //Comparamos los valores de los datos para ver en dónde agregar el nodo
    if((*a )-> dato < dato){
      agregaNodo(&((*a)->der),dato);
      // printf("\n*a: %d - der: %d", (*a )-> dato, (*a)-> der -> dato); // <-- Código guia para ver si ordena correctamente
    }
    else{
      agregaNodo(&((*a)->izq),dato);
      // printf("\n*a: %d - izq: %d", (*a )-> dato, (*a)-> izq -> dato); // <-- Código guia para ver si ordena correctamente
    }
  }
}

int i = 0; // Variable global para usar dentro del arbol, como indice en el array

//Llenamos un arreglo con la info del arbol (leemos en Inorden)
void Inorden(arbolBin *a, int array[]){
  //Comprobamos si es vacío
  if(esVacio(a) == 0){
    //Nos movemos hasta la izquierda del árbol
    Inorden(&((*a)->izq), array);
    //Llenamos el arreglo
    array[i] = (*a)->dato;
    i++;
    //Nos movemos hasta la derecha
    Inorden(&((*a)->der), array);
  }
}
