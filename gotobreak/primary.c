#include<stdio.h>
void main(){
    int i,a;
    printf("Enter the number here:");
    scanf("%d",&i);
    if (a==1 || a==0){
        printf("the given no. is not a primary");
    }
    else if (a>=2){
        for(a=2;a<i;++a){
            if (i%a==0){
            printf("the given no. is not a primary");
            break;
            }
        }
        printf("the given no. is a primary");
    }
}   