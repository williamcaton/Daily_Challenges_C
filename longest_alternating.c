#include <stdio.h>
#include <stdlib.h>

char longest_substring(char *string,int length){
    char longest[1000] = {""}, current[1000] = {""};
    for (int i=1;i<length;i++){
        printf("%s",current);
        strcat(current,string[i]);
        printf("%s\n",string);
        if ((string[i]%2)!=(string[i]%2)){
            strcat(current,string[i]);
            }
        else{
            if ((sizeof(current)/sizeof(current[0]))>(sizeof(longest)/sizeof(longest[0]))){
                strcpy(longest,current);
            }
        strcpy(current,string[i]);
        printf("%s\n",string);
        }
    }
    return longest;
}

int main()
{
    char string[] = {"225424272163254474441338664823"};
    printf("%s",longest_substring(string, (sizeof(string)/sizeof(string[0]))));
    return 0;
}
