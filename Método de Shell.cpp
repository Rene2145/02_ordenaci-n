#include <iostream>
using namespace std;

int shellSort(int A[], int n);

int main(){
	int A[]={23, 12, 1, 5, 9 , 2, 8, 3};
	int n=8;
	
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
	
	cout<<"Arreglo ordenado: ";
	for(int i=0; i <n;i++){
		cout<<A[i]<<" ";
	}
    return 0;
}
