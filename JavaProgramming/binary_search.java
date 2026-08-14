import java.util.Scanner;
public class binary_search {
    public static void main(String[]args)    
    {
        int first,last,mid,n,x,i,j;
        boolean found=false;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number of elements:\n");
        n=sc.nextInt();
        int[]a=new int[n];
        System.out.println("enter the sorted elements:\n");
        for(i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        System.out.println("enter the element to search:\n");
        x=sc.nextInt();
        first=0;
        last=n-1;
        while(first<=last)
        {
            mid=(first+last)/2;
            if(a[mid]==x)
            {
                found=true;
                break;
            }
            else if (a[mid]<x) {
                first=mid+1;
            }
            else{
                last=mid+1;
            }
        }
        if (found) {
            System.out.println("element found");
        }
        else{
            System.out.println("element not found");
        }
    }
}
