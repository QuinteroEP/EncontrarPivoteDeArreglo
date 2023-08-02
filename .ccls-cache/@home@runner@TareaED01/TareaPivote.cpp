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
  //pl: promedio izquierdo; pr: promedio derecho; pos: posicion en el arreglo

  //digitar arreglo
  for(int i = 0; i < 5; i++)
    {
      cout<<"Digite el numero de la posicion "<<i+1<<": ";
      cin>>a[i];
    }
  cout<<endl<<endl;
  
  //encontrar pivote
    for(k = 0; k > 5; k++)
    {
      for(i = pos+1; i < 5; i++)
          {
            pl = pl + a[i];
          }
      for(j = pos-1; j >= 0; j--)
          {
            pr = pr + a[j];
          }
      
      ar = pr/5;
      al = pl/5;
      
      if(ar > hr && al > hl)
      {
        hr = ar;
        hl = al;

        p = pos+1;
      }
      pl = 0;
      pr = 0;
    }

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