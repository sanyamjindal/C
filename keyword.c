#include<stdio.h>
#include<string.h>
int main()
{
    char keywords[13][10] = {
        "auto","double","int","struct","break",
        "else","long","switch","case","enum",
        "register","typedef","char"};
    char string[10];
    int flag=0,i;
    printf("Enter any string: ");
    scanf("%s",string);
    for(i=0;i<13;i++)
    {
        if(strcmp(string,keywords[i])==0)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("%s is a keyword",string);
    }
    else
    {
        printf("%s is not a keyword",string);
    }
    return 0;
}