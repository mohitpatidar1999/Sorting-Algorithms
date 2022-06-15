import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
		System.out.println("Enter how many elements you want to sort");
		int size = sc.nextInt();
		int a[]=new int[size];
		System.out.println("Enter elements");
		for(int i=0;i<size;i++){
		    a[i]=sc.nextInt();
		}
	    for(int i=0;i<size-1;i++){
	        int flag=0;						//modified bubble sort concept
	        for(int j=0;j<size-1-i;j++){
	            if(a[j]>a[j+1]){					//chhote se bda arrange hoga agr'>' hai to , '<' hai to bde se chhota arrange hoga
	                int t=a[j];
	                a[j]=a[j+1];
	                a[j+1]=t;
	                flag=1;
	            }
	        }
	        if(flag==0) break;					//agr flag 0 hai mtlb swapping nhi hui mtlb sort ho gya hai ab sorting ki jrurat nhi hai
	    }
	    System.out.println("Sorted array is:");
	    for(int i=0;i<size;i++){
	        System.out.println(a[i]);
	    }
	}
}
