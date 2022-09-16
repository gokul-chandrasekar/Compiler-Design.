#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char icode[10][30],srt[20],opr[10];
	int i=0;
	printf("\n Enter the set of intermediate code(terminated by exit):\n");
	do
	{
		scanf("%s",icode[i]);
	}
	while(stremp(icode[++],"exit")!=0);
	printf("\n target code generation");
	printf("\n**************");
	i=0;
	do
	{
		strepy(str,icode[i]);
		switch(str[3])
		{
			case '+';
			strepy(opr,"ADD");
			break;
			case '-';
			strepy(opr,"SUB");
			break;
			case '*';
			strepy(opr,"MUL");
			break;
			case '/';
			strepy(opr,"DIV");
			break;
		}
		printf("\n\tMov%c,R%d",str[2],i);
		printf("\n\t%s%c,R%d",opr,str[4],i);
		printf("\n\tMov R%d,%c",i,str[0]);
	}
	while(stremp(icode[++i,"exit"])!=0);
	getch ();

}
