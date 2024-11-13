#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    char l[20];
    char str[500];

    fp = fopen("xyz.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 4;
    }

    fgets(str,450,fp);//to read limited char
    printf("%s\n",str);
    // while(!feof(fp))//reads character by char till it reaches end of file
    // {
    //     ch=fgetc(fp);
    //     printf("%c" ,ch);
    // }
    // fclose(fp);

    return 0;
}
