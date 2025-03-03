#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    int *arrRev;
    //arrRev = (int*) malloc(num * sizeof(int));
    //arrRev = arr;
    //stays as part of other method
    int replacement;
    for(int i = 1; i <= num; i ++){
        int pos = num - i;
        /*arrRev[i - 1] = arr[pos];
        replacement = arr[pos];
        arr[i - 1] = arrRev[pos];*/
        
        //other method??
        if(num % 2 == 0 && i <= num / 2){
            replacement = arr[i - 1];
            arr[i - 1] = arr[pos];
            arr[pos] = replacement;
        } else {
            if(i == (num + 1) / 2){
                break;
            } else if (i < (num + 1) / 2) {
                replacement = arr[i - 1];
                arr[i - 1] = arr[pos];
                arr[pos] = replacement;
            }
        }
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
