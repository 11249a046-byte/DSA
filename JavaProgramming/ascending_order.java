import java.util.Scanner;
public class ascending_order {
    public static void main(String[]args)
    {
        int n,temp,i,j;
        Scanner s=new Scanner(System.in);
        System.out.println("ENTER number of elements:\n");
        n=s.nextInt();
        int[]a=new int[n];
        System.out.println("enter the elements:\n");
        for(i=0;i<n;i++)
        {
            a[i]=s.nextInt();
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        System.out.println("Ascending order:\n");
        for(i=0;i<n;i++)
        {
            System.out.println(a[i]+"\n");
        }
    }
}
