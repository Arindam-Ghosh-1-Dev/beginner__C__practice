#include <stdio.h>
#include <math.h>

int main()
{
    int prin;
    float ci, roi, ti, tii, ta, hb;
    /*ci= Compound Interest
      roi= Rate Of Interest;
      ti= Time Interval in years;
      ta= Total Amount*/
    printf("Enter principal:\t ");
    scanf("%d", &prin);
    printf("Enter Rate of Interest:\t ");
    scanf("%f", &roi);
    printf("Enter Time Interval(Compounded Yearly):\t ");
    scanf("%f", &tii);
    int comp;
    const float hun=100.0;
    printf("Enter compounding:\t");
    scanf("%d", &comp);
    switch(comp){
      case 1: ti=tii;
              hb=hun;
              ta = prin*(pow(1+(roi/hb),ti));
              ci = ta - prin;
              printf("The total Amout after yearly compounding is %.2f\n",ta);
              printf("The compound Interest on the Principal is %.2f\n",ci);
              break;
      case 2: ti=2*tii;
              hb=2*hun;
              ta = prin*(pow(1+(roi/hb),ti));
              ci = ta - prin;
              printf("The total Amout after yearly compounding is %.2f\n",ta);
              printf("The compound Interest on the Principal is %.2f\n",ci);
              break;
      case 3: ti=4*tii;
              hb=4*hun;
              ta = prin*(pow(1+(roi/hb),ti));
              ci = ta - prin;
              printf("The total Amout after yearly compounding is %.2f\n",ta);
              printf("The compound Interest on the Principal is %.2f\n",ci);
              break;
    }
    // ta = prin*(pow(1+(roi/100.0),ti));
    // ci = ta - prin;
    // printf("The total Amout after yearly compounding is %.2f\n",ta);
    // printf("The compound Interest on the Principal is %.2f\n",ci);
    return 0;
}