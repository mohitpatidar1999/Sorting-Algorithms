#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
void max_heapify(int *a,int n,int i){
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n&&a[left]>a[largest]){
		largest=left;
	}
	if(right<n&&a[right]>a[largest]){
		largest=right;
	}
	if(largest!=i){
		swap(a[i],a[largest]);
		max_heapify(a,n,largest);
	}
}
void heap_sort(int *a,int n){
	for(int i=(n/2)-1;i>=0;i--){
		max_heapify(a,n,i);
	}
	for(int i=n-1;i>0;i--){
		swap(a[0],a[i]);
		max_heapify(a,i,0);
	}
	
}
main(){
	int size;
		cout<<"Enter array size"<<endl;
		cin>>size;
		int a1[size];		
		cout<<"Enter elements according to size"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a1[i];
	}
	heap_sort(a1,size-1);
	for(int i=0;i<size;i++)
	{
		cout<<a1[i]<<" ";
	}
}
