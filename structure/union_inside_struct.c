#include<stdio.h>
struct x{   //structure declertion
   int a;
   float b;
};
union z{      //union decleartion
   struct x s;
};
main ( ){
   union z u;
   u.s.a = 10;
   u.s.b = 30.5;
   printf("a=%d", u.s.a);//output a=10
   printf("b=%f", u.s.b);//output b=30.5
}
