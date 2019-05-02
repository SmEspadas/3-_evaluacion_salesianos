#include<iostream>
#include<cstdlib>
#include<ctime>
#include<>
int main(){
    int matriz[10][10];
    int fil,col;
    int posx,posy;
    char palabra[10];
    char salir;
    double semillita;
    semillita=time(0);
    srand(semillita);
    for(fil=0;fil<3;fil++){
                           for(col=0;col<3;col++){
                                                  matriz[fil][col]=rand()%25+65;
                                                  std::cout<<matriz[fil][col];
                                                  }
                           std::cout<<"\n";
                           }
    posx=rand()%10;
    posy=rand()%10;
    matriz[posx][posy]='*';
    
    std::cout<<"Introduce una palabra ";
    std::cin>>palabra;
    //Medimos la longitud de palabra//
    longitud=strlen(palabra)
    
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}
