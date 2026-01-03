#include <stdio.h>
void main() {
	FILE *fp;
	char ch;
	fp = fopen("FileExample2.txt","w"); // Complete the statement
	printf("Enter the text with @ at end : ");
	while((ch=getchar())!='@') { // Fill the condition part
		fputc(ch,fp); // Complete the statement
	}
	fputc('@',fp);
	
	fclose(fp); // Complete the statement
	fp = fopen("FileExample2.txt","r"); // Complete the statement
	printf("Given message is : ");
	while((ch=fgetc(fp))!='@') { // Fill the condition part
		putchar(ch); // Complete the statement
	}
	printf("\n");
	fclose(fp); // Complete the statement
	// FILE *fp;
	// int ch;
	// fp = fopen("FileExample2.txt","w"); // Complete the statement
	// printf("Enter the text with @ at end : ");
	// while((ch=getchar())!='@') { // Fill the condition part
	// 	fputc(ch,fp); // Complete the statement
	// }
	
	// fclose(fp); // Complete the statement
	// fp = fopen("FileExample2.txt","r"); // Complete the statement
	// printf("Given message is : ");
	// while((ch=fgetc(fp))!=EOF) { // Fill the condition part
	// 	putchar(ch); // Complete the statement
	// }
	// printf("\n");
	// fclose(fp); // Complete the statement
}