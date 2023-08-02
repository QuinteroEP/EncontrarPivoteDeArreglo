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
  int a[5], pos = 0, p, posl = 5;
  int i, j, k;
  float al = 0, ar = 0, pl = 0, pr = 0, hl = 0, hr = 0;
  //al: promedio izquierdo; ar: promedio derecho; pos: posicion en el arreglo; p: pivote

  //digitar arreglo
  for(int i = 0; i < 5; i++)
    {
      cout<<"Digite el numero de la posicion "<<i+1<<": ";
      cin>>a[i];
    }
  cout<<endl<<endl;
  
  //encontrar pivote
  for(j = 0; j < 5; j++)
    {
      pr = 0;
      pl = 0;
      for(i = pos+1; i < 5; i++)
      {
        pr = pr + a[i];
      }
      ar = pr/5;

      for(k = pos-1; k >= 0; k--)
      {
        pl = pl + a[k];
      }
      al = pl/5;
      
      if(ar > hr && al > hl)
      {
        hr = ar;
        hl = al;
        p = pos;
      }

      pos++;
    }

  //resultado
  cout<<"Arreglo: {";
  for(i = 0; i < 4; i++)
    {
      cout<<a[i]<<", ";
    }
  cout<<a[4]<<"}\n\n";
  
  cout<<"posicion del pivote: "<<p+1<<endl;
  cout<<"promedio derecho: "<<hr<<endl;
  cout<<"promedio izquierdo: "<<hl<<endl;
  
  return 0;
}