#include <stdio.h>
#include <stdlib.h>

/* Este programa realiza la suma de los numeros pares, de acuerdo a un numero ingresado por el usuario */

int main()
{
    // Variables
    int number;
    int i;
    int suma = 0;
    
    
    printf("Realizar la suma de los primeros numeros pares");
    printf("\n");
    printf("\n");
    
    // Pedir un numero al usuario
    printf("Digita un numero entero:");
    scanf("%d", &number);

    // Realizar el proceso
     for (i=1;i<=number;i++)
    {
        if(i%2==0)
        {
            suma += i;
        }
    }

	// Mostrar Resultado
    printf("\nla suma es %i", suma);
    
    
    printf("\n");
    printf("\n");
    system("pause");

    return 0;
}
