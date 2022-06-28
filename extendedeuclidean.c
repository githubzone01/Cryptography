#include<stdio.h>
#include<conio.h>

void main(){
	int a,b,q,r1,r2,r,s1,s2,s,t1,t2,t;
	a=26;
	b=11;

	s1=1;
	s2=0;
	t1=0;
	t2=1;
	while(b>0){
		r=a%b;
		q=a/b;
		s=(s1-q*s2);
		t=(t1-q*t2);
		
		
		
		a=b;
		b=r;
		s1=s2;
		s2=s;
		t1=t2;
		t2=t;
		
		
	}
	printf("%d",a);
	printf("\n%d %d",s1,t1);
}
