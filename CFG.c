#include<stdio.h>
#include<string.h>
void main()
{
    char string[50];
    int flag,count=0,isTrue=0;
    printf("The grammar is : S->aS,S->Sb,S->ab\n");
    printf("Enter the string to be checked:\n");
    gets(string);
    if(string[0]=='a')
    {
        flag=0;
        for(count=1;string[count-1]!='\0';count++)
        {
            if(flag==0&&string[count]=='a')
            {
                isTrue=1;
                continue;
            }
            else if(flag==1&&string[count]=='a')
            {
                isTrue=0;
                break;
            }
            else if(flag==1&&string[count]=='b')
            {
                isTrue=1;
            }
            else if(flag==0&&string[count]=='b')
            {
                flag=1;
                isTrue=1;
            }
        }
        if(isTrue)
        {
            printf("String accepted.");
        }
        else
        {
            printf("String not accepted");
        }
    }
}