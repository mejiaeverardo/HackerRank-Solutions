#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char s[100];
    char sen[100];
    
    scanf("%c", &ch);
    scanf("%s", s);
    getchar();
    scanf("%[^\n]%*c", sen);
    
    printf("%c", ch);
    printf("\n");
    printf("%s", s);
    printf("\n");
    printf("%s", sen);
    
    return 0;
}