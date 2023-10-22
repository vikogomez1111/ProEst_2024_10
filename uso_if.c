#include <stdio.h>  // printf y scanf
#include <stdlib.h>


// Tipos de datos porpios con otra funcionalidad
    typedef enum {Lunes,
                  Martes,
                  Miercoles,
                  Jueves,
                  Viernes,
                  Sabado,
                  Domingo} dia;  //Valores que va a tener este tipo de dato

// Definición de constantes
#define PI 3.1416  // Por convensión, las constantes se escriben en mayúsculas


int main()
{

    // Transformación de modena
    printf("Transformaci%cn de moneda\n",'\u00e2');
    printf("------------------------\n");
    double euros;
    printf("Ingresa los EUROS que quieres convertir : ");
    scanf("%lf", &euros);

    printf("%.2lf EUROS equivalen a %.2lf pesos\n\n ", euros, euros*166.244);

    // Tipos de datos propios
    printf("Creaci%cn de un nuevo tipo de dato\n",'\u00e2');
    printf("---------------------------------\n");

    typedef int entero;  //creación de un nuevo tipo de dato sinónimo de entero
    entero valor1=1;
    entero valor2=2;

    typedef long entero_largo;
    entero_largo valor3=3L;

    printf("El valor1 es: %i \t, El valor2 es: %i\t, El valor3 es: %ld\n\n", valor1, valor2, valor3);

    //Asignación de variable
    printf("Creaci%cn de un nuevo tipo de dato con asignaci%cn de valores\n",'\u00e2','\u00e2');
    printf("-----------------------------------------------------------\n");
    dia dia_semana = Miercoles;
    printf("El d%ca de la semana es: %d\n",'\u00e1',dia_semana);


    // Calcular el área del círculos
    printf("Calcular el %crea de un c%crculo\n",'\u00e0','\u00e1');
    printf("-----------------------------------------------------------\n");

    int r;
    float area;
    printf("Ingresa el radio del c%crculo: ",'\u00e1');
    scanf("%d",&r);

    printf("El %crea del c%crculo es : %.2f", '\u00e0','\u00e1',PI*r*r);


    // Estructuras de control, alternativa, condicionales o selectiva
    printf("\n\nEstructuras de control Alternativa, Condicional o Selectiva\n");
    printf("-----------------------------------------------------------\n");

    int numero1 = 1, numero2 = 2;
    if (numero1 > 0 && numero2>0){
        printf("El n%cmero %d es positivo\n",'\u00e3', numero1);
    }
    else if(numero1>0 || numero2>0){
        printf("El n%cmero no es positivo\n",'u00e3', numero1);
    }
    else{
        printf("El n%cmero es igual a 0\n", 'u00e3', numero1);
    }
    printf("That is the end...!!!\n");


    return 0;
}
