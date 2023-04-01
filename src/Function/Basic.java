package Function;

import java.util.Scanner;

public class Basic {
    public static void Hellowrold(){
        System.out.println("Helow wrold");
        System.out.println("Helow wrold");
        System.out.println("Helow wrold");
        System.out.println("RAKIBUL HASAN AKASH");
    }
    public static void Sum(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the first number=  ");
        int a=sc.nextInt();
        System.out.println("Enter the second number=  ");
        int b=sc.nextInt();
        int sum=a+b;
        System.out.println("Sum is = "+sum);
    }
    public static int sum(int a,int b){
        int sum=a+b;
        System.out.println(sum);
        return 2;
    }
    public static int multiply(int a,int b){// parameter
        int multi=a*b;//
        return multi;
    }
//APNA COL


    public static void main(String[] args) {
        Hellowrold();
        Sum();
        Scanner we=new Scanner(System.in);
        int a=we.nextInt();
        int b=we.nextInt();
        sum(a,b);
        int c=we.nextInt();
        int d=we.nextInt();
        System.out.println(multiply(a,b));//Arguments
        int result=multiply(c,d);
        System.out.println(result);


    }
}
