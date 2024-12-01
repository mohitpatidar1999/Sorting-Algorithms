 #include<iostream>
using namespace std;
class msort
{
	int *c;
	int * arr;
		public:
			msort(){
			}
			
		int* create_array(int);
		void Merge(int*,int,int,int);
		void MergeSort(int*,int,int);
		void display(int *,int);
};
int* msort::create_array(int size){
	c=new int[size];
	arr = new int[size];
	cout<<"Enter elements according to first array size"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	return(arr);
}
void msort::MergeSort(int *a,int l,int h)
{
	if(l<h)
	{
		int mid=(l+h)/2;
		MergeSort(a,l,mid);
		MergeSort(a,mid+1,h);
		Merge(a,l,mid,h);
	}
}
void msort::Merge(int *ar1,int low,int mid,int high)
{
	int i,j,k;
 	i=low;
	j=mid+1;
	k=low;
	while(i<=mid&&j<=high)
	{
		if(ar1[i]<=ar1[j])
			c[k++]=ar1[i++];
		else
			c[k++]=ar1[j++];
	}
		while(j<=high){
			c[k++]=ar1[j++];
			}
	
		while(i<=mid){
			c[k++]=ar1[i++];
		}
	for( k=low;k<=high;k++)
	{
		ar1[k]=c[k];
	}	
}
void msort::display(int* arr2,int size2)
{
	//cout<<"hey"<<endl;
	for(int i=0;i<size2;i++)
	cout<<arr2[i]<<" ";
	
}
main()
{
	msort m;
	int size;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	int *a1 = m.create_array(size);
	m.MergeSort(a1,0,size-1);
	m.display(a1,size);
}
