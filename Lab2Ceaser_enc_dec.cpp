#define freq 5 
#include <iostream> 
#include <cstring> 
using namespace std;
int main() 
{ 
   char ip[10],c[10]={0},p[10]={0}; 
   int i,l;
   
   cout<<"Enter input:"; 
   cin>>ip; 
   l = strlen(ip); 
   
   for(i=0;i<l;i++) 
     c[i] = ( (ip[i]-97+freq)%26 )+97; 
	 
   cout<<"Cipher Text:"<<c;
   
   for(i=0;i<l;i++) 
     if( (c[i]-97-freq) < 0) 
	   p[i] = c[i]-freq+26; 
	 else 
	   p[i] = ((c[i]-97-freq)%26)+97; 
	 
   cout<<"\nPlain Text:"<<p; 
	 
   return 1;
}

