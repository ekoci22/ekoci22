#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void add (char op);
void sub (char op);
void multi (char op);
void division (char op);
void power (char op);
void sqrtFunction (char op);
void average(char op);
void squararea(char op);
void squarperimeter(char op,double a);
void circlearea(char op);
void circleperimeter(char op,double pi,double r);


void squararea(char op)
{
    double area;
    double a;
    printf("Put length a:");
    scanf("%lf",&a);
    area=a*a;
    squarperimeter(op,a);
    printf("Area: %.1lf\n",area);
}
void squarperimeter(char op,double a)
{
    double perimeter;
    perimeter=a*4;
    printf("Perimeter: %.1lf\n",perimeter);
}
void circlearea(char op)
{
    double pi=3.14159;
    double area;
    double r;
    printf("Put radius:");
    scanf("%lf", &r);
    area=(double)pi*r*r;
    circleperimeter( op, pi, r);
    printf("Area: %.1lf \n",area);
}
void circleperimeter(char op,double pi,double r)
{
    double perimeter;
    perimeter=(double )2*pi*r;
    printf("Perimeter: %.1lf\n",perimeter);
}



void average (char op)
{
    double sum=0,number;
    double avg;
    int n=0;
    if(op=='a')
    {
        printf("Put number to find avg (put -999 to stop)");
        while (1)
        {
            scanf("%lf",&number);
            if(number==-999)
                break;
            else
                n++;
            sum+=number;


        }
        avg=(double )sum/n;
        printf("Number average: %.1lf",avg);
    }
}
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
    printf("put operator (+ - * / s ^ a b):  ");
    scanf("%c",&op);
    add(op );
    sub( op );
    multi( op);
    division( op );
    power( op);
    sqrtFunction(op);
    average(op);

    if(op=='b')
    {
        char t;
        printf("Put s for area and perimeter of square and c for area and perimeter of circle:  ");
        scanf(" %c",&t);

        if(t=='s')
        {
            squararea(op);

        }
        else if(t=='c')
        {
            circlearea(op);

        }
    }
    return 0;
}
