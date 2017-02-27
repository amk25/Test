#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

#define max 100

int* countSort(int *a,int size){

	int *output=new int[size];
	
	int *count=new int[max=1];
	for(int i=0; i<=max; i++)
		count[i]=0;
	
	for(int j=0; j<=max; j++)
		count[a[j]] += 1;
	
	for(int i=1; i<size-1; i++)
		count[i] += count[i-1];
	
	for(j=size-1; j>=0; j--)
		output[count[a[j]]]=a[j];
		
	return output;
}

int main(int argc, char** argv){

	int size;
	cout<<"Enter Size of Array: ";
	cin>>size;
	
	srand(time(NULL));
	
	int *a=new int[size];
	for(int i=0; i<size; i++){
		a[i]=rand()%99;
	}
	
	int *p=countSort(a,size);
	
	for(int i=0; i<size; i++)
		cout<<a[i]<<" ";
	cout<<"\n";

	delete []a;
	delete []p;
		
	return 0;
}