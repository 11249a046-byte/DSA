import java.util.Scanner;
public class Armstrong {
    public static void main(String[] args)
    {
        int n,nu,num=0,rem;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter any positive integer:");
        n=sc.nextInt();
        nu=n;
        while(nu!=0)
        {
            rem=nu%10;
            num=num+rem*rem*rem;
            nu=nu/10;
        }
        if(num==n)
            System.out.println("the number is Armstrong");
        else
            System.out.println("not armstrong");
    }
}
