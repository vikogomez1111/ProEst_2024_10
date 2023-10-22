//    ------UTILIZAREMOS LA ESTRUCTURA CASE
// Se utilizará el case para validar que días de la semana se está ingresando

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Ingreso de variables
    int dia_semana;

    // Ingreso de datos
    printf("\nIngrese un n%cmero del l al 7 que represente el d%ca de la sem%cna : ",'\u00e3', '\u00e1','\u00e0');
    scanf("%d",&dia_semana);

    switch(dia_semana){
    case(1):
        printf("El d%ca de la semana es : Lunes",'\u00e1');
        break;
    case(2):
        printf("El d%ca de la semana es : Martes",'\u00e1');
        break;
    case(3):
        printf("El d%ca de la semana es : Mi%crcoles",'\u00e1','\u00e1');
        break;
    case(4):
        printf("El d%ca de la semana es : Jueves",'\u00e1');
        break;
    case(5):
        printf("El d%ca de la semana es : Es viernes y el cuerpo lo sabe",'\u00e1');
        break;
    default:
        if (dia_semana == 6 || dia_semana== 7 ){
            printf("Es fin de semana y a farrear se ha dicho..!!");
        }
        break;
    }

    return 0;
}
