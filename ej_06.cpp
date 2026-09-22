#include <iostream>
using namespace std;

int main()
{
int A[10];
    int n,i,j,aux;
    
    cout << "Ingresa la cantidad de numeros: ";
    cin >> n;
    cout << "Ingresa los numeros:" << endl;
    for(i=0;i<n;i++){
	cin >> A[i];
    }
    cout <<"\nArreglo desordenado:"<<endl;
    for(i=0;i<n;i++){
        cout<<A[i]<<" ";
	}

   for(i=1;i<n;i++){
        aux=A[i];
		j=i-1;
		for(j=i-1;j>=0 && A[j]>aux;j--){
        A[j+1]=A[j];
    	}
    	A[j+1]=aux;
	}
    
    cout <<"\n\nArreglo ordenado: "<<endl;


    for(i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
