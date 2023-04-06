package Array;

import java.util.Scanner;

public class LargestNumber {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Array Size= ");
        int size=sc.nextInt();
        int []a=new int[size];
        for (int i=0;i<size;i++){
            a[i]= sc.nextInt();
        }
        int max=a[0];
        for (int i=0;i<size;i++){
            if (max<a[i]){
                max=a[i];
            }

        }
        System.out.println("large number is = "+max);
    }

}
