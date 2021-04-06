#include <iostream>

using namespace std;

int main() 
{
    long long int t,i,c,k,d;
  
  cin>>t;
    
while(t--)
    {
    
    c=0;d=0;
      
 string s;
     
  cin>>s;
    
      for(i=0;s[i]!='\0';i++)
        
{
          if(s[i]=='1')
         
 c++;
       
   if(s[i]=='1' && s[i+1]=='1')
         
 d++;
         }
  
   cout<<c-d<<endl;
  
  }
	

}
