/*
PRÁCTICA 01. ANÁLISIS DE ALGORITMOS DE ORDENAMIENTO. PRUEBAS A POSTERIORI
En esta práctica tenemos como objetivo realizar un análisis de algoritmos a posteriori de los
algoritmos de ordenamiento más conocidos en la computación, así como realizar una aproximación
de sus funciones de complejidad temporal. Los algoritmos a analizar se describen a continuación.
    1. BURBUJA
    Este algoritmo revisa cada elemento del arreglo e intercambia de posición con el siguiente elemento si
    estos se encuentran en desorden, las funciones que creamos para elaborar este ordenamiento son los siguientes.
        1.1 Función "Burbuja"
            Recorremos nuestro arreglo hasta la n-ésima posición y comparamos el contenido del arreglo con un
            contador j. Con la función "Intercambio", intercambiamos los valores de las casillas si están en
            desorden.
        1.2 Función "MejorBurbuja"
            Realiza lo mismo que la función "Burbuja" con la diferencia de que ahora nuestro contador j solamente
            compara hasta la i-ésima posición, esto nos permite reducir las veces que se recorre el algoritmo.
        
        1.3 Función "MejorBurbuja2"
            Funciona igual que las dos funciones anteriores; sin embargo, ahora omitimos las
            iteraciones extras que puedan generarse si el arreglo ya está ordenado, por lo que utilizamos un
            indicador para detectar cambios en el arreglo.
    
    2. INSERCIÓN
    Es la forma más intuitiva de ordenar una lista de números; puesto que se trata de comparar el un número con los
    anteriores a él, de tal manera que si encontramos un número mayor, lo intercambiamos de posición y seguimos
    comparando e intercambiando posiciones hasta llegar al inicio de nuestra lista. Después seleccionaremos otro número
    (el que sigue) y realizamos las mismas comparaciones e inserciones.
        2.1 Función "Insercion"
        La variable temp nos ayudará a comparar una posición de nuestro arreglo con las que le anteceden; i nos ayuda a 
        recorrer el arreglo y j indica las casillas que anteceden a la posición temp; es decir, si el contenido de la posición
        temp es mejor, entonces intercambiamos con la posición j; después, j se decrementa y al finalizar el while cambiamos
        de posición nuestro temp y hacemos el mismo procedimiento.
        
    3. SELECCIÓN
    Su idea básica es encontrar el número más pequeño de un arreglo y colocarlo en la primera posición de un nuevo arreglo (o de ese mismo).
    Entonces, tendremos un sub-arreglo con el que repetiremos este paso, así hasta que nuestro sub-arreglo sea de tamaño uno.
        3.1 Función "Seleccion"
        La variable k nos ayuda a recorrer el arraglo en su totalidad, p será el número que compararemos con el resto del arreglo y 
        que almacenará el número menor; i compara las posiciones siguientes de p, para saber si el número siguiente es menor o no.
        Entonces comparamos el valor de la posición i, con p; guardando el número menor en la variable p. Nuestro if nos permite saber
        si hemos terminado con las comparaciones, es decir, si p es diferente de k;
    
    4. QuickSort
    Se basa en la técnica "divide y vencerás", puesto que divide una lista grande en arreglos más pequeños para ordenarlos utilizando
    un pivote. Utiliza pasos recursivos para partir el arreglo y a su vez, partir estos sub-arreglos en arreglos más pequeños
    hasta que el tamaño de arreglos a ordenar es 1.
        4.1 QuickSort
        Nuestra función compara el inicio y fin de nuestro arreglo para comprobar si se trata de una lista de 1 elemento.
        Asignamos nuestro pivote al inicio de la lista y a las variables izq y der les asignamos el inicio y fin del arreglo respectivamente.
        Utilizamos un while para asegurarnos que aun podemos dividir el arreglo; mientras esto sea posible deberemos posicionar los
        elementos menores al pivote del lado izquierdo y los mayores al extremo derecho. Esto se hace con dos ciclos while.
        El primer while pregunta si el elemento del extremo derecho es menor o mayor que el pivote, de ser mayor, seguimos 
        reduciendo la variable der hasta encontrar un número menor; si lo encontramos, entonces guardamos ese valor en el extremo izquiero
        del arreglo. El segundo while opera de manera similar, sólo que ahora comparamos el pivote con el extremo izquier, si encontramos
        números mayores, los agregamos a la parte derecha del arreglo, de tal forma que tendremos números
        mayores en el extremo derecho, y menores en el extremo izquierdo.
        Este proceso se repite llamando recursivamente a la función QuickSort para ordenar los sub-arreglos, el proceso termina
        si ini y fin apuntan al mismo lugar, es decir; cuando ya no hay posiciones que acomodar.
        4.2 QSmini
        Utilizamos esta función para recibir solamente un apuntador a un arreglo de enteros y la longitud de ese arreglo para ordenarlos
        con la función QuickSort.
    5. SHELL
    Es una mejora del algoritmo de inserción ya que permite comparar elementos separados por varias posiciones. Estos pasos que deben recorrer
    los elementos del arreglo para encontrar su posición se irán acortando conforme transcurra el ordenamiento. 
        5.1 Función "Shell"
        Tenemos una variable k que representa la distancia entre los elementos que se compararán, La variable b indica la posición con la que 
        compararemos k. Si k es mayor o igual que 1, entonces comparamos la primera posición (b = 0) con la posición que se encuentra k veces más
        "adelante", si es mejor, entonces intercambiaremos, continuaremos avanzando hasta que k apunte al final del arreglo. Ahora hacemos las
        misms comparaciones pero ahora con una separación de k/2.
    6. TREESORT
    Este algoritmo toma los elementos de un arreglo y los coloca en un árbol binario,
    para encontrar los valores ordenados deberemos hacer un recorrido inorden.
        6.1 Función "TreeSort"
        Utilizando la librería "arbol.h" utilizamos una estructura de datos que nos permite crear un arbol binario, la función recibe el
        apuntador al arreglo y su tamaño. Cresmos un nodo por cada i - ésimo elemento de nuestro arreglo con
        la función agregaNodo y finalmente recorremos en Inorden el arreglo con la función Inorden.
    7. MERGESORT
    Este algoritmoes un algoritmo de ordenamiento externo estable basado en la técnica divide y vencerás.
    La idea de los algoritmos de ordenación por mezcla es dividir la matriz por la mitad una y otra vez hasta 
    que cada pieza tenga solo un elemento de longitud. 
    Luego estos  elementos se comparan para determinar cual de ellos es el mayor y se vuelven a juntar (ordenados) de forma recursiva.
        7.1 Función "merge"
        Esta función toma como parámetros la primera y última posición de un arreglo, divide el arreglo en dos partes y los ordena según la longitud
        de sus índices.
        7.2 Función "mergeSort"
        Esta función es la encargada de llamarse de forma recursiva a sí misma para cada mitad del arreglo actual y llamar a la función merge para unirlos 
        una vez que se encuentren ordenados.
*/
#include <stdio.h>
#include <math.h>
#include "arbol.c"
#include "tiempo.h"

#define TRUE 1
#define FALSE 0

void ImprimeArr(int array[]);
void Intercambio(int *x, int *y);

void Burbuja(int array[], int n);
void Insercion(int array[], int n);
void Seleccion(int array[], int n);
void Shell(int array[], int n);
void TreeSort(int array[], int n);
void Merge(int A[], int p, int q, int r);
void MergeSort(int A[], int p, int r);
void Quicksort(int array[], int nizq, int nder);
void QSmini(int array[], int n);
void MejorBurbuja(int array[], int n);
void MejorBurbuja2(int array[], int n);

int num; //elementos en el arreglo, indicará el número de enteros a ordenar
double utime0, stime0, wtime0, utime1, stime1, wtime1; //Variables para medición de tiempos

int main(int argc, char *argv[]) {

    /**
     * hola :p le hice unos pequeños cambios al programa para que al correrlo podamos usar los .sh para hacer
     * las pruebas automatizadas. Comente el código anterior por si lo vamos a necesitar en algun momento :0
     * Ahora para ejecutar el programa se debe de especificar:
     *
     *  /a.out x n <numerosmillones.txt
     *
     *  donde
     *  x: algoritmo de ordenamiento a usar (1-9), el orden está en el switch de abajo
     *  n: el número de enteros a ordenar
     */
    if (argc > 2) {
        int algoritmoOrdenamiento; //parámetro que representa que algoritmo de ordenamiento que se utilizará

        //se obtienen los primeros dos parametros escritos en consola (los volvemos enteros)
        algoritmoOrdenamiento = atoi(argv[1]);
        num = atoi(argv[2]);

        int array[num];
        int i;

        for (i = 0; i < num; ++i) { //recoge los valores del .txt gracias al redireccionamiento en la consola (<)
            scanf("%d", &array[i]);
        }

        printf("\n%d numeros a ordenar: \n", num);
        //ImprimeArr(array);

        switch (algoritmoOrdenamiento) {
            case 1: //Burbuja
                printf("Burbuja\n");
                Burbuja(array, num);
                break;
            case 2: //Insersion
                printf("Inserción\n");
                Insercion(array, num);
                break;
            case 3: //Seleccion
                printf("Seleccion\n");
                Seleccion(array, num);
                break;
            case 4: //Shell
                printf("Shell\n");
                Shell(array, num);
                break;
            case 5: //TreeSort
                printf("Tree Sort\n");
                TreeSort(array, num);
                break;
            case 6: //Ordenamiento por mezcla
                printf("Ordenamiento por mezcla\n");
                MergeSort(array, 0, num - 1);
                break;
            case 7: //Quick Sort
                printf("Quick Sort\n");
                QSmini(array, num);
                break;
            case 8: //Burbuja Optimizada 1
                printf("Burbuja Optimizada 1\n");
                MejorBurbuja(array, num);
                break;
            case 9: //Burbuja Optimizada 2
                printf("Burbuja Optimizada 2\n");
                MejorBurbuja2(array, num);
                break;
            default:
                exit(0);
                break;
        }
        //ImprimeArr(array);

        //Mostrar los tiempos con 10 decimas
        printf("\n");
        printf("real (Tiempo total)  %.10f s\n", wtime1 - wtime0);
        printf("user (Tiempo de procesamiento en CPU) %.10f s\n", utime1 - utime0);
        printf("sys (Tiempo en acciónes de E/S)  %.10f s\n", stime1 - stime0);
        printf("CPU/Wall   %.10f %% \n", 100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
        printf("\n");

        //Mostrar los tiempos en formato exponecial
        printf("\n");
        printf("real (Tiempo total)  %.10e s\n", wtime1 - wtime0);
        printf("user (Tiempo de procesamiento en CPU) %.10e s\n", utime1 - utime0);
        printf("sys (Tiempo en acciónes de E/S)  %.10e s\n", stime1 - stime0);
        printf("CPU/Wall   %.10f %% \n", 100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
        printf("\n");
    }

    return 0;
}

void ImprimeArr(int array[]) {
    int i;
    printf("\n");
    for (i = 0; i < num; i++) {
        printf("Num[%d]: %d.\n", i + 1, array[i]);
    }
    printf("\n");
}

void Intercambio(int *x, int *y) {
    int aux = *x; //variable auxiliar
    *x = *y;
    *y = aux;
}

void Burbuja(int array[], int n) {
    //Iniciar el conteo del tiempo para las evaluaciones de rendimiento
    uswtime(&utime0, &stime0, &wtime0);

    int i, j;
    for (i = 0; i < n; i++) { //Recorremos todo el arreglo
        for (j = 0; j < n - 1; j++) { //Comparamos
            if (array[j] > array[j + 1]) {
                Intercambio(array + j, array + j + 1); //Intercambiamos el contenido
                /*int aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;*/
            }
        }
    }

    //Evaluar los tiempos de ejecución
    uswtime(&utime1, &stime1, &wtime1);
}

void Insercion(int array[], int n) {
    //Iniciar el conteo del tiempo para las evaluaciones de rendimiento
    uswtime(&utime0, &stime0, &wtime0);

    int i, j, temp = 0;
    for (i = 0; i < n; i++) { //Recorrer el arreglo
        j = i;
        temp = array[i]; //valor actual a variable temp
        while ((j > 0) && (temp < array[j - 1])) {
            /*Comparamos la posición actual con la
            anterior del arreglo y recorremos hacia
            atrás */
            array[j] = array[j - 1];
            j--;
        }
        array[j] = temp;
    }

    //Evaluar los tiempos de ejecución
    uswtime(&utime1, &stime1, &wtime1);
}

void Seleccion(int array[], int n) {
    //Iniciar el conteo del tiempo para las evaluaciones de rendimiento
    uswtime(&utime0, &stime0, &wtime0);

    int i, k = 0, p = 0, temp = 0;
    for (k = 0; k < n - 1; k++) {
        p = k;
        for (i = k + 1; i < n; i++) { //Recorremos el arreglo
            if (array[i] < array[p])
                /*Comparamos el contenido menor del arreglo con las siguientes posiciones
                para acomodar el menor en la primera posición*/
                p = i; //posicion
            if (p != k) {
                Intercambio(array + p, array + k);
            }
        }
    }

    //Evaluar los tiempos de ejecución
    uswtime(&utime1, &stime1, &wtime1);
}

void Shell(int array[], int n) {
    //Iniciar el conteo del tiempo para las evaluaciones de rendimiento
    uswtime(&utime0, &stime0, &wtime0);

    int k = trunc(n / 2); //gap (separacion)
    int b;

    while (k >= 1) {
        b = 1;
        while (b != 0) {
            b = 0;
            int i;
            for (i = k; i <= n - 1; i++) {
                if (array[i - k] > array[i]) {
                    Intercambio(array + i, array + (i - k));
                    b++;
                }
            }
        }
        k = trunc(k / 2);
    }

    //Evaluar los tiempos de ejecución
    uswtime(&utime1, &stime1, &wtime1);
}

void TreeSort(int array[], int n) {
    //Iniciar el conteo del tiempo para las evaluaciones de rendimiento
    uswtime(&utime0, &stime0, &wtime0);

    int i;
    arbolBin a;    //Para guardar el árbol
    creaArbol(&a); //creamos el árbol
    for (i = 0; i < n; i++) {
        //Creamos un nodo por cada i de nuestro array
        agregaNodo(&a, array[i]);
        // printf("\nOnd: %d", array[i]);
    }
    //Recorremos inroden el arbol y llenamos el arreglo en orden
    Inorden(&a, array);

    //Evaluar los tiempos de ejecución
    uswtime(&utime1, &stime1, &wtime1);
}

void MergeSort(int A[], int p, int r) {
    //Iniciar el conteo del tiempo para las evaluaciones de rendimiento
    uswtime(&utime0, &stime0, &wtime0);

    if (p < r) {
        //Llamadas a las funciones de forma recursiva para los índices de los nuevoa arreglos separados
        int q = p + (r - p) / 2;
        MergeSort(A, p, q);
        MergeSort(A, q + 1, r);
        Merge(A, p, q, r);
    }

    //Evaluar los tiempos de ejecución
    uswtime(&utime1, &stime1, &wtime1);
}

void Merge(int A[], int p, int q, int r) {

    //Delimitación de las longitudes de los dos arreglos que en los que se va a dividir
    int len1 = q - p + 1;
    int len2 = r - q;

    //Declaración de los arreglos izquierdo y derecho
    int leftArr[len1], rightArr[len2];
    //LLenado de los arreglos izquierdo y derecho, iterando a través del arreglo A
    for (int i = 0; i < len1; i++)
        leftArr[i] = A[p + i];
    for (int j = 0; j < len2; j++)
        rightArr[j] = A[q + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = p;
    //Comparación de los valores en los índices de los arreglos auxiliares izquierdo y derecho, el valor menor se inserta en el arreglo A 
    while (i < len1 && j < len2) {
        //Si la posición actual del arreglo izquierdo es menor que en el derecho, este valor es insertado en A
        if (leftArr[i] <= rightArr[j]) {
            A[k] = leftArr[i];
            i++;
        }
            //En caso contrario, el valor del arreglo derecho es el insertado
        else {
            A[k] = rightArr[j];
            j++;
        }
        k++;
    }
    //Iterando a través de las longitudes de los arreglos izquierdo y derecho para volver a unirlos a A
    while (i < len1) {
        A[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < len2) {
        A[k] = rightArr[j];
        j++;
        k++;
    }
}

void QSmini(int array[], int n) {
    //Iniciar el conteo del tiempo para las evaluaciones de rendimiento
    uswtime(&utime0, &stime0, &wtime0);

    Quicksort(array, 0, n - 1);

    //Evaluar los tiempos de ejecución
    uswtime(&utime1, &stime1, &wtime1);
}

void Quicksort(int array[], int ini, int fin) {
    int piv, izq, der, temp;

    //Caso base, tenemos lista para ordenar pq inicio y fin son distintos.
    if (ini < fin) {
        piv = array[ini]; //Pivote en primera posición del array
        izq = ini;        //izq es un índice, ini es el inicio del array
        der = fin;        //der es un índice, fin es el fin del array

        while (izq < der) { //Posicionamos mayores a la der y menores a la izq
            //Posicionamos los elementos menores al pivote (izquierda)
            while (der > izq && array[der] > piv) //Movemos los de la derecha
                //falso = el elemento es menor que el pivote.
                //true = el elemento es mayor que el pivote
                der--; //movemos el índice
            if (der > izq) { //preguntamos por la condición true
                //Si entra al if, el elemento está mal posicionado
                array[izq] = array[der];
                izq++; //movemos el indicador izq
            }

            //Posicionamos los elementos mayores al pivote (derecha)
            while (izq < der && array[izq] < piv) //el elemento de la izq está bien posicionado?
                izq++;
            if (izq < der) { //revisamos si los números son menores al piv
                array[der] = array[izq];
                der--;
            }
        }
        array[der] = piv; //puede ser izq o der porque al final apuntan al mismo
        temp = der;       //Indice para hacer la recursión
        //Llamadas recursivas (ya ordené el pivote pero debo ordenar los extremos)
        Quicksort(array, ini, temp - 1);
        Quicksort(array, temp + 1, fin);
    }
}

void MejorBurbuja(int array[], int n) {
    //Iniciar el conteo del tiempo para las evaluaciones de rendimiento
    uswtime(&utime0, &stime0, &wtime0);

    int i, j;
    for (i = 0; i < n; i++) { //Recorremos todo el arreglo
        for (j = 0; j < i; j++) { //Comparamos las posiciones
            if (array[i] < array[j])
                Intercambio(array + i, array + j);
        }
    }

    //Evaluar los tiempos de ejecución
    uswtime(&utime1, &stime1, &wtime1);
}

void MejorBurbuja2(int array[], int n) {
    //Iniciar el conteo del tiempo para las evaluaciones de rendimiento
    uswtime(&utime0, &stime0, &wtime0);

    int i = 0, j, cambios = TRUE; //bandera de cambios para checar si ya está ordenado el arreglo
    while (i < n && cambios) {
        cambios = FALSE;
        for (j = 0; j < n; j++) { //Comparamos las posiciones
            if (array[i] < array[j]) { //si no entra al if, el arreglo ya está ordenado
                Intercambio(array + i, array + j);
                cambios = TRUE;
            }
        }
        i++;
    }

    //Evaluar los tiempos de ejecución
    uswtime(&utime1, &stime1, &wtime1);
}
