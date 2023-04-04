#include<stdio.h>
int main()
{
int x, *p;
p = x;
*p = 5;
printf("variable x = %d\n", x);
printf("variable p = %p\n", p);
}
