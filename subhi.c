#include<stdio.h>
int main()
{
int quotient,remainder;
int dividend,divisor;
scanf("%d%d",&divisor,&dividend);
quotient=dividend/divisor;
remainder=dividend%divisor;
printf("when %d is divided by %dgives quotient %dand remainder %d",dividend,divisor,quotient,remainder);
return 0;
}
