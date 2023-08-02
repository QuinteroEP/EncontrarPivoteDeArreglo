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
  int i, j, k;
  int a[5], pos = 0, p;
  float sl = 0, sr = 0, hl = 0, hr = 0;
  bool f = false;
  //pos: posicion en el arreglo; p: pivote; al: promedio izquierdo; ar: promedio derecho; sl: suma izquierda actual; sr: suma derecha actual; hl: suma mayor izquierda; hr: suma mayor derecha; f: pivote encontrado
  
  //digitar arreglo
  for(i = 0; i < 5; i++)
    {
      cout<<"Digite el numero de la posicion "<<i+1<<": ";
      cin>>a[i];
    }
  cout<<endl<<endl;
  
  //encontrar pivote
  for(j = 0; j < 5; j++)
    {
      sr = 0;
      sl = 0;
      for(i = pos+1; i < 5; i++)
      {
        sr = sr + a[i];
      }
      
      for(k = pos-1; k >= 0; k--)
      {
        sl = sl + a[k];
      }
    
      if(sr == sl)
      {
        hr = sr;
        hl = sr;
        p = pos;
        f = true;
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

  if(f == true)
  {
    cout<<"posicion del pivote: "<<p+1<<endl;
    cout<<"suma derecha: "<<hr<<endl;
    cout<<"suma izquierda: "<<hl<<endl; 
  }
  else
  {
    cout<<"No existe un pivote valido\n";
  }
  
  return 0;
}