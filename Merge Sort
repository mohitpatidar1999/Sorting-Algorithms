import java.util.*;

public class Main
{
    static int c[];
    static void merge(int a[], int l, int mid, int u){
        int i=l;
        int j=mid+1;
        int k=l;
        
        while(i<=mid&&j<=u){
            if(a[i]<=a[j])
                c[k++]=a[i++];
            else
                c[k++]=a[j++];
        }
            while(j<=u){
                c[k++]=a[j++];
            }
            while(i<=mid){
                c[k++]=a[i++];
            }
            for(k=l;k<=u;k++){
                a[k]=c[k];
            }
        
    }
    static void mergeSort(int[] a, int l, int u){
        if(l<u){
            int mid=(l+u)/2;
            mergeSort(a,l,mid);
            mergeSort(a,mid+1,u);
            merge(a,l,mid,u);
        }
    }
	public static void main(String[] args) {
		System.out.println("Enter size of array");
		Scanner sc= new Scanner(System.in);
		int s=sc.nextInt();
		int a[] = new int[s];
		c=new int[s];
		System.out.println("Enter elements");
		for(int i=0;i<s;i++){
		    a[i]=sc.nextInt();
		}
		mergeSort(a,0,s-1);
		System.out.println("Sorted array:");
		for(int x=0;x<s;x++){
            System.out.println(a[x]);
        }
	}
}
