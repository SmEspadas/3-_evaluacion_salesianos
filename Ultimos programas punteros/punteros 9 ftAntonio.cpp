//coger tres palabras y ocontar vocales  ordenarlas por vocales
//Manejo de punteros
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
int medida(char palabra[]){
    int l=0;
    while(palabra[l]!='\0'){
          l++;    
    }
    return l;
}

int main(){
     char *lista[3];
     int salir;
     char palabra[30];
     int cont;
     int l;
     char *pauxiliar;
     int nveces;
     for(cont=0;cont<5;cont++){
         std::cout<<("\nPalabra: "<<cont);
         std::cin>>palabra; 
         l=medida(palabra);
         //printf(" %i\n",l);
         lista[cont]=(char *) malloc(l*sizeof(char)); 
         strcpy(lista[cont],palabra);
     }
     for(cont=0;cont<5;cont++){
         std::cout<<("\n%s",lista[cont]);
     }
     //Ordenamiento
     for(nveces=1;nveces<5;nveces++){
      for(cont=0;cont<4;cont++){
        if(*lista[cont]>*lista[cont+1]){
            printf("\nCambio %s por %s",lista[cont],lista[cont+1]);
            pauxiliar=lista[cont];
            lista[cont]=lista[cont+1];
            lista[cont+1]=pauxiliar;
        }
      }
     }
     //Despues del ordenamiento
     printf("\nLISTA ORDENADA:");
     for(cont=0;cont<5;cont++){
         printf("\n%s",lista[cont]);
     }
     
     printf("\nToca cualquier tecla: ");
     scanf("%i",&salir);
}
