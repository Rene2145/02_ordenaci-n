#include <iostream>
using namespace std;

int main()
{
int A[10];
    int n,i,j,aux;
    int iz=0;

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
	
	int de=n-1;
	
   for(i=0;i<n-1;i++){
        for(j=iz;j<de;j++){
            if(A[j]>A[j + 1]){
                aux=A[j];
                A[j]=A[j+1];
                A[j+1]=aux;
            }
        }
        de--;
        for(j=de;j>iz;j--){
            if(A[j]<A[j-1]){
                aux=A[j];
                A[j]=A[j-1];
                A[j-1]=aux;
            }
        }
        iz++;
    }
    
    cout <<"\n\nArreglo ordenado: "<<endl;


    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    
   
    return 0;
}
