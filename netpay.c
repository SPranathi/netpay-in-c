#include<stdio.h>
#include <stdlib.h>
#define payrate 12.00
#define taxrate_300 .15
#define taxrate_150 .20
#define taxrate_rest .25
#define  OVERTIME 40
void main(){
    //declare variables
    int hours;
    double grosspay,taxes,netpay,OVERTIMEPAY;
    printf("Please enter the no of hours worked this week:\n ");
    //get the input
    scanf("%d",&hours);
    //calculate the grosspay
    if (hours<=40)
        grosspay=hours*payrate;
    else{
        grosspay=40*payrate;
         OVERTIMEPAY=(hours-40)*(payrate*1.5);
        grosspay+=OVERTIMEPAY;
    }
    //calculate taxes
    if(grosspay<=300){
        taxes=grosspay*taxrate_300;
    }
    else if(grosspay>300 && grosspay<=450){
        taxes =300*taxrate_300;
        taxes+=(grosspay-300)*taxrate_150;
    }
    else  if (grosspay>450){
        taxes=300*taxrate_300;
        taxes+=150*taxrate_150;
        taxes+=(grosspay-450)*taxrate_rest;
    }
    //calculate the netpay
    netpay=grosspay-taxes;
    //display output
    printf("Your grosspay this week is : %0.2f\n",grosspay);
    printf("Your taxes this week is : %0.2f\n",taxes);
    printf("Your netpay this week is : %0.2f\n",netpay);    
    
}  
