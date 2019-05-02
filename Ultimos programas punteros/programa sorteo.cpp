#include<iostream>
#include<cstdlib>
#include<ctime>
//Este programa genera 5 numeros al azar//
int main(){
    float lista[5];//Aquí guardamos los numeros//
    int i;
    char salir;
    double semillita;
    semillita=time(NULL);
    srand(semillita);
    for(i=0;i<5;i++){
                     lista[i]=rand();
                     std::cout<<lista[i]<<"\n";
                     }
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir; 
    return 0;
}
