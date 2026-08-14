import java.util.*;
public class Replace {
    public static void main(String args[])
    {
        String a,e;
        Scanner s=new Scanner(System.in);
        String s1=s.nextLine();
        System.out.println("enter the variable to be replaced: ");
        a=s.next();
        e=s.next();
        String replaceString=s1.replace(a,e);
        System.out.println(replaceString);
    }
}
