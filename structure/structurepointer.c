#include <stdio.h>
#include<string.h>
struct student{
    char name[20];
    int marks;
}alpha;
int main()
{
    printf("Enter marks of alpha:");
    scanf("%d",&alpha.marks);
    printf("Enter the name of student :");
    // scanf("%s",alpha.name);// space k baad k nhi likhega 
    getchar();//ye buffer mee padhe '\n' ko khaa jata hai
    fgets(alpha.name,sizeof(alpha.name),stdin);
    int i=0;
    while(alpha.name[i]!='\0'){
        if(alpha.name[i]=='\n'){
            alpha.name[i]='\0';
            break;
        }
        i++;
    }
    // scanf(" %[^\n]",alpha.name);//this way is also correct
    printf("\n");
    printf("The marks of alpha is : %d\n",alpha.marks);
    printf("The name of alpha is : %s\n",alpha.name);
    // int a=10;
    // printf("%8d",a);

    return 0;
}
