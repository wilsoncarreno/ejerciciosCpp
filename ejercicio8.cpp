#include <iostream>
using namespace std;
int main() {
  float temp, farent ,kelvin;
  char escala[20];
  cout<<"ingrese la temperatura en grados celcius";
  cin>>temp;
  cout<<"cual es la escala de temperatura ( farentheit,    kelvin)";
  cin>>escala;  
  if(escala=="farentheit"){
    temp=(temp-32)*5/9;
  }
  else if ("kelvin"){
    temp=temp-273.15;
    
  }
  farent=(temp*9/5)+32;
  kelvin=temp+273.15;
  cout<<"temperatura en c° = "<<temp;
  cout<<"temperatura en f° = "<<farent;
  cout<<"temperatura en k° = "<<kelvin;
      
}
