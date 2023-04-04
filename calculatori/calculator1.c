#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void add (char op);
void sub (char op);
void multi (char op);
void division (char op);
void power (char op);
void sqrtFunction (char op);

void add(char op)
{
    double first,second;
    double res;
    if(op=='+')
    {
        printf("put two operands :  ");
        scanf("%lf%lf",&first,&second);
        res=first+second;
        printf("%.1f %c %.1f = %.1f",first,op,second,res);
    }
}
void sub(char op)
{
    double first,second;
    double res;
    if (op=='-')
    {
        printf("put two operands :  ");
        scanf("%lf%lf",&first,&second);
        res=first-second;
        printf("%.1f %c %.1f = %.1f",first,op,second,res);
    }
}
void multi(char op)
{
    double first,second;
    double res;
    if(op=='*')
    {
        printf("put two operands :  ");
        scanf("%lf%lf",&first,&second);
        res=first*second;
        printf("%.1f %c %.1f = %.1f",first,op,second,res);
    }
}
void division(char op)
{
    double first,second;
    double res;
    if(op=='/')
    {
        printf("put two operands :  ");
        scanf("%lf%lf",&first,&second);
        res=(double)first/second;
        printf("%.1f %c %.1f = %.1f",first,op,second,res);
    }
}
void power(char op)
{
    double first,second;
    double res;
    if(op=='^')
    {
        printf("put base and power:  ");
        scanf("%lf%lf",&first,&second);
        res=pow(first,second);
        printf("%.1f %c %.1f = %.1f",first,op,second,res);
    }
}

void sqrtFunction(char op )
{
    double first;
    double res;
    if(op=='s')
    {
        printf("put one operand :  ");
        scanf("%lf",&first);
        res=sqrt(first);
        printf("sqrt(%.1f) = %.1f",first,res);
    }

}
int main()
{
    char op;
    printf("put operator (+ - * / s ^):  ");
    scanf("%c",&op);
    add(op );
    sub( op );
    multi( op);
    division( op );
    power( op);
    sqrtFunction(op);


    return 0;
}
