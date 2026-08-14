import java.util.Scanner;
public class marksabove60 {
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        String[]name=new String[6];
        int[]marks=new int[6];
        int i;
        for(i=0;i<6;i++)
        {
            System.out.println("enter student name:\n");
            name[i]=sc.next();
            System.out.println("enter marks:\n");
            marks[i]=sc.nextInt();
        }
        System.out.println("students scoring above 60:\n");
        for(i=0;i<6;i++)
        {
            if(marks[i]>=60)
            {
                System.out.println(name[i]+ "-"+marks[i]);
            }
        }
    }
}
