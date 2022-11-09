#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[4] = {10,15,3,7}, num = 17;
    for (int i=0; i<sizeof(array);i++){
        for (int j=0; j<sizeof(array);j++){
            if (((array[i] + array[j])==num)&&(array[i]!=0)&&(array[j]!=0)){
                printf("%d+%d\n",array[i],array[j]);
            }
        }
    }
    return 0;
}
