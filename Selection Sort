import java.util.*;
public class Main
{
	public static void main(String[] args) {
		System.out.println("Enter size of array");
		Scanner sc = new Scanner(System.in);
		int s=sc.nextInt();
		int a[]=new int[s];
		System.out.println("Enter elements");
		for(int i=0;i<s;i++){
		    a[i]=sc.nextInt();
		}
		for(int i=0;i<s-1;i++){
		    int min=i;
		    for(int j=i+1;j<s;j++){
		        if(a[j]<a[min]) min=j;
		}
		if(min!=i){
		    int t=a[i];
		    a[i]=a[min];
		    a[min]=t;
		}
	    }
	System.out.println("Sorted array is :");
	for(int i=0;i<s;i++){
	    System.out.println(a[i]);
	}
    }
    
}
