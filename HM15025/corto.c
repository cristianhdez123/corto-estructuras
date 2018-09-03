
#include <stdio.h>
   int main(int argc, char **argv){
	int i, j;
	int arreglo[5][5];
	for(x=0;x<5;x++){
		for(z=0;z<5;z++){
			printf("Ingrese un asiento:");
			scanf("%d", &arreglo[x][z]);
		}
	}
	for(x=0;x<5;x++){
		printf("\n");
		for(z=0;z<5;z++){
			printf("%d%d: %d\t",x,z, arreglo[x][z]);
			}
	
	  printf("\n");
         printf("-----------\n");
         printf("bienvenido\n");
          printf("1.vender entradas\n");
           printf("2.verificar el asiento\n");
            printf("3.mostrar gananciasn");
         
            printf("-----------\n");
            scanf("%i",&menu);
            if(menu==1){
              int posicion=0,dato=0;
               do{
           printf("En que posicion desea el asiento  %d \n ",z);
            scanf("%i",&posicion);
               }while(posicion>z-1);
               
                printf("ingrese el numero \n ");
                scanf("%i",&dato);
                vector[posicion]=dato;
                printf("hecho.."); 
                printf("\n");
           } else if(menu==2){
               int dato=0,bus=0;
              
               
                printf("ingrese el numero a buscar\n ");
                scanf("%i",&dato);
                
                for(int x=0;x<z;x++){
                    if(dato==vector[x]){
                         bus=1;
                         printf("el numero ingresado esta en la posicion %d \n ",x);
                    }
             
                }
                if(bus==0){
                        printf("el asiento esta ocupado\n");
                        }
                    bus=0;
                        printf("\n");	
                        
                        
                        if(menu==3){
              
             
               
	return 0;
}


    
}




