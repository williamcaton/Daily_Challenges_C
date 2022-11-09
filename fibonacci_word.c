#include <stdio.h>
#include <stdlib.h>

int main()
{
    void fiboword(int n){
        char a[1000][1000],b[1000];
        strcpy(a[0], "b");
        strcpy(a[1], "a");
        for (int i=2; i<=n; i++){
            strcpy(b,a[i-1]);
            strcat(b,a[i-2]);
            strcpy(a[i], b);
            printf("%s\n",a[i]);
        }
    }
    fiboword(7);
    return 0;
}
