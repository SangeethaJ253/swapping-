# swapping-
/*swapping numbers without using temporary variable*/

#include<stdio.h>
int main()
{
 int a=5;
 int b=8;
 a=a+b;// a becomes 13//
 b=a-b;//b becomes 5//
 a=a-b;//a becomes 8//
 printf("after swapping: a=%d, b=%d", a,b);

 return 0;
}

