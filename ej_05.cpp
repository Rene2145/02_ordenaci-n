#include <iostream>
using namespace std;

int main()
{
int A[10];
    int n,i,j,aux;

    cout << "Ingresa la cantidad de numeros: ";
    cin >> n;
    cout << "Ingresa los numeros:" << endl;
    for(i=0;i<n;i++)
    {
	cin >> A[i];
    }
    cout <<"\nArreglo desordenado:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
	}
    
   
    return 0;
}
