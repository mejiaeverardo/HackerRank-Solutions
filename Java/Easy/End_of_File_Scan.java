import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int lineNo = 1;
        String sentence;// = scan.next();
        while(scan.hasNext()){
            sentence = scan.nextLine();
            System.out.printf("%d %s \n", lineNo, sentence);
            lineNo++;
        }
        
    }
}
