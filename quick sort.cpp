#include<iostream>
using namespace std;
class array
{
	int *arr;
	public:
		
		array()
		{
		}
		
		int * create_array(int size)
		{
			arr=new int [size];
			cout<<"Enter "<< size <<"elements"<<endl;
			for(int i=0;i<size;i++)
			{
				cin>>arr[i];
			}
			return(arr);
		}
		void qsort(int*,int,int);
		int partition(int*,int,int);
		void display(int*,int);
};
int array::partition(int *arr1,int start,int end)
{
	int pivot=arr1[end];
	int partitionIndex = start;
	for(int i=start;i<end;i++){
		if(arr1[i]<=pivot){
			swap(arr1[i],arr1[partitionIndex]);
			partitionIndex++;
		}
	}
	swap(arr1[partitionIndex],arr1[end]);
	return(partitionIndex);
	
	
	/*int down1=lb+1;
	int pivot=arr1[lb];
	int up1=ub;
	while(down1<up1)
	{
		while((arr1[down1])<=pivot)
			down1++;
		while((arr1[up1])>pivot)
			up1--;
		if(up1>down1)
		{
			int temp=arr1[up1];
			arr1[up1]=arr1[down1];
			arr1[down1]=temp;
		}
	}
	int temp = arr1[lb];
	arr1[lb]=arr1[up1];
	arr1[up1]=temp;
	return (up1);
	*/
}
void array::qsort(int *arr,int down, int up)
{
	int j;
	if(down<up){
	
	j=partition(arr,down,up);
	qsort(arr,down,j-1);
	qsort(arr,j+1,up);
   }
}
void array::display(int *arr2,int size1)
{
	cout<<"After performing quick sort your sorted is : "<<endl;
	for(int i=0;i<size1;i++)
	{
		cout<<arr2[i]<<" ";
	}
}
main()
{
	
	int size;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	array a1;
	int *ar = a1.create_array(size);	
	a1.qsort(ar,0,size-1);
	a1.display(ar,size);
}
