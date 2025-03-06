#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
    if (n == 1)
        return a;
    if (n == 2)
        return b;
    if (n == 3)
        return c;
    
    return find_nth_term(n - 1, a, b, c) + find_nth_term(n - 2, a, b, c) + find_nth_term(n - 3, a, b, c);
  /*int total;
  int lastValue;
  int sum;
  int *results = malloc(n * sizeof(int));
  results[0] = a;
  results[1] = b;
  results[2] = c;*/
  
  /*for(int i = 1; i <= n; i ++){    
    //lastValue = results[i - 2];
    if(i > 3 && i < n){
        sum = results[i - 4] + results[i - 3] + results[i - 2];
        results[i - 1] = sum;
        //printf("%d \n", sum);
    } else if(i == n) {
        total = results[i - 4] + results[i - 3] + results[i - 2];//results[i - 2];
        //printf("final %d \n", total);
    }
  }*/
  
  /*for(int i = 3; i <= n; i++){
    results[i - 1] = results[i - 4] + results[i - 3] + results[i - 2];
  }
  
  total = results[n - 1];
  
  return total;*/
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}