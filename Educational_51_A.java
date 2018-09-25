// code_report Solution
// https://youtu.be/5ZdRBNJXHjg

// Not very idiomatic, this is just a java solution converted from C++

import java.util.*;
import java.io.*;

public class Main {
     public static void main (String []args) {
        Scanner sc = new Scanner (System.in);
        int t  = sc.nextInt ();
        while (t-- != 0) {
            String temp = sc.next ();
            StringBuffer s = new StringBuffer ();
            s.append (temp);
            HashMap<Integer, ArrayList<Integer>> m = new HashMap<> ();
            for (int i = 0; i < s.length (); ++i) {
                 char e = s.charAt (i);
                 if (Character.isUpperCase (e)) { m.putIfAbsent (0, new ArrayList<Integer> ()); m.get(0).add (i); }
                 if (Character.isLowerCase (e)) { m.putIfAbsent (1, new ArrayList<Integer> ()); m.get(1).add (i); }
                 if (Character.isDigit     (e)) { m.putIfAbsent (2, new ArrayList<Integer> ()); m.get(2).add (i); }
            }
            if (m.size () == 1) {
                if (m.containsKey (0)) { s.setCharAt (1, 'a'); s.setCharAt (2, '1'); }
                if (m.containsKey (1)) { s.setCharAt (1, 'A'); s.setCharAt (2, '1'); }
                if (m.containsKey (2)) { s.setCharAt (1, 'a'); s.setCharAt (2, 'A'); }
            }
            if (m.size () == 2) {
                int i = 0;
                if      (m.containsKey (0) && m.get(0).size () > 1) i = m.get(0).get(0);
                else if (m.containsKey (1) && m.get(1).size () > 1) i = m.get(1).get(0);
                else                                                i = m.get(2).get(0);
                if (!m.containsKey (0)) s.setCharAt (i, 'A');
                if (!m.containsKey (1)) s.setCharAt (i, 'a');
                if (!m.containsKey (2)) s.setCharAt (i, '1');
            }
            System.out.println (s);
        }
     }
}
