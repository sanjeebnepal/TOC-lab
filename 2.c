/*Write c program to simulate the following DFAs
1) DFA that accepts strings over (sumation sign)={0,1} which which does not contain'010' as substring 11110011101010
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int j=0,i,is=0,fs[3]={0,1,2};
	int tt[4][2]={{1,0},{1,2},{3,0},{3,3}};
	char str[100];
	printf("Enter the string\n");
	scanf("%s",str);
	int cs=is;
	for(i=0;i<strlen(str);i++)
	{
		cs=tt[cs][(int)(str[i]-'0')];
	}
	for(i=0;i<=2;i++)
	{
	if(cs==fs[i])
	j++;
	}
	if(j>0)
	printf("\n\t\t ACCEPTED");
	if(j==0)
	printf("\n\t\tREJECTED");
	
}
