#include<stdio.h>
int main()
{
    char str[100];
    int words = 0,newline=1,characters=0,i;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            words++;
        }
        else if(str[i]=='\n')
        {
            newline++;
        }
        else if(str[i]!=' '&&str[i]!='\n')
        {
            characters++;
        }
    }
    printf("Total no. of words: %d\n",words);
    printf("Total no. of lines: %d\n",newline);
    printf("Total no. of characters: %d\n",characters);
    return 0;
}