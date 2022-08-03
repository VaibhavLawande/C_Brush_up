#include<stdio.h>
struct st
{
	int num;
	char ch;
	float f1;
	//static int j;// static varible showing the error in the decleartion
};
int main()
{
	struct st s1;
	s1.num=10;
	s1.ch='A';
	s1.f1=22.7;
	printf("%d %c %f\n",s1.num,s1.ch,s1.f1);//output 10 A 22.7
	printf("sizeof=%ld\n",sizeof(s1));//it will print the sizeof structure 12 byte
}
