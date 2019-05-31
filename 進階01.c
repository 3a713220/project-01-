#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{
	FILE *pFile;
	char ch;
	pFile=fopen("somebody.txt","r");
    fseek(pFile,2,SEEK_SET);
	ch=fgetc(pFile);
	printf("第1個fgetc()=%c\n",ch);
	fseek(pFile,3,SEEK_CUR);
	ch=fgetc(pFile);
	printf("第2個fgetc()=%c\n",ch);
	fseek(pFile,-4,SEEK_END);
	ch=fgetc(pFile);
	printf("第3個fgetc()=%c\n",ch);
	fclose(pFile);
	system("pause");
	return 0;
}
