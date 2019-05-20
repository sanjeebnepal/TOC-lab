#include<stdio.h>
#include<string.h>
int main()
{
	int is=0,fs=0,cs;
	int tt[4][2]={{1,3},{0,2},{3,1},{2,0}};
	char str[10];
	//read input
	printf("\nEnter the string to process\n");
	//scanf("%s",str);
	gets(str);
	cs=is;
	int i;
	for(i=0;i<strlen(str);i++)
	{
		cs=tt[cs][(int)(str[i]-'0')];
	}
	if(cs==fs)
	{
		printf("\n\t\tACCEPTED");
	}
	else
	printf("\n\t\tREJECTED");
	
	
}
