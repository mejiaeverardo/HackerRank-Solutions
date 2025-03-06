#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	  int num1, num2;
    float fl1, fl2;
    
    scanf("%d %d", &num1, &num2);
    getchar();
    scanf("%f %f", &fl1, &fl2);
    
    int s1, d1;
    float s2, d2;
    s1 = num1 + num2;
    d1 = num1 - num2;
    s2 = fl1 + fl2;
    d2 = fl1 - fl2;
    
    printf("%d %d\n", s1, d1);
    printf("%.1f %.1f\n", s2, d2);
    
    return 0;
}