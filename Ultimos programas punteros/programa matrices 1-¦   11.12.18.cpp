#include<iostream>
/*Este programa se llama matrices_1*/
main(){
        int tablero[5][5];//ASÍ SE DEFINE UNA MATRIZ//
        int fil;
        int col;
        int relleno;
        char salir;
        for(fil=0;fil<=4;fil++){
        //se coloca el if para rellenar la matriz de unos y ceros//
        if(fil%2==0){
                     if(col%2==0){
                                  relleno=0;
                                  }
                     else{
                          relleno=1;
                          }
             }
        else{if(col%2==0){
                                  relleno=1;
                                  }
                     else{
                          relleno=0;
                          }
             }
                                for(col=0;col<=4;col++){
                                tablero[fil][col]=relleno;
        //se coloca otro for parada cada columna de la fila//
                                }
        }
        //se vuelve a copiar y pegar la misma estructura anterior para añadir los cout y poder mostrar la matriz en el programa//
        for(fil=0;fil<=4;fil++){
                                for(col=0;col<=4;col++){
                                                        std::cout<<tablero[fil][col];
                                }
                                std::cout<<"\n";
        }
        std::cout<<"\nPresione intro para salir";
        std::cin>>salir;
        return 0;
}
                          
