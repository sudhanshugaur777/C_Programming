#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the senetences line by line upto ;sagar' : ");
    int characters=0,words=0,lines=0;
    while(1){
        scanf(" %[^\n]s",str);
        if(strcmp(str,"sagar")==0){
            break;
        }
        lines++;
        for (int i = 0; str[i]; i++)
        {
            characters++;
            if(str[i]==' '){
                words++;
            }
        }
        
    }
    printf("Words: %d,Lines : %d ,Characters %d",words+lines,lines,characters);
    return 0;
}
