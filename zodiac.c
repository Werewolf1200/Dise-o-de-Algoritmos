/* Este Programa te dice tu signo zodiacal en base a tu fecha de nacimiento */

#include <stdio.h>
#include <stdlib.h>

int main (){
    
    // Mostrar Menú
    
    printf("Enero = 1\nFebrero = 2\nMarzo = 3\nAbril = 4\nMayo = 5\nJunio = 6\nJulio = 7\nAgosto = 8\nSeptiembre = 9\nOctubre = 10\nNoviembre = 11\nDiciembre = 12");
    
    // Variables
    
    int mes;
    int dia;
    
    // Asignar Valores
 
    printf("\n\nEscribe el numero del mes de tu nacimiento: ");

    scanf("%d",&mes);
    
    printf("\nEscribe tu dia de nacimiento :");         
    scanf("%d",&dia);
    
    // Proceso
       
    switch(mes){
        
        case 1:
            if(dia < 20){
                printf("\n* * * Tu Signo del Zodiaco es Capricornio * * *");
            } else (printf("\n* * * Tu Signo del Zodiaco es Acuario * * *"));
            break;
            
        case 2:
            if(dia < 19)
             {
                printf("\n* * * Tu Signo del Zodiaco es Acuario * * *");
            } else (printf("\n* * * Tu Signo del Zodiaco es Picis * * *"));
            break;
            
        case 3:
            if(dia < 21){
                printf("\n* * * Tu Signo del Zodiaco es Picis * * *");
            } else (printf("\n* * * Tu Signo del Zodiaco es Aries * * *"));
            break;
            
        case 4:
            if(dia < 20){
                printf("\n* * * Tu Signo del Zodiaco es Aries * * *");
            } else (printf("\n* * * Tu Signo del Zodiaco es Tauro * * *"));
            break;
        case 5:
            if(dia < 21){
                printf("\n* * * Tu Signo del Zodiaco es Tauro * * *");
            } else (printf("\n* * * Tu Signo del Zodiaco es Geminis * * *"));
            break;
        case 6:
            if(dia < 21){
                printf("\n* * * Tu Signo del Zodiaco es Geminis * * *");
            } else (printf("\n* * * Tu Signo del Zodiaco es Cancer * * *"));
            break;
        case 7:
            if(dia < 23){
                printf("\n* * * Tu Signo del Zodiaco es Cancer * * *");
            } else (printf("\n* * * Tu Signo del Zodiaco es Leo * * *"));
            break;
        case 8:
            if(dia < 23){
                printf("\n* * * Tu Signo del Zodiaco es Leo * * *");
            } else (printf("\n* * * Tu Signo del Zodiaco es Virgo * * *"));
            break;
        case 9:
            if(dia < 23){
                printf("\n* * * Tu Signo del Zodiaco es Virgo * * *");
            } else (printf("\n* * * Tu Signo del Zodiaco es Libra * * *"));
            break;
        case 10:
            if(dia < 23){
                printf("\n* * * Tu Signo del Zodiaco es Libra * * *");
            } else (printf("\n* * * Tu Signo del Zodiaco es Escorpio * * *"));
            break;
        case 11:
            if(dia < 22){
                printf("\n* * * Tu Signo del Zodiaco es Escorpio * * *");
            } else (printf("\n* * * Tu Signo del Zodiaco es Sagitario * * *"));
            break;
        case 12:
            if(dia < 22){
                printf("\n* * * Tu Signo del Zodiaco es Sagitario * * *");
            } else (printf("\n* * * Tu Signo del Zodiaco es Capricornio * * *"));
            break;
            
        default :
                printf("\nDigita Una Fecha Válida");
                
     }
    
	printf("\n");
	printf("\n");

    system("pause");
    
   return (0);
   
}
