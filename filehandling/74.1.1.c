#include <stdio.h>

int main() {
    FILE *fp;
    char first[20];
	char last[20];
	int n;

    fp = fopen("student.txt", "w");
	printf("no of employees: ");
	scanf("%d",&n);
    int i=1;
    do {
        printf("login: ");
        scanf("%s",first );

        printf("signoff: ");
        scanf("%s", last);

       

        fprintf(fp,"%s %s\n",first,last);
		i++;
    } while (i<n+1);

    fclose(fp);
    printf("Employees timings:\n");
    fp = fopen("student.txt", "r");
    int j=1;
    while (fscanf(fp,"%s %s",first,last) != EOF) {
        printf("(%d)login: %s\n" "signoff: %s\n" ,j,first,last);
		j++;
    }

    fclose(fp);
    return 0;
}