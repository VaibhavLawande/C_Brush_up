#include<stdio.h>
typedef enum weeks//enum using inside of typdef 
{sun,mon,wed}DAYS;
int main()
{
	DAYS d;
	d=sun;
	printf("%d\n",d);//output 0
	printf("sizeof=%d\n",sizeof(DAYS));//it will print the size of enum variable 
					   //4 bytes
					   //because it is integer variable
}

