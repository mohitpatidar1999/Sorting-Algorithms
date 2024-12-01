#include<iostream>
using namespace std;
class array
{
	int i,j,*arr1;
	
	public:
		array()
		{
		}
		array(int s)
		{
			 arr1=new int [s];
		}
		void bsort(int *,int);
		void ssort(int *,int);
		void isort(int *,int);
		void display(int);
};
void array:: ssort(int *arr,int s)
{
	for(i=0;i<s-1;i++)
	{
		int iMinIndex=i;
		for(j=i+1;j<s;j++)
		{
			if(arr[iMinIndex]>arr[j])      
			{
				iMinIndex=j;
			}
		}
				int t;
				t=arr[i];
				arr[i]=arr[iMinIndex];
				arr[iMinIndex]=t;			
	}
	for(i=0;i<s;i++)
	{
		arr1[i]=arr[i];
	}
}
void array::bsort(int *arr,int s)
{
	for(i=0;i<s-1;i++)
	{
		int flag=0;                //modified bubble sort concept
		for(j=0;j<s-1-i;j++)
		{
			if(arr[j]>arr[j+1])      //chhote se bda arrange hoga agr'>' hai to, '<' hai to bde se chhota arrange hoga
			{
				int t;
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
				flag=1;
			}
		}
		if(flag==0)                 // agr flag 0 hai mtlb swapping nhi hui mtlb sort ho gya hai ab sorting ki jrurat nhi hai 
		break;
	}
	for(i=0;i<s;i++)
	{
		arr1[i]=arr[i];
	}
}
void array::isort(int *arr,int s)
{
	int temp;
	for(i=1;i<s;i++)
	{
		 temp=arr[i];
		for(j=i-1;j>=0&&temp<arr[j];j--)
				arr[j+1]=arr[j];
				
			arr[j+1]=temp;
	}
	for(int i=0;i<s;i++)
	{
		arr1[i]=arr[i];
	}
}
void array::display(int size)
{
	cout<<"Sorted array is :"<<endl;
	for(i=0;i<size;i++)
	{
		cout<<arr1[i]<<endl;
	}
}
main()
{
	
	int size,choice;
	do
	{
		cout<<"Enter your choice"<<endl;
		cout<<"1. Bubble Sort"<<endl;
		cout<<"2. Selection Sort"<<endl;
		cout<<"3. Insertion Sort"<<endl;
		cout<<"4. Exit"<<endl;
		cin>>choice;
		if(choice==4)
			exit(0);
		cout<<"Enter array size"<<endl;
		cin>>size;
		array a(size);
		int a1[size];
		cout<<"Enter elements according to size"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a1[i];
	}
	
	
		switch(choice)
		{
			case 1:
				a.bsort(a1,size);
				a.display(size);
				break;
			case 2:
				a.ssort(a1,size);
				a.display(size);
				break;
			case 3:
				a.isort(a1,size);
				a.display(size);
		}
   }while(choice!=4);
}
