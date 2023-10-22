#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaración de variables
    int i=0;
    int j=0;
    // Primera forma del while - Primero analiza luego ejecuta
    while (i<=5){
        printf("El valor de i es : %d\n", i);
        i++;
    }

    printf("\n");
    // Segunda forma de While - Primero ejecuta luego analiza
    do{
        printf("El valor de i es : %d\n",j);
        j++;
    }
    while (j<=5);

    return 0;
}
