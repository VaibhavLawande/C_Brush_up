#include<stdio.h>
#define SET(NUM,POS) (NUM|=(1<<POS))   //macro decleartion.It will work only Preprocessor stage
int main()
{
int num,pos,i;
printf("Enter the number and position\n");
scanf("%d %d",&num,&pos);
for(i=31;i>=0;i--)
	printf("%d",num>>i&1);// Binary Value of default number
SET(num,pos);//using macro set a bit
printf("\nAfter set=%d\n",num);//number print the after the setting
for(i=31;i>=0;i--)
        printf("%d",num>>i&1);// Binary Value updated number
        printf("\n");


}
