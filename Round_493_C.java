// code_report Solution
// https://youtu.be/A33vNPH02FA

import java.util.*;
import java.io.*;

public class Main {
     public static void main (String []args)
     {
        Scanner sc = new Scanner (System.in);
        int     n  = sc.nextInt ();
        long    x  = sc.nextLong ();
        long    y  = sc.nextLong ();
        String  s  = sc.next ();
        
        Boolean on = false;
        long    c  = 0;
        
        for (char e : s.toCharArray ()) {
            if (e == '0' && !on) {
                on = true;
                ++c;
            } else if (e == '1') {
                on = false;
            }
        }
        
        System.out.println (Math.max (0L, Math.min ((c-1)*x + y, c*y)));
     }
}
