#include<stdio.h>
int main(){
    int x;
    int y;
    int *px;//puntero a x
    char salir;
    x=3;
    y=5;
    //Defino dos nuevas variables;
    px=&x;
    //std::cout<<x;
    printf("direccion x=%X direccion y=%X",&x,&y);
    printf("\ncontenido x=%d contenido y=€d",x,y);
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}
