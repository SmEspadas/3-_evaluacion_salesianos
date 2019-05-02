#include<iostream>
//Calcular la media de los numeros ARRAY//
main(){
       float num[9];
       int i;
       char salir;
       float suma=0;//Inicializamos el valor de la suma a 0//
       float n_numeros;//El valor de la canrtidada de los numeros dependeran de los que introduzca el usuario//
       float media;
       std::cout<<"¿Cuántops numeros quieres introducir?";
       std::cin>>n_numeros;
       //se cambia en todos los for el 10 por n_numeros para que salga la media de los numeros que queramos introducir//
       for(i=0;i<n_numeros;i++){
                          std::cout<<"Dime numeros";
                          std::cin>>num[i];
                          }
                          //Ahora vamos a calcular la media//
                          for(i=0;i<n_numeros;i++){
                                            //Como sumar todos los numeros//
                                            suma=suma+num[i];
                                            }
                          //se establece el valor de la media//
                          media=suma/n_numeros;
                          std::cout<<"\nMEDIA:"<<media;
                          std::cout<<"\n Pulse cualquier tecla para salir";
                          std::cin>>salir;
                          
                          return 0;
       
}
