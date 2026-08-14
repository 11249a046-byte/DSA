import java.util.Scanner;
public class largestandsmallest {
    public static void main(String[]args){
        int[]a={23,34,13,64,72,90,10,15,9,27};
        int sum=0;
        int min=a[0];
        int max=a[0];
        int i,j;
        for(i=0;i<a.length;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
            if(a[i]<min)
                min=a[i];
            sum+=a[i];
        }
        System.out.println("sum="+sum);
        System.out.println("largest number: "+max);
        System.out.println("smallest number: "+min);
    }
}
