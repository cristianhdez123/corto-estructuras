

#include <stdio.h>

int main(int argc, char **argv)
{
	
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cristian
 *
 * Created on 31 de agosto de 2018, 09:28 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
     int z=0,menu=0;
     printf("ingresse un tamanio\n");
        scanf("%i",&z);
         int vector[z];
        for(int y=0;y<z;y++){
              vector[y]=0;
              
         }
    
    do{
         printf("Vector:");
         for(int x=0;x<z;x++){
              printf("[%i] ",vector[x]);
              
         }
         
         
          printf("1.agregar un dato\n");
            printf("-----------\n");
            scanf("%i",&menu);
        //  pide el numero a buscar y luego lo muestra   
           if(menu==1){
              int posicion=0,dato=0;
               printf("ingrese el numero a buscar\n ");
                scanf("%i",&dato);
                vector[posicion]=dato;
                printf("hecho.."); 
                printf("\n");
               do{
           printf("posicion en la que se encuentra el numero indicado  %d \n ",z);
            scanf("%i",&posicion);
               }while(posicion>z-1);
               printf("la posicion es"+posicion)
               
                
	return 0;
}

