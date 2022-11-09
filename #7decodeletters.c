#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[] = {1,1,1,1,1,5,9},i,count=0;
    int solve(int num[],int len){
        if (((num[len]+num[len-1]*10<27))&&len>=1){
            solve(num,len-2);
        }
        if ((num[len]>=1)&&len>=0){
            solve(num,len-1);
        }
        if (len == -1){
            count++;
        }
    }
    solve(num,(sizeof(num)/sizeof(num[0]))-1);
    printf("%d",count);
    /*for (i=0;i<(sizeof(num)/sizeof(num[0]));i++){
        printf("%c",num[i]+96);
    }
    printf("\n");
    for (i=0;i<(sizeof(num)/sizeof(num[0]))-1;i+=2){
        printf("%c",(num[i]*10+num[i+1])+96);
    }
    printf("%c\n",num[i]+96);
    i=0;
    printf("%c",num[i]+96);
    for (i=1;i<(sizeof(num)/sizeof(num[0]))-1;i+=2){
        printf("%c",(num[i]*10+num[i+1])+96);
    }
    */
    return 0;
}
