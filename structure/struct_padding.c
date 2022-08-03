#include<stdio.h>
// # pragma pack(1) //in  structure padding remove the holes and assign actual size 
	struct st
	{
	int i;
	char ch;
	float f1;
	};
		int main()
		{
	          struct st s1;//structure variable
		  printf("sizeof struct=%ld\n",sizeof(s1));//print the hole struture size 12 byte
		}                                          //if you use pragma pack 1 size is 9 byte
