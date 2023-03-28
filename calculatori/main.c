#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    double first,second;
    double res;
    printf("put operator (+ - * /):  ");
    scanf("%c",&op);
    printf("put two operands :  ");
    scanf("%lf%lf",&first,&second);
    if(op=='+')
        res=first+second;
    else if (op=='-')
            res=first-second;
    else if(op=='*')
        res=first*second;
    else if(op=='/')
        res=(double)first/second;
    printf("%.1f %c %.1f = %.1f",first,op,second,res);
    return 0;
}
