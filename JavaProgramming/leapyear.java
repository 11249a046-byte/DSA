import java.util.Scanner;
public class leapyear {
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the year: ");
        int year=sc.nextInt();
        boolean leap=false;
        if(year%400==0)
            leap=true;
        else if(year%100==0)
            leap=false;
        else if(year%4==0)
            leap=true;
        if(leap)
            System.out.println(year+"is a leap year");
        else
            System.out.println(year+ "is not a leap year");

    }
}
