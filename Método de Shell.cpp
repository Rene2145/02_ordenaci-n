#include <iostream>
using namespace std;

int shellSort(int A[], int n);

int main(){
	int n;
	int A[60];
	cout<<"						\n";
	cout<<"						+=====================+\n";
	cout<<"						|   METODO DE SHELL   |\n";
	cout<<"						+=====================+\n\n";
	cout<<"1) Ingrese la cantidad de elementos: ";
	cin>>n;
	cout<<"2) Ingrese los elementos:\n";
	for(int i=0; i <n;i++){
	cout<<"  ";cin>>A[i];
	}
	cout<<"\n RESULTADO\n";
	cout<<"\n Arreglo desordenado: \n";
	for(int i=0; i <n;i++){
	cout<<"  "<<A[i]<<" ";
	}
	
	
	for(int k=n/2;k>0;k/=2){
		for (int i=k;i<n;i++){
			int aux=A[i];
			int j=i;
			while (j>=k&&A[j-k]>aux){
				A[j]= A[j-k];
				j -=k;
			}
			A[j]=aux;
		}
	}
	
	cout<<"\n\n Arreglo ordenado: \n";
	for(int i=0; i <n;i++){
		cout<<"  "<<A[i]<<" ";
	}
    return 0;
}
