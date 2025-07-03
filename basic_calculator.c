#include<stdio.h>

int main()
{
    //Intro
    printf("Hello World\n");
    printf("Hello India\n");
    printf("Hello West Bengal\n");
    printf("Hello Asansol\n");
    //Area Of Rectangle
    int length, bredth, rad;
    char c_1, c_2;
    printf("Enter Length of Rectangle(in cm):\n");
    scanf("%d", &length);
    printf("Enter Bredth of Rectangle(in cm):\n");
    scanf("%d", &bredth);
    printf("enter Unit(in two word for e.g., me:meter, cm:centimeter, mile:mi etc.)\n");
    scanf("%c%c",  &c_1,&c_2);
    printf("---------RESUlT-------------\n");
    printf("Area of the rectangle having length %d %c%c and bredth %d %c%c is %d sq.%c%c\n", length, c_1, c_2, bredth, c_1, c_2, length*bredth, c_1, c_2);
    printf("----------------------------\n");
    //Area Of Circle
    const float pi=3.14;
    printf("please Enter the Radius of the circle:\n");
    scanf("%d", &rad);
    printf("---------RESUlT-------------\n");
    printf("Area of the circle of radius %d unit is %f sq.unit\n", rad, pi*rad*rad);
    printf("----------------------------\n");
    //Volume Of Cylinder
    int height;
    printf("Enter height for can having same circular area:\n");
    scanf("%d", &height);
    printf("---------RESUlT-------------\n");
    printf("volume of can having radius %d and height %d at top  is %f\n", rad, height, pi*rad*rad*height);
    printf("----------------------------\n");
    //Area Of Triangle
    const float tri=0.5;
    int t_base, t_height;
    printf("Enter Base of Right-Angled-Triangle:\n");
    scanf("%d", &t_base);
    printf("Enter Height of Right-Angled-Triangle:\n");
    scanf("%d", &t_height);
    printf("---------RESUlT-------------\n");
    printf("The Area of triangle of base %d unit and height of %d is %f\n", tri*t_base*t_height);
    printf("----------------------------\n");
    //Temperature converter:celcius to Ferenheit
    const float c_t_f=1.8;
    float cel;
    printf("Enter celcius:\t");
    scanf("%f", &cel);
    printf("Ferenheit:\t%f\n", (c_t_f*cel)+32);
    //This simple Interest
    int p,r,t,q;
    q=100;
    printf("principle:\t");
    scanf("%d",&p);
    printf("Rate Of Interest:\t");
    scanf("%d",&r);
    printf("Time Interval:\t");
    scanf("%d",&t);
    printf("Your interest is %d", (p*r*t)/q);
    printf("Your Total amount is %d", p+((p*r*t)/q));
    return 0;
}