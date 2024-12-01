#include<iostream>
using namespace std;
int getMax(int *A,int n){
	int max=A[0];
	for(int i=1;i<n;i++)
	{
		if(A[i]>max)
			max=A[i];
	}
	return(max);
}
void countSort(int *a,int n,int pass){
	int count[10]={0};
	
	for(int i=0;i<n;i++)
		count[(a[i]/pass)%10]++;
	
	for(int i=1;i<=9;i++)
		count[i]=count[i]+count[i-1];
	//create array 'b' to store sorted elements accordint to pass	
	int b[n];
	for(int i=n-1;i>=0;i--)
		b[--count[(a[i]/pass)%10]]=a[i];
	//copy array 'b' in 'a'
	for(int i=0;i<n;i++)
		a[i]=b[i];
}
void radixSort(int *a,int n){
	int max=getMax(a,n);
	for(int pass=1;(max/pass)>0;pass*=10){
		countSort(a,n,pass);
	}
}
main(){
	int size;
	cout<<"Enter size of the array"<<endl;
	cin>>size;
	int a[size];
	cout<<"Enter "<<size<<" elements"<<endl;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	int max=getMax(a,size);
	radixSort(a,size);
	
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
}
