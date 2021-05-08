#include"stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[])
{
    int charNumber=0;
	int wordNumber=0;
	FILE* fp;
	char* file;
	char ch;
	int word=0;

	file = argv[2];

	if(strcmp(argv[1],"-c")==0)
	{
	    if((fp=fopen(file,"r"))==NULL)
		{
		    printf("Fail to open the file!\n");
			exit(-1);
		}
		while((ch=fgetc(fp))!=EOF)
		{
		    charNumber++;
		}
		printf("字符数为：%d",charNumber);
	}
	else if(strcmp(argv[1],"-w")==0)
	{
	    if((fp=fopen(file,"r"))==NULL)
		{
		    printf("Fail to open the file!\n");
			exit(-1);
		}
		while((ch=fgetc(fp))!=EOF)
		{
			if(ch==' '||ch==',')
			{
			    word=0;
			}
			else if(word==0)
			{
			    word=1;
				wordNumber++;
			}
		}
		printf("单词数为：%d",wordNumber);
	}
	fclose(fp);
	return 0;
}