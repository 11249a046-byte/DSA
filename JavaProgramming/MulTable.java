import java.util.Scanner;
public class MulTable {
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        System.out.println("enter a positive integer:");
        int n=s.nextInt();
        int i=1;
        for(i=1;i<=10;i++)
            System.out.println(n+" X "+i+" = "+n*i);
    }
}
