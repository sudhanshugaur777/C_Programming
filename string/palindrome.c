#include <stdio.h>
#include<string.h>
int main()
{
    char   str[20];
    char rev[20];
    printf("String: ");
    scanf("%s",str);
    int l=strlen(str);
    int i=l-1;
        for (int j = 0; j <= l-1; j++)
        {
            rev[j]=str[i];
            i--;
        }
        rev[l]='\0';
    int n=strcmp(str,rev);
    if(n==0) printf("Palindrome\n");
    else printf("Not a palindrome\n");
    return 0;
}
