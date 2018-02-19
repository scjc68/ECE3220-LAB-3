#include <stdio.h>
 
int main()
{
    char* fileName;
    printf("Specify file name you would like to print to: \n");
    scanf("%s", fileName);
 
FILE* file1;
    file1 = fopen(fileName, "ab+");
	
	if (!file1) {
		printf("unable to open file");
		file1 = fopen(fileName, "wb");
		//return 0;
	}
 
    char c;
    while ((c=getchar()) != EOF)
    {
        fprintf(file1, "%c" ,c);
    }
 
    fclose(file1);
 
    printf("CTRL+d is a correct ending");
 
    return 0;
}
