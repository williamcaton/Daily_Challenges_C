#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[]={"abcba"},a[100]={"************"};
    int len=0,maxlen=0,point=0,endloop=0,j=0,k=2;
    for (int i=0;i<strlen(s);i++){
        j=0;
        endloop =0;
        while ((j<k)&&(endloop==0)){
            if (a[j]==s[i]){
                endloop = 1;
                len++;
                printf("1%s%s\n",s,a);
            }
            else{
            if (a[j]=='*'){
                a[j] = s[i];
                endloop = 1;
                len++;
                printf("2%s%s\n",s,a);
            }
            }
                if ((j==k-1)&&(endloop==0)){
                    memset(a,'*',strlen(a));
                    len=2;
                    a[0]=s[i-1];
                    a[1]=s[i];
                    printf("3%s%s\n",s,a);
                }
            j++;
        }
        if (len>maxlen){
            maxlen=len;
            point = i;
        }
    }
    printf("%d",maxlen);
    for (int i=0;i<maxlen;i++){
        printf("%c",s[point-i]);
    }
    return 0;
}
