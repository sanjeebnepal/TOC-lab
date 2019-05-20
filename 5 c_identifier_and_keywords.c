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
int check_keyword(char str[100])
{
	if(strcmp(str,"auto")==0)return 0;
    else if(strcmp(str,"while")==0)return 0;
    else if(strcmp(str,"volatile")==0)return 0;
    else if(strcmp(str,"void")==0)return 0;
    else if(strcmp(str,"unsigned")==0)return 0;
    else if(strcmp(str,"union")==0)return 0;
    else if(strcmp(str,"typedef")==0)return 0;
    else if(strcmp(str,"switch")==0)return 0;
    else if(strcmp(str,"struct")==0)return 0;
    else if(strcmp(str,"static")==0)return 0;
    else if(strcmp(str,"sizeof")==0)return 0;
    else if(strcmp(str,"signed")==0)return 0;
    else if(strcmp(str,"short")==0)return 0;
    else if(strcmp(str,"return")==0)return 0;
    else if(strcmp(str,"register")==0)return 0;
    else if(strcmp(str,"long")==0)return 0;
    else if(strcmp(str,"int")==0)return 0;
    else if(strcmp(str,"if")==0)return 0;
    else if(strcmp(str,"goto")==0)return 0;
    else if(strcmp(str,"for")==0)return 0;
    else if(strcmp(str,"float")==0)return 0;
    else if(strcmp(str,"extern")==0)return 0;
    else if(strcmp(str,"enum")==0)return 0;
    else if(strcmp(str,"else")==0)return 0;
    else if(strcmp(str,"do")==0)return 0;
    else if(strcmp(str,"default")==0)return 0;
    else if(strcmp(str,"continue")==0)return 0;
    else if(strcmp(str,"double")==0)return 0;
    else if(strcmp(str,"const")==0)return 0;
    else if(strcmp(str,"char")==0)return 0;
    else if(strcmp(str,"case")==0)return 0;
    else if(strcmp(str,"break")==0)return 0;
    else return 1;
}
int main()
{
	char str[100],new[100];
	printf("Enter the string\n");
	gets(str);
	 if(check_keyword(str)==0)
    printf("\n\t\tKEYWORD IDENTIFIED ;)");
    else
    {
    int i;
	for(i=0;i<strlen(str);i++)
	{
		new[i]=checkchar(str[i]);
	}	
	if(new[0]==1)
	printf("\n\t\tUNVALID IDENTIFIER!!!!!!!!");
	else 
	printf("\n\t\tIDENTIFIER IDENTIFIED ;)");
	}
}
