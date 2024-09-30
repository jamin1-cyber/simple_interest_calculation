//program to calculate simple interest

#include <stdio.h>
int main() {
    //we declear veriables

    int principal;
    int rate;
    int time;

//prompting the user to enter values
    
    printf("Enter principal:" );
    scanf("%d",&principal);

    printf("Enter rate: ");
    scanf("%d",&rate);

    printf("Enter time in years: ");
    scanf("%d",&time);
//calling veriable for interest
    
    int interest;
    interest=(principal*rate*time)/100;
    printf("Your simple interest is:  %d ",interest);

    return 0;
}
