#include <iostream>
using namespace std;

int comparar(int i){
  int a, b;
  cout<<"\n"<<i<<") Pareja de numeros a comparar: \nPrimer numero: ";
  cin>> a;
  cout<<"Segundo numero: ";
  cin>> b;
  if (a > b){
    cout<<""<<a<<" > "<<b<<"";
  }
  else if(a < b){
    cout<<""<<a<<" < "<<b<<"";
  }
  else{
    cout<<""<<a<<" = "<<b<<"";
  }
  return 0;
}
int main() {
  int casos, i;
  cout<<"Numero de casos a evaluar: ";
  cin>>casos;
  for(i=1; i<=casos; i++){
    comparar(i);
  }
  return 0;
}