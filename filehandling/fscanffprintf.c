#include <stdio.h>
int main()
{
    FILE *ptr=NULL;
    ptr=fopen("delta.txt","a");
    char str[30];
    scanf("%s",str);

    // fscanf(ptr,"%s",str);
    // printf("The string is: %s\n",str);
    fprintf(ptr,"%s",str);


    fclose(ptr);
    
    return 0;
}
