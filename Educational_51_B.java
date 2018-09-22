// code_report Solution
// https://youtu.be/vcF8mTjgt6o

import java.util.*;
import java.io.*;

public class Main {
     public static void main(String []args) {
        Scanner sc = new Scanner(System.in);
        Long l = sc.nextLong();
        Long r = sc.nextLong();
        System.out.println("YES");
        for (Long i = l; i < r; i += 2)
            System.out.println(Long.toString(i) + ' ' + 
                               Long.toString(i+1));
     }
}
