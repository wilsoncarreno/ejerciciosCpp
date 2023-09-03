#include <iostream>
#include<stdlib.h>
using namespace std;
int num;

int main() {
  do{
  cout<<"ingrese la cantidad que quieres que imprima";
  cin>>num;
} while(num<=0);
  for (int i=0;i<num;i++){
    cout<<i<<"\n";
  }
  return 0;
}
