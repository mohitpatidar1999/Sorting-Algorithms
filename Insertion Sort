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
		int j;
	    for(int i=1;i<size;i++){
	        int temp=a[i];
	        j=i-1;
	        while(j>=0&&a[j]>temp){
	            a[j+1]=a[j];
	            j--;
	        }
	        a[j+1]=temp;
	   }
	    System.out.println("Sorted array is:");
	    for(int i=0;i<size;i++){
	        System.out.println(a[i]);
	    }
	}
}
