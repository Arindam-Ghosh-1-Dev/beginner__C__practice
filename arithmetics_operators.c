//Basic Arithmetics Practice 
/*
Topic Covered: Sum, Substract, Multiply, Division, Modulus, Operator Precedence, Operator associativity.*/
#include <stdio.h>

int main()
{
    int a,b,c,d,sum,sub,mul,div,mod;
    a=3,b=6,c=19,d=10;
    sum=c+b,sub=c-d,mul=a*d,div=b/a;
    mod=c/(a+d);//Note:Modulus inapplicable for float-point-literals
    printf("\nThe sum of %d and %d is %d.\n", b, c, sum);
    printf("\nThe Substraction of %d from %d is %d.\n", d, c, sub);
    printf("\nThe Multiplication of %d and %d is %d.\n", a, d, mul);
    printf("\nThe Division of %d by %d is %d.\n", b, a, div);
    printf("\nThe Remainder When %d is divided by sum of %d and %d, The result is %d.\n", c, a, d, mod);
    // Modulus example;
    int num;
    printf("---------\n");
    printf("Please Put the number to find if it is divisible by 97?\n");
    printf("\n**NOTE:If the remainder is 0,Then it is divisible Otherwise not.**\n");
    scanf("%d", &num);
    printf("The remainder for %d divided by 97 is %d\n", num, num/97);
    // Operator Precedence
    int x, y, z, ex_1;
    x=3, y=6, z=12;
    ex_1=3*x+4*y+z/3;//(3*x)+(4*y)+(z/3)
    //9+4*y+z/3
    //9+24+z/3
    //9+24+4
    //37
    printf("\n%d\n", ex_1);//Take Away: precedence Priority list:" *,/,% " > " +,- " > "=" 

    return 0;
}