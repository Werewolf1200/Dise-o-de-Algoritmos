#include <stdio.h>
#include <stdlib.h>

// Ganancias por venta

int main()
{
    float venta;

    printf("CALCULAR GANANCIA DE UNA VENTA");
    printf("\n");
    printf("\n");

    // Pedir el valor de la venta
    printf("Introduce el valor de la venta:");
    scanf("%f", &venta);

    // Realizar operación

    if (venta > 100 & venta < 500)
    {
        float ganancia1 = venta * 0.10;
        // Mostrar Resultado
        printf("Tu ganancia es: %.2f", ganancia1);
    }
    else if (venta > 500 & venta < 1000)
    {
        float ganancia2 = venta * 0.15;
        // Mostrar Resultado
        printf("Tu ganancia es: %.2f", ganancia2);
    }
    else if (venta >= 1000)
    {
        float ganancia3 = venta * 0.20;
        // Mostrar Resultado
        printf("Tu ganancia es: %.2f", ganancia3);
    }
    else
    {
        printf("No hay ganancias");
    }

    printf("\n");

    system("pause");

    return 0;
}
