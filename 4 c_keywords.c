#include<stdio.h>
#include<string.h>
int check(char str[100])
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
	char str[100];
	printf("Enter the string\n");
	gets(str);
    puts(str);
   
    if(check(str)==0)
    printf("\n\t\tKEYWORD IDENTIFIED ;)");
    else
    printf("\n\t\tINVALID KEYWORD");
}
