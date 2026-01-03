#include <stdio.h>
int main()
{
    int arr[20];
    printf("Enter element upto zero : ");
    int i=0;
    scanf("%d",&arr[i]);
    while(arr[i]!=0){
        i++;
        scanf("%d",&arr[i]);
    }
    printf("your output is :");
    for(int j=0;j<i;j++){
        printf("%d",arr[j]);
    }
    return 0;
}
