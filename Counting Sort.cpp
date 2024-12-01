
//Values can be 0 to 9 that means single digit

#include<iostream>
using namespace std;
main(){
	int size;
	cout<<"Enter size of the array"<<endl;
	cin>>size;
	int a[size];
	cout<<"Enter "<<size<<" elements"<<endl;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	int k=a[0];               //key value that means no value is greater than k in the array  
	for(int i=1;i<size;i++){
		if(a[i]>k)
			k=a[i];
	}
	int count[k+1];
	//initialize every element of count array with zero
	for(int i=0;i<k+1;i++){
		count[i]=0;
	}
	//set count(occurence count) or each element in array 'a'
	for(int i=0;i<size;i++){
		count[a[i]]++;
	}
	//count ={3, 2, 1, 4, 3};
	//sorted array={0,0,0,1,1,2,3,3,3,3,4,4,4};
	//reset the count array with actual positions of elements in the sorted array jese ki count array m index 0 p value 3 hai 
	//mtlb sorted array m shuru k 3 elements 0 honge fr count array k index 1 p(count[1]) value 2(count[1]=2) hai mtlb 
	//sorted array m '1' 2 bar hai jo sorted array k index 3(count[3]=1) and 4(count[4]=1) p hai
	for(int i=1;i<k+1;i++){
		count[i]=count[i]+count[i-1];
	}
	//to maintain the stability of array mtlb jese given array m 3 2 bar hai a[3]=3 & a[6]=3 to sorted array m a[3]=3 jo hai a[6]=3 se pehle rhe isliye	
	// create array in which elements of array 'a' will be stored in sorted order
	int b[size];
	for(int i=size-1;i>=0;i--){
		b[--count[a[i]]]=a[i];
	}
	// printing the sorted array
	for(int i=0;i<size;i++){
		cout<<b[i]<<" ";
	}
}
