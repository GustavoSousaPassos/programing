package com.mycompany.bee1929;

import java.util.Scanner;

public class Bee1929 {

    public static void main(String[] args) 
    {
       Scanner in = new Scanner(System.in);
        
       int val = in.nextInt();
       String res = Integer.toHexString(val);
       System.out.println(res.toUpperCase());
    }
}
