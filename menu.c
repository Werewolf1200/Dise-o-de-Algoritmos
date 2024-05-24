/* Este programa es un menu de comida rapida */

#include <stdio.h>
#include <stdlib.h>

int main (){
    
    
    // Variables
    
    int num;

    
    // Mostrar Menú
    printf("Bienvenido a mi Fast Food Restaurant\n");
    printf("\nPaquete Grande = 1\nPaquete Mediano = 2\nPaquete Chico = 3\nPaquete Familiar = 4\n");
    
    // Asignar Valores
 
    printf("\n\nEscribe el numero del paquete de tu preferencia: \n");

    scanf("%d",&num);
    
    // Proceso
       
    switch(num){
        
        case 1:

            printf("\n* * * Elegiste el Paquete Grande * * *");

            break;
            
        case 2:

            printf("\n* * * Elegiste el Paquete Mediano * * *");

            break;
            
        case 3:

            printf("\n* * * Elegiste el Paquete Chico * * *");

            break;
            
        case 4:

            printf("\n* * * Elegiste el Paquete Familiar * * *");

            break;
        
            
        default :
                printf("\nDigita Una Opcion Valida del Menu");
                
     }
     
    printf("\n");
    printf("\n"); 
    system("pause"); 
    
   return (0);
}
