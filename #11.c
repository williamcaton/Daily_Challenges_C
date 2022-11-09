#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* input[100];
    char* dictionary[] = {"dog", "deer", "deal"};
    int check=0;
    scanf("%s",&input);
    for (int i=0;i<(sizeof(dictionary)/sizeof(dictionary[0]));i++){
        check=0;
            if(strncmp(dictionary[i], input, strlen(input)) == 0){
                printf("%s\n",dictionary[i]);
            }
    }

    return 0;
}
