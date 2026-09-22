#include <iostream>
using namespace std;

int main()
{
int A[10];
    int m,n,i,j,aux;

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

   for(i=0;i<n-1;i++){
   	m=i;
	   for(j=i+1;j<n;j++){
        if(A[j]<A[m]){
        	m=j;
			}
    	}
        aux=A[i];
        A[i]=A[m];
        A[m]=aux;
	}
    
    cout <<"\n\nArreglo ordenado: "<<endl;


    for(i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
