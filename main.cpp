#include <iostream>
using namespace std;
void imprimir (int a[],int t);
void ingresar(int a[],int t);
int main() {
  int a[100], i,t;
  cout << "Ingrese el tamanio del arreglo: ";
  cin >>t;
  ingresar (a,t);
  cout <<endl;
  imprimir (a, t);
  return 0;
}
void ingresar(int a[],int t)
{
    int i;
    for(i=0;i<t;i++)
    {
        cout<<"Ingrese el elemento al arreglo " <<i+1 <<":" <<endl;
        cin>>a[i];
    }

}
void imprimir (int a[],int t){
  for (int i=0; i<t; i++){
    if (a[i]%2==0){
    cout << a[i];
    cout << " ";  
    } 
}
}