#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    //scanf("%[^\n]%*c", arr); 
    gets(arr);
    char str[100];
    int j=0,k=0;
    int ln=strlen(arr);
    char ans[100];
    for(int i=ln-1;i>=0;i--)
    {
        if(arr[i]!=' ')
        {
            ans[k++]=arr[i];
        }
        else ans[k++]=' ';
     }
     ans[k]='\0';
     int m=0;
    for(int i=0;ans[i]!='\0';i++)
    {
        if(ans[i]!=' ')
        {
            str[m++]=ans[i];
        }
        else
        {    
            for(int h=m-1;h>=0;h--)
            {
                printf("%c",str[h]);
            }
            printf(" ");
            m=0;
        }
    } 
    str[m]='\0';
    for(int h=m-1;h>=0;h--)
    {
        printf("%c",str[h]);
    }
  return 0;
}