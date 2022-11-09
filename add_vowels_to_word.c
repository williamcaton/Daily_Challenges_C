#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //char string[100000];
    FILE    *textfile;
    char    line[1000],stringy[1000],original[1000];
    int i,j;

    textfile = fopen("all words.txt", "r");

    printf("enter a string with vowels removed:\n");
    scanf("%s",&stringy);
    //printf("%d\n",strlen(stringy));

    while(fgets(line, 1000, textfile)){
        strcpy(original,line);
        for (i=0;i<strlen(line);i++){
            if ((line[i]==97)||(line[i]==101)||(line[i]==105)||(line[i]==111)||(line[i]==117)){
                for (j=i;j<strlen(line);j++){
                    line[j]=line[j+1];
                }
                i=i-1;
            }
        }
        line[strcspn(line, "\n")] = 0;
        if (strcmp(line, stringy) == 0){
            printf(original);
            printf("\n");
        }

        //printf("%d",strlen(line));
    }

    fclose(textfile);
    //printf("done");

    return 0;
}
