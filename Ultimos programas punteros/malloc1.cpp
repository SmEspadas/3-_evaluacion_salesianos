#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
int main(){
    int salir;
    //Definimos el vector PUNTEROS
    int cont;
    int nletras;
    char *palabra;
    char *lista[3];//3 posiciones de memoria que apuntan a 3
    //Procedimiento
    for(cont=0;cont<3;cont++){
    //1.Leo una palabra
    std::cout<<"Palabra: ";
    std::cin>>palabra;
    //2.Averiguo cuántas letras tiene
    nletras=strlen(palabra);
    //3.Reservo memoria para guardar la palabra
    lista[cont]=malloc(nletras*sizeof(char))
    //4.Escribo la palabra en la memoria reservada
    strcpy(lista[cont],palabra);//copia palabra en lista[cont]
    //5.Volvemos al punto 1.
    }
    printf("\nToca cualquier letra para salir");
    scanf(%i,&salir);
    
}
