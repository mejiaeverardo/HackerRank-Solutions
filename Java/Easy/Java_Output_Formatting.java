import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                String s1=sc.next();
                int x=sc.nextInt();
                //Complete this line
                if(s1.length() < 15){
                    
                }
                System.out.printf("%-15s", s1);
                System.out.printf("%03d", x);
                System.out.printf("\n");
            }
            System.out.println("================================");
    }
}