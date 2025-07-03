//Basic Arithmetic Practice 
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
    ex_1=3*x+4*y+z/3;
    //(3*x)+(4*y)+(z/3)
    //9+4*y+z/3
    //9+24+z/3
    //9+24+4
    //37
    printf("\n%d\n", ex_1);
    //Take Away: precedence Priority list:" *,/,% " > " +,- " > "=" 
    
    // Integer literal and identifier arithmetic demotion theory
    int a1, a2, a3, a4, a5, a6, a7, a8, a9;
    a1=5/2; a2=7.0/3; a3=9.0/4.0; a4=11/5.0; a5=5/2.0; a6=2.0/3; a7=3/5; a8=4.0/9.0; a9=6/11.0;
        // ans: a1=2, a2=2, a3=2, a4=2, a5=2, a6=0, a7=0, a8=0, a9=0.
    printf("%d\n", a1);
    printf("%d\n", a2);
    printf("%d\n", a3);
    printf("%d\n", a4);
    printf("%d\n", a5);
    printf("%d\n", a6);
    printf("%d\n", a7);
    printf("%d\n", a8);
    printf("%d\n", a9);
    //Flpat-point literals and identifier arithmetic decimal theory
    float b1, b2, b3, b4, b5, b6, b7, b8, b9;
    b1=5/2; b2=7.0/3; b3=9.0/4.0; b4=11/5.0; b5=5/2.0; b6=2.0/3; b7=3/5; b8=4.0/9.0; b9=6/11.0;
        // ans: b1=2.50, b2=2.33, b3=2.22, b4=2.22, b5=2.50, b6=0.66, b7=0.60, b8=0.44, b9=0.54 .
    printf("%.2f\n", b1);//mistake: b1=2.00  // reason: float-point identifier storing integer literal demote the number
    printf("%.2f\n", b2);
    printf("%.2f\n", b3);
    printf("%.2f\n", b4);
    printf("%.2f\n", b5);
    printf("%.2f\n", b6);
    printf("%.2f\n", b7);// mistake: b7=0.00 // reason: float-point identifier storing integer literal demote the number
    printf("%.2f\n", b8);
    printf("%.2f\n", b9);
    // Operator Precedence and operator associativity
    int op_1;
    op_1= 3*2/3*5+6/3*7/2/7*6+7*9;
    printf("The value is %d\n", op_1);
    return 0;
}