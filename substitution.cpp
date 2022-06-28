#include<iostream> 
#include<conio.h> 
#include<string.h> 
#include<stdlib.h>
using namespace std; 
char p[100], c[100],k[100]; 
int i,j,index; 
void upcipher();
void lowcipher();
int check_unique(char k[],int i) 
{ 
 for(j=0;j<i;j++) 
 { 
if(k[j]==k[i]) 
 { 
 return (1); 
} 
else 
{ 
 return(0); 
} 
 } 
 } 
void upcipher() 
{ 
 int u; 
 cout<<"\n Plaintext: "; 
 cin>>p; 
 cout<<"\n Enter key: "<<endl; 
 for(i=0; i<26; i++) 
 { 
 loop: 
 cout<<" "<<char(i+65)<<"--->"; 
 cin>>k[i]; 
 u=check_unique(k,i); 
 if(u==1) 
 { 
 cout<<"\n Enter unique key"; 
 goto loop; 
 } 
 } 
 for(i=0;i<strlen(p);i++) 
 { 
 index=p[i]-65; 
 c[i]=k[index]; 
 } 
 cout<<"\n Ciphertext: "<<c; 
} 
void lowcipher() 
{ 
 int u; 
 cout<<"\n Enter plaintext: "; 
 cin>>p; 
 cout<<"\n Enter key: "<<endl; 
 for(i=0; i<26; i++) 
 { 
 loop: 
 cout<<" "<<char(i+97)<<"--->"; 
 cin>>k[i]; 
 u=check_unique(k,i); 
 if(u==1) 
 { 
 cout<<"\n Enter unique key"; 
 goto loop; 
 } 
 } 
 for(i=0;i<strlen(p);i++) 
 { 
 index=p[i]-97; 
 c[i]=k[index]; 
 } 
 cout<<"\n Ciphertext: "<<c; 
} 
int main() 
{ 
 int ch; 
 cout<<"\n 1. Uppercase letters \n 2. Lowercase letters"; 
 cout<<"\n Enter your choice: "; 
 cin>>ch; 
 if(ch==1) 
 upcipher(); 
 else if (ch==2) 
 lowcipher(); 
else 
 cout<<"\n Invalid choice"; getch(); 
}
