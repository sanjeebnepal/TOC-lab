#include<stdio.h>
#include<string.h>
int checkchar(char s)
{
    if((s>=48)&&(s<=57))
	return 1;
    else if(s==95)
	return 2;
	else if(((s>=97)&&(s<=122))||((s>=65)&&(s<=90)))
	return 3;
}
int main()
{
	char str[100],new[100];
	printf("Enter the string\n");
	gets(str);
	int i;
	for(i=0;i<strlen(str);i++)
	{
		new[i]=checkchar(str[i]);
	}	
	if(new[0]==1)
	printf("\n\t\tUNVALID IDENTIFIER");
	else 
	printf("\n\t\tIDENTIFIER VALID");
	
}

