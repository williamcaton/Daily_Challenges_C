#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X[] = {1,3,5},N;
    printf("How many steps are there?");
    scanf("%d",&N);
    int countsteps(int X[],int N){
        int count=0;
        if (N == 0){
            return 1;
            printf("%d\n",N);
        }
        if (N<0){
            return 0;
        }
        if (N>0){
            for (int i=0;i<(sizeof(X)/sizeof(X[0]));i++){
                count = count + countsteps(X,(N-X[i]));
            }
        return count;
        }

    }
    printf("There are %d ways to climb the stairs",countsteps(X,N));
    return 0;
}
