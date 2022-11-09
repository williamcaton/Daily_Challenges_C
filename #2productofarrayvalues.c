#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5] = {1,2,3,4,5},product[5]={1,1,1,1,1};
    for (int i=0;i<(sizeof(array)/sizeof(array[0]));i++){
        for (int j=0;j<(sizeof(array)/sizeof(array[0]));j++){
            if (i!=j){
                product[i]=product[i]*array[j];
            }
        }
        printf("%d\n",product[i]);
    }
    return 0;
}
