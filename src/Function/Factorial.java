package Function;

import java.util.Scanner;

public class Factorial {
    public static int fact(int n){
       int f=1;
       for(int i=1;i<=n;i++){
           f=f*i;
       }
       return f;

    }

    public static void main(String[] args) {
        System.out.println("Enter your number= ");
        Scanner sc=new Scanner(System.in);
        int b=sc.nextInt();
        System.out.println(fact(b));
    }

}
