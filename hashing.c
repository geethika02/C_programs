#include <stdio.h>
#include<string.h>

int main(){
	char s[1000];
	int i,max=0,n=0,len;
	int H[256]={0};
	gets(s);
	 len=strlen(s);
	for(i=0;i<len;i++)
	{
		H[s[i]]+=1;
	}
     for(i=0;i<256;i++)
	 {
		 if(H[i]>max)
		 {
			 max=H[i];
		 }
	 }
	 for(i=0;i<256;i++)
	 {
		 if(max==H[i])
		 {
			 n=i;
			 break;
		 }
	 }
	 char c=(char)n;
	 printf("%c %d",c,max);
	 return 0;
}
