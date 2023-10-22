/* UTILIZACION DEL SIZE OFF PARA MEDIR LA CANTIDAD DE MEMORIA QUE SE ESTÁ UTILIZANDO
   La función que se utilizar para calcular el tamaño de la memoria es sizeof(tipo_dato)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Lectura de Variables
    int entero_i = sizeof(int);
    int entero_d = sizeof(int);
    int flotante = sizeof(float);
    int doble = sizeof(double);
    int flotante_grande = sizeof(long);
    int caracter = sizeof(char);
    char cadena[10];
    int cadena_car = sizeof(cadena);

    // Desplegar la cantidad de bytes por cada tipo de dato
    printf("Entero i tiene %i bytes\n",entero_i);
    printf("Entero d tiene %d bytes\n",entero_d);
    printf("Flotante tiene %d bytes\n",flotante);
    printf("Doble tiene %d bytes\n",doble);
    printf("Flotante Grande tiene %d bytes\n",flotante_grande);
    printf("Caracter tiene %d bytes\n",caracter);
    printf("Cadena tiene %d bytes\n",cadena_car);

    return 0;
}
