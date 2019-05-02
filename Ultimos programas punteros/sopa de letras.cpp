#include<iostream>
#include<cstdlib>
#include<ctime>
int main(){
    float matriz[3][3];
    int fil,col;
    char salir;
    double semillita;
    semillita=time(0);
    srand(semillita);
                     for(fil=0;fil<3;fil++){
                                            for(col=0;fil<3;fil++){
                                            matriz[fil][col]=rand()%10;
                                            std::cout<<matriz[fil][col];
    }
    std::cout<<"\n";
    }
    std::cout<<"\n Toca cualquier letra para salir";
    std::cin>>salir;
    return 0;
}
