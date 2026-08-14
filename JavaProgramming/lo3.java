import java.util.Scanner;
public class lo3 {
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter first number: ");
        int x=sc.nextInt();
        System.out.println("enter second number: ");
        int y=sc.nextInt();
        System.out.println("enter third number: ");
        int z=sc.nextInt();
        if(x>y&&x>z)
            System.out.println("first number is big");
        else if (y>x&&y>z) {
            System.out.println("second number is big");
        }
        else
        {
            System.out.println("third number is big");
        }
    }
}
