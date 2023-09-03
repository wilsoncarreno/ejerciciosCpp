#include <iostream>
using namespace std;
int main() {
  char materia[20];
  float previo1=0, previo2=0, previoFinal=0,nota3=0, definitiva=0;
  cout << "ingrese la el nombre de la asignatura\n";
  cin>>materia;
  cout<<"ingrese la nota del primer previo\n";
  cin>>previo1;
  previo1=previo1*0.25;
  cout<<"ingrese la nota del segundo previo\n";
  cin>>previo2;
  previo2=previo2*0.25;
  cout<<"ingrese la nota tercera nota\n";
  cin>>nota3;
  nota3=nota3*0.20;
  cout<<"ingrese la nota del  previo final \n";
  cin>>previoFinal;
  previoFinal=previoFinal*0.30;
  definitiva=previo1+previo2+nota3+previoFinal;
  
  
  cout<<"la definitiva de "<<materia<<"es de "<<definitiva<<"\n";
  return 0;
}



