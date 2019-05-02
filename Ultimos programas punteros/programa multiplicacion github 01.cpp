#include<iostream>
int main(){
    char salir;
    int num1,num2,num3,num4;
    std::cout<<"Introduce un numero:";
    std::cin>>num1;
    std::cout<<"Introduce un numero:";
    std::cin>>num2;
    std::cout<<"Introduce un numero:";
    std::cin>>num3;
    std::cout<<"Introduce un numero:";
    std::cin>>num4;
    std::cout<<"El producto es:"<<(num1*num2*num3*num4);
    std::cout<<"Toque cuialquier letra para salir: ";
    std::cin>>salir;
    return 0;
}
    
