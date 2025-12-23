#include <stdio.h>
void main()
{
    int a,b;
    char c;
    printf("enter numbers here: ");
    scanf("%d%d", &a, &b);
    printf("enter the character here like+ - * /");
    scanf(" %c",&c);
    switch(c){
        case '+':
        printf("the addition is %d",a+b);
        break;
        
        case '-':
        printf("the subtraction is %d",a-b);
        break;

        default:
        printf("the division is %d",a/b);
        break;

        case '*':
        printf("the multiplication  is %d",a*b);
        break;
        
        
        
    }
    
}
