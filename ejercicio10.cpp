#include <iostream>
using namespace std;
int main() {
  int nu=0;
  float notas[nu];
  float notas2[nu];
  float definitiva=0;
  char meteria[20];
  cout<<"ingrese el nombre de la materia ";
  cin>>meteria; 
  cout<<"ingresa cuantas notas deseas ingresar";
  cin>>nu;
  
  for(int i=0;i<nu;i++){
    cout<<"ingrese la nota";
    cin>>notas[i];
    notas2[i]=notas[i];
  }
  
  cout<<"\n";
  cout<<"las notas ingresadas fueron \n";
  for(int i=0;i<nu;i++){
    cout<<notas2[i];
    cout<<"\n";
  }
  
  
  for(int i=0;i<nu;i++){
  	definitiva=definitiva+notas[i];
  }
  definitiva=definitiva*0.20;
  cout<<"la definitiva de la tercera nota es de : "<<definitiva;
  
  
  
  
 // for(int i=0;i<n;i++){
   // definitiva=notas2[i]+notas2[i];
  //  cout<<definitiva;
  //  cout<<"\n";
  //}
  
  return 0;
  
    
  
}


