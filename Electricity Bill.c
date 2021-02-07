#include <stdio.h>

int main()
{
    int unit;
    float amt, total_amt=0;
    char a[30],b[10];
    printf("Enter Customer Name : ");
    scanf("%s",&a);
    printf("Enter Month: ");
    scanf("%s",&b);
    printf("Enter Total Unit Consumed : ");
    scanf("%d",&unit);

    if(unit <= 35)
    {
        amt = unit * 7.85;
    }
    else if(unit <= 70)
    {
        amt = 274.75 + ((unit-35) * 7.85);
    }
    else if(unit <= 105)
    {
        amt = 549.50 + ((unit-70) * 10);
    }
    else
    {
        amt = 899.50 + ((unit-105) * 27.75);
    }

    total_amt  = amt + 480;
    printf("Customer Name :%s\n",a);
    printf("Month :%s\n",b);
    printf("Unit Consumed :%d\n",unit);
    printf("Monthly Electricity Bill = Rs. %.2f", total_amt);

    return 0;
}
