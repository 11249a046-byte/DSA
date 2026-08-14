import java.util.Scanner;
public class aouswitch {
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter first number:");
        int x=sc.nextInt();
        System.out.println("enter second number:");
        int y=sc.nextInt();
        System.out.println("menu:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\nEnter your choice:\n");
        int choice=sc.nextInt();
        switch (choice) {
            case 1:
                System.out.println("Result= "+(x+y));
                break;
            case 2:
                System.out.println("Result: "+(x-y));
                break;
            case 3:
                System.out.println("Result: "+(x*y));
                break;
            case 4:
                System.out.println("Result: "+(x/y));
                break;
            case 5:
                System.out.println("Result: "+(x%y));
                break;
            default:
                System.out.println("invalid choice");
                break;
        }
    }
}
