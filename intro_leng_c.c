/*PRÁCTICA

      ---- Estructura IF (if) & Switch/ Case------


    Escribir un programa que se utilice para calcular el precio de venta de coches de  segunda mano
    en un concesionario. Para ello, el programa debe pedir al usuario que introduzca el precio base
    del vehículo, le cantidad de kilómetros y su consumo:
    1) Si los kilómetros son inferiores a 20000 y su consumo es igual o inferior a 5 el precio base
       se incrementa en un 20%.
    2) Si los Kilómetros son superiores a 20000 y su consumo es igual o inferior a 5, incrementar el
       precio en un 10%.
    3) Si el consumo es superior a 5, incrementar el precio en un 5%

     */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ----- Primero utilizaremos IF

    //Declaración de variables
    int precioBase, km, consumo;
    float precio_final;

    // Leer los datos solicitados:
    printf("Ingresa el precio base del veh%cculo : ",'\u00e1');
    scanf("%d",&precioBase);

    printf("Ingrese los kil%cmetros : ",'\u00e2');
    scanf("%d",&km);

    printf("Ingrese el consumo : ");
    scanf("%d\n",&consumo);

    // Condiciones del programa
    if (km<20000 && consumo <=5){
        precio_final = precioBase*1.20;
    }
    else if (km>20000 && consumo<=5){
        precio_final =precioBase*1.10;
    }
    else if(consumo>5){
        precio_final=precioBase*1.05;
    }

    // Desplegar el resultado
    printf("\nEl precio final del veh%culo es: %.2f",'\u00e1',precio_final);



    return 0;
}
