#include <stdio.h>
#include <stdlib.h>

/*
Este programa ordena tres numeros ingresados por el usuario, de forma descendente
*/

int main(){
	
	// Variables	
   int num, i, j, arr[3];
   
   // Solicitar datos al usuario
   printf("\nPara que este programa funcione, debes escribir tres numeros, mayores a 3 y menores a 15 \n");
		
		for(num=0;num<=2;num++) {
   		printf("\nEscribe un numero ");
       	scanf("%d",&arr[num]);
       	
	   		if(arr[num]<3 || arr[num]>15) {
	   			printf("\nDebes escribir tres numeros, mayores a 3 y menores a 15");
				printf("\n");
    			system("pause");
    			exit(0);
	   		}	
   		} 
		   	 // Ordenar Array
		   for(num=0;num<=2;num++)
		   		for(i=0,j=1;j<=2;i++,j++)
		  			if(arr[i]>arr[j])
					  {
			           int temp=arr[j];
			           arr[j]=arr[i];
			           arr[i]=temp;
			        }
				        
			// Imprimir
			for(num=2;num>=0;num--)
			   printf(" %d ", arr[num]);    
			  
		printf("\n");
    	system("pause"); 
 		   
	return 0;
   
}
