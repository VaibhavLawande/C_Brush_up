#include<stdio.h>
struct date               //structure 1 decleartion
	{
		int i;
		char ch;
	};
	struct st      // struct. 2 decleartion
	{
		int a;
		char s;
		struct date s1;//structure 1 Variable inside structure 2
	};
int main()
{
	struct st s2;//struct 2 object
	s2.s1.i=10;//accessing struct 1 variable 
	s2.s1.ch='A';
	s2.a=20;//accessing struct 2 variable
	s2.s='B';
	printf("%d %c %d %c\n",s2.s1.i,s2.s1.ch,s2.a,s2.s);//output 10 A 20 B
}

