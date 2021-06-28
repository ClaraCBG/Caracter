#include <iostream>
using namespace std;

int testaTipoChar(char c){
if ((int)c>=97 && (int)c<=122)
  return 1;

else if ((int)c>=65 && (int)c<=90)
  return 2;

else if((int)c>=48 && (int)c<=57)
  return 3;

else 
return 0;
}
int main() {
  char caracter;
  int valorFinal;

  cout << "Insira um caracter:"<<endl;

  cin>>caracter;

  valorFinal=testaTipoChar(caracter);

  if(valorFinal==1)
    cout <<"O caracter inserido é uma Letra Minúscula";

  else if(valorFinal==2)
    cout <<"O caracter inserido é uma Letra Maiúscula";

  else if (valorFinal == 3)
    cout <<"O caracter inserido é um Número";

  else
    cout <<"O caracter inserido é um Símbolo";
  
return 0;
}