#include<iostream>
int mayor (int num1, int num2, int num3){
    int respuesta;
    if (num1>num2 && num1>num3){
                  respuesta=num1;
    }
                  if(num2>num1 && num2>num3){
                               respuesta=num2;
    }
    if(num3>num1 && num3>num2){
                 respuesta=num3;
    }
    resturn respuesta;
    }
int main(){
    int num1,num2,num3
    //leo un numeo entero
    std::cout<<"Introduce un numero";
    std::cin>>num1;
    //leo otro numero entero
    std::cout<<"Introduce un numero:";
    std:cin;num2;
    //leo otro numero entero
    std::cout<<"Introduce un numero:";
    std::cin>>num3;
    //INVOCO A LA FUNCIÓN
    std::cout<<"el mayor en:"<< mayor(num1,num2,num3)
    
    
    
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}
