#include <iostream>
using namespace std;

int primos(int a, int b, int cont, int i, int j){
  for(i=a;i<=b;i++){
    cont=0;
    for(j=1;j<=b;j++){
      if (i % j == 0){
        cont=cont+1;
      }
    }
    if (cont == 2){
      cout<< ""<<i<<" ";
    }
  }
  return 0;
}
int main() {
  int a, b, cont=0, i, j;
  cout<<"Inicio de rango: ";
  cin>>a;
  cout<<"Fin de rango: ";
  cin>>b;
  cout<<"Numeros primos entre el rango ("<<a<<","<<b<<"): \n";
  primos(a, b, cont, i, j);
  return 0;
}