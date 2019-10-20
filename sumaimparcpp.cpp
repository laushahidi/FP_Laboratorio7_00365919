#include <iostream>
using namespace std;

int rango(int i){
  int a, b, j, suma=0, inicio;
  cout<<"\nInicio de rango "<<i<<": ";
  cin>>a;
  cout<<"Fin de rango "<<i<<": ";
  cin>>b;
  if(a%2!=0){
    inicio=a;
  }
  else{
    inicio=a+1;
  }
  for(j=inicio;j<=b;j=j+2){
      suma+=j;
  }
  cout<<"Caso"<<i<<": "<<suma<<"\n";
  cout<<" ";
  return 0;
}

int main(){
  int casos, i;
  cout<<"Numero de casos de prueba: ";
  cin>>casos;
  for(i=1;i<=casos;i++){
    rango(i);
  }
  system("pause");
  return 0;
}