import java.util.Scanner;
public class Reverse {
    public static void main(String[] args)
    {
        int n;
        int reverse=0;
        System.out.println("enter an integer:");
        Scanner s=new Scanner(System.in);
        n=s.nextInt();
        while (n!=0) {
            reverse=reverse*10;
            reverse=reverse+n%10;
            n=n/10;
        }
        System.out.println("reverse of the given number:"+reverse);
    }
}
