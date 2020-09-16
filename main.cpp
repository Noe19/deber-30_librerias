
#include <iostream>
#include <fstream>
#include <iomanip>

#include"ejercicio1.h"
#include "ejercicio2.h"
#include"ejercicio3.h"
using namespace std;


int main() {
  int opcion;
  cout <<"BIENVENIDO AL SISTEMA DE NOGA\n";
  cout <<"1.-EJERCICIO 1"<<endl;
  cout <<"2.-EJERCICIO 2"<<endl;
  cout <<"3.-EJERCICIO 3"<<endl;
  cout <<"ESCOJA LA OPCION DESEADA:";
  cin>>opcion;
  while (opcion!=0){

  switch (opcion){

    case 1:{
      
      ejercicio1();
      break;
    }

    case 2:{
      MenuEjer2();
      break;
    }
    case 3:{
      ejercicio3();
      break;
    }
  }
 cout <<"BIENVENIDO AL SISTEMA DE NOGA\n";
  cout <<"1.-EJERCICIO 1"<<endl;
  cout <<"2.-EJERCICIO 2"<<endl;
  cout <<"3.-EJERCICIO 3"<<endl;
  cout <<"ESCOJA LA OPCION DESEADA";
  cin>>opcion;
  }

 return 0;
}