import java.util.Scanner;
public class perfect {
    public static void main(String[] args){
    int n;
    int sum=0;
    int i;
    Scanner s=new Scanner(System.in);
    System.out.println("enter any positive integer: ");
    n = s.nextInt();
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
        System.out.println("given number is perfect");
    else 
        System.out.println("Not perfect");
}
}
