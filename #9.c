#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int largestsum(int array2[],int length){
        int sum=0,maxsum[length];
        maxsum[0]=array2[0];
        maxsum[1]=fmax(array2[0],array2[1]);
        for (int i=2; i<length;i++){
            maxsum[i]=fmax(maxsum[i-1],maxsum[i-2]+array2[i]);
            printf("%d\n",maxsum[i]);
        }
        return maxsum[length-1];
    }

int main()
{
    int array[] = {5,1,1,5};
    printf("%d",largestsum(array,(sizeof(array)/sizeof(array[0]))));
    return 0;
}
