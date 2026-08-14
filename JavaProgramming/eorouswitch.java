import java.util.Scanner;
public class eorouswitch {
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter a number: ");
        int n=sc.nextInt();
        switch (n%2) {
            case 0:
                System.out.println("the number is even");
                break;
            case 1:
            case -1:
                System.out.println("the number is odd");
            default:
                break;
        }
    }
}
