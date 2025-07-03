#include<stdio.h>

int main() 
{   int prin;
    //prin=Principal
    float si, roi, ti, ta;
    /*si= Simple Interest
      roi= Rate Of Interest;
      ti= Time Interval in years;
      ta= Total Amount
    */
    printf("\n*** Simple Interest Calculator ***\n\n");
    printf("Enter The Principal Amount: ");
    scanf("%d", &prin);
    printf("Enter Time Interval for Your Interest in years (e.g., 1.5 for 18 months): ");
    scanf("%f", &ti);
    printf("Enter Rate Of Interest(in %% per annum): ");
    scanf("%f", &roi);
    // CALCULATION
    si=(prin*roi*ti)/100;
    ta=prin+si;
    // RESULT
    printf("-----------------------------------INPUT------------------------------------------\n");
    printf("Principal: Rs.%d\n", prin);
    printf("Rate Of Interest: %.2f%%\n", roi);
    printf("Time Interval: %.1f years\n", ti);
    printf("-----------------------------------RESULT------------------------------------------\n");
    printf("Your Interest is: Rs.%.2f\n", si);
    printf("Your Total Amount is: Rs.%.2f\n", ta);
    printf("-----------------------------------------------------------------------------\n");
    return 0;
}