#include <stdio.h>

int main(){
	char s[1000000];
	scanf("%s", &s);  
	int p=0,q=0;            		
	for(int i=0;s[i]!='\0';i++)
	{
       p+=s[i]=='('? 1:-1;
	   if(p==-1){
		   q=q+1;
		   p=p+1;
	   }
	}
	printf("%d",p+q);
}
