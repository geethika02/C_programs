#include <stdio.h>
#include<string.h>
int main(){
	int n,flag=0;
char s[10000];
	scanf("%d", &n);  
	while(n--){
		flag=0;
scanf("%s", &s);
for(int i=0;s[i]!='\0';i++)
{
	if(s[i]=='1')
	{
		flag=1;
		break;
	}
	
}
if(flag==1)
{
	printf("Yes\n");
}
else
printf("No\n");
	}
}            		


