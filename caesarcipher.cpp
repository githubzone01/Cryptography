#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char message[10],ch,c[10];
	int key;
	int i,len;
	printf("Enter message:");
	gets(message);
	printf("\nEnter key:");
	scanf("%d",&key);
//	len=strlen(message);
//	message[len]='\0';
	for(i=0;i<strlen(message);i++)
	{
		ch=message[i];
		if(ch>='a' && ch <='z')
		{
			ch=ch+key;
			if (ch>'z')
				ch=ch-26;
		}
		else if(ch>='A'&& ch<='Z')
		{
			ch=ch+key;
			if (ch>'z')
				ch=ch-26;
		}
		c[i]=ch;
	}
	c[i]='\0';
	printf("\nCipher text:%s",c);
}
