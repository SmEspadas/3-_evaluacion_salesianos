#include<iostream>
float cambiar(float dolares){
      float respuesta;
      respuesta=(dolares*0.88);
      return(respuesta);
}


int main(){
    int dolar;
    char salir;
    float dolares;
    std::cout<<"Introduce una cantidad en dolares";
    std::cin>>dolares;
    std::cout<<"Equivalen a "<<cambiar(dolares)<<" euros";
    std::cin>>salir;
    return 0;
}
