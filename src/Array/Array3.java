package Array;

import java.util.Scanner;

public class Array3 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter array size= ");
        int size=sc.nextInt();
        int[]a=new int[size];
        for (int i=0;i<size;i++){
            a[i]=sc.nextInt();//input array number
        }
        for(int i:a){
            System.out.println(i);
        }
        for(int i=0;i<size;i++){
            System.out.println(a[i]);//Output array number
        }
    }
}
