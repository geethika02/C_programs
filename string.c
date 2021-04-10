#include <stdio.h>

int main(){
	int i,j;
	char s[1000000];
	scanf("%s",&s);
	for( i=0;s[i]!='.';i++)
	{
		if(s[0]=='0')
		{
			for(j=0;s[j]!='\0';j++)
			{
				s[j]=s[j+1];
			}
			s[j]='\0';
			i--;
		}
	}
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i-1]=='.' && s[i]=='0')
		{
			for(j=i;s[j]!='\0';j++)
			{
				s[j]=s[j+1];
			}
			s[j]='\0';
			i--;
		}
	}
	printf("%s",s);
}


