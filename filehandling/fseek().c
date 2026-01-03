#include <stdio.h>
void main() {
	FILE *fp;
	int len;
	char str[100], str1[100];
	fp = fopen("sample-file.txt","w"); //open the file in write mode
	printf("Enter a text : ");
	fgets(str,sizeof(str),stdin);
	fputs( str,fp); // put the string into file 
	fclose( fp); // close the file
	fp = fopen("sample-file.txt","r" ); // open the file in read mode
	printf("The given text : ");
	fgets(str1,sizeof(str1),fp); // write the condition here get the data to str1 
	printf("%s",str1); // display the data in str1
	fclose(fp ); // close the file
	fp = fopen("sample-file.txt", "r");
	fseek(fp,-1,SEEK_END); // move the file postition to 0 using SEEK_END
	len = ftell(fp);
	printf("Total size of sample-file.txt = %d bytes\n", len);
	rewind(fp);
	len = ftell(fp);
	printf("Now the file pointer is at position : %d\n", len);
	fclose(fp);
}