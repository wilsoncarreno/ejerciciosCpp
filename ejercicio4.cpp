#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
  int edad;
  string mensaje;
  do{
  cout << "ingrese su edad\n ";
  cin>>edad;
  }while(edad<=0);
 mensaje=(edad>=18)?"usted es mayor de edad":"usted es menor de edad";
  cout<<mensaje<<"\n";
  return 0;
}

