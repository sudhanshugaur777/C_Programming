#include <stdio.h>

int main() {
    FILE *fp;
    int roll;
    char name[50];
    float marks;
    char choice;

    fp = fopen("student.txt", "w");

    do {
        printf("Enter Roll number : ");
        scanf("%d", &roll);

        printf("Enter Name : ");
        scanf("%s", name);

        printf("Enter Marks : ");
        scanf("%f", &marks);

        fprintf(fp, "%d -> %s -> %f\n", roll, name, marks);

        printf("Do you want to add another data (y/n) : ");
        scanf(" %c", &choice);   // space before %c is IMPORTANT

    } while (choice == 'y' || choice == 'Y');

    fclose(fp);

    printf("Data written successfully...\n");
    printf("Data in the file : \n");

    fp = fopen("student.txt", "r");

    while (fscanf(fp, "%d -> %s -> %f", &roll, name, &marks) != EOF) {
        printf("%d \t %s \t %f\n", roll, name, marks);
    }

    fclose(fp);
    return 0;
}

