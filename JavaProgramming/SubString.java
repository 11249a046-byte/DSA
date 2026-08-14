import java.util.Scanner;
public class SubString {
    public static void main(String[] args)
    {
        String string, sub;
        int i,n=0,c,length;
        Scanner in=new Scanner(System.in);
        System.out.println("enter a string to print all the sub strings:");
        string=in.nextLine();
        length=string.length();
        System.out.println("substrings:");
        for(c=0;c<length;c++)
        {
            for(i=1;i<=length-c;i++)
            {
                sub=string.substring(c,c+i);
                System.out.println(sub);
            }
            n=n+i;
        }
        System.out.println("no substrings present are: "+n);
    }
}
