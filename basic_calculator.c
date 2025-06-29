#include<stdio.h>

int main()
{
    //Intro
    printf("Hello World\n");
    printf("Hello India\n");
    printf("Hello West Bengal\n");
    printf("Hello Asansol\n");
    //Area Of Rectangle
    int length, breadth, rad;
    printf("Enter Length of Rectangle:\n");
    scanf("%d", &length);
    printf("Enter Breadth of Rectangle:\n");
    scanf("%d", &breadth);
    printf("Area of the rectangle is %d\n", length*breadth);
    //Area Of Circle
    const float pi=3.14;
    printf("please Enter the Radius of the circle:\n");
    scanf("%d", &rad);
    printf("Area of the circle is %f\n", pi*rad*rad);
    //Volume Of Cylinder
    int height;
    printf("Enter height for can having same circular area:\n");
    scanf("%d", &height);
    printf("volume of can having a same area circle at top  is %f\n", pi*rad*rad*height);
    //Area Of Triangle
    const float tri=0.5;
    int t_base, t_height;
    printf("Enter Base of Right-Angled-Triangle:\n");
    scanf("%d", &t_base);
    printf("Enter Height of Right-Angled-Triangle:\n");
    scanf("%d", t_height);
    printf("The Area of triangle is %f\n", tri*t_base*t_height);
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