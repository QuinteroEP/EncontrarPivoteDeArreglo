/*
Pablo Enrique Quintero - Estructura de Datos
Julio 25, 2023
Programa: Encontrar el mejor pivote de un arreglo de tamaño 5 digitado por el usuario
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int a[5], pl, pr, pos = 0, p, hl = 0, hr = 0;
  int i, j, k;
  float al = 0, ar = 0;
  //al: promedio izquierdo; ar: promedio derecho; pos: posicion en el arreglo

  //digitar arreglo
  for(int i = 0; i < 5; i++)
    {
      cout<<"Digite el numero de la posicion "<<i+1<<": ";
      cin>>a[i];
    }
  cout<<endl<<endl;
  
  //encontrar pivote
    for(i = pos; i > 5; i++)
    {
      pr = pr + a[i];
    }
    ar = pr/5;
  cout<<ar;

  /*resultado
  cout<<"Arreglo: {";
  for(int i = 0; i < 4; i++)
    {
      cout<<a[i]<<", ";
    }
  cout<<a[4]<<"}\n";

  cout<<"posicion del pivote: "<<p<<endl;
  cout<<"promedio derecho: "<<hr<<endl;
  cout<<"promedio izquierdo: "<<hl<<endl;
  */
  return 0;
}