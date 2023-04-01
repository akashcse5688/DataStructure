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



    public static void main(String[] args) {
        Hellowrold();
        Sum();

    }
}
