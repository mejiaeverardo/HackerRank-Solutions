#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int max = (2 * n) - 1;
    int middle = (2 * n) / 2;
    for(int row = 1; row <= max; row++){
        for(int column = 1; column <= max; column++){
            int top = row - 1;
            int bottom = max - row;
            int left = column - 1;
            int right = max - column;
            
            int minValue = top;
            if(bottom < minValue){
                minValue = bottom;
            }
            if(left < minValue){
                minValue = left;
            }
            if(right < minValue){
                minValue = right;
            }
            
            int value = n - minValue;
            printf("%d ", value);
        }
        printf("\n");
    }
    return 0;
}
