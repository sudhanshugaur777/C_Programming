#include<stdio.h>
void main() {
	FILE *fp;
	int number;
	fp = fopen("sample-numbers1.txt","w"); // Complete the statement
	printf("Enter numbers up to 0 : ");
	scanf("%d",&number); // Complete the statement
	while (number != 0) {
		putw(number,fp); // Complete the statement
		scanf("%d",&number); // Complete the statement
	}
	// putw(); // Complete the statement
	fclose(fp); // Complete the statement
	fp = fopen("sample-numbers1.txt","r"); // Complete the statement
	printf("The given numbers are : ");
	while ((number = getw(fp)) != EOF) {
		printf("%d ",number); // Complete the statement
	}
	fclose(fp); // Complete the statement
}