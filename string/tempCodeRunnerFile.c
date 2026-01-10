#include <stdio.h>
int main()
{
    int n;
    printf("Enter how many string want to enter : ");
    scanf("%d",&n);
    char str[n][15];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",str[i]);
    }
    printf("The given string is :");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n",str[i]);
    }
    
    

    return 0;
}
