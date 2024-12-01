import java.util.*;
public class Main
{
    static int partition(int a[],int start,int end){
        int pivot=a[end];
        int partitionIndex=start;
        for(int i=start;i<end;i++){
            if(a[i]<=pivot){
                int t=a[i];
                a[i]=a[partitionIndex];
                a[partitionIndex]=t;
                partitionIndex++;
            }
        }
                int t=a[partitionIndex];
                a[partitionIndex]=a[end];
                a[end]=t;
        return (partitionIndex);
    }
    static void quickSort(int a[], int down, int up){
        int loc;
        if(down<up){
            loc=partition(a,down,up);
            quickSort(a,down,loc-1);
            quickSort(a,loc+1,up);
        }
    }
	public static void main(String[] args) {
		System.out.println("Enter size of array");
		Scanner sc = new Scanner(System.in);
		int s=sc.nextInt();
		int a[]=new int[s];
		System.out.println("Enter elements");
		for(int i=0;i<s;i++){
		    a[i]=sc.nextInt();
		}
		int l=0;
		int u=s-1;
		quickSort(a,l,u);
	System.out.println("Sorted array is :");
	for(int i=0;i<s;i++){
	    System.out.println(a[i]);
	}
    }
    
}
