#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  //int b = 2;
  int maxAnd = 0, maxOr = 0, maxXor = 0;
  //int b;
  for(int i = 1; i <= k; i++){
    /*for(int b = 2; b <= n; b++){
        
    }*/
    int b = i + 1;
    while(b <= n){
        int and = i & b;
        int or = i | b;
        int xor = i ^ b;
        
        /*printf("%d AND %d : %d \n", i, b, and);
        printf("%d OR %d : %d \n", i, b, or);
        printf("%d XOR %d : %d \n", i, b, xor);*/
        
        if(and > maxAnd && and < k){
            maxAnd = and;
        }
        
        if(or > maxOr && or < k){
            maxOr = or;
        }
        
        if(xor > maxXor && xor < k){
            maxXor = xor;
        }
        
        if(b == n){
            break;
        } else {
            b++;
        }
        //b++;
    }
  }
  printf("%d \n", maxAnd);
  printf("%d \n", maxOr);
  printf("%d \n", maxXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
