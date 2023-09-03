#include <iostream>
using namespace std;
int main() {
  int libra, kilo, gramo;
    /*usaremos este do, while para obligar que la persona que       ingrese el peso en libras no ingrese un numero negativo
     */
    do{
      cout << "ingrese el peso en libras\n";
      cin>>libra ;
    } while (libra<=0);
    kilo=libra/2;
    cout<<libra<<"  libras es igual a "<<kilo<<"  kilo ";
    gramo= libra*500;
   cout<<libra<<"  libras es igual a "<<gramo<<"  gramos ";
}

