#include<stdio.h>
struct st
{
	int i;
        char ch;	
};
int main()
{
	struct st s1,s2;//struture varible
	s1.i=10;
	s1.ch='A';
	s2=s1;//assign s1 varible to S2 varible
	printf("%d %c\n",s2.i,s2.ch);//output=10 A
}
