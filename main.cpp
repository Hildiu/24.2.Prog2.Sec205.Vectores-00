#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
   vector<int> v;
   int numero;

   do{
       cout << "Numero [con 0 termina] : ";
       cin >> numero;
       if(numero!=0)
           v.push_back(numero);
   }while(numero !=0);
   //---- ahora recorremos el vector para imprimir los datos
   cout << "\n";
   for(int i=0; i<v.size(); i++)
       cout << setw(4) << v[i] ;
   //-----ahora utilizamos iter begin y end
   cout << "\n";
   for( auto miIter=begin(v); miIter!=end(v); miIter++)
       cout << setw(4) << *miIter;

    return 0;
}
