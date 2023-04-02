package Function;

public class Funtionoverloading {
    public static int sum(int a,int b){
        return a+b;
    }
    public static int sum(int a,int b,int c){
        return a+b+c;
    }
    public static int multiply(int a,int b){
        return a*b;
    }
    public static int multiply(int a,int b,int c){
        return a*b*c;
    }
    public static int subtract(int a,int b){
        return a-b;
    }
    public static int subtract(int a,int b,int c){
        return a-b-c;
    }
    public static int divisor(int a,int b){
        return a/b;
    }

    public static void main(String[] args) {
        System.out.println(sum(23,34));
        System.out.println(sum(45,56,78));
        System.out.println(multiply(3,3));
        System.out.println(divisor(6,2));
        System.out.println(subtract(2,3,4));
        System.out.println(sum(3,34,4));

    }
}
