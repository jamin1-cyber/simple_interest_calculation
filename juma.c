//program to calculate simple interest

#include <stdio.h>
int main() {
    //we declear veriables

    int principal;
    int rate;
    int time;


    printf("Enter principal:" );
    scanf("%d",&principal);

    printf("Enter rate: ");
    scanf("%d",&rate);

    printf("Enter time in years: ");
    scanf("%d",&time);

    int interest;
    interest=(principal*rate*time)/100;
    printf("Your simple interest is:  %d ",interest);

    return 0;
}
