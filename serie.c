/* Unidad 5. Actividad Complementaria 2.

Secuencia Númerica

Este programa crea una secuencia numerica, empleando el iterador For, con base en la siguiente formula: (n * (n + 1) * ((2 * n) + 1)) / 6
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarar Variables
    int number;
    int i;
    int sequence;
    
    
    printf("Crear Una Secuencia Numerica");
    printf("\n");
    printf("\n");
    
    // Pedir un número al Usuario
    printf("Escribe Un Numero Entero:");
    scanf("%d", &number);
	
	printf("\n");
	printf("\n");
    // Realizar operación matemática
    printf("La Secuencia Numerica Generada es: ");

    for(i=1; i<= number; i++){
    sequence = (i * (i + 1) * ((2 * i) + 1)) / 6;
    
    // Mostrar Resultados
    printf("%d, ", sequence);
}   
   	printf("\n");
   	printf("\n");

    system("pause");

    return 0;
}
