#include<stdio.h>
int main()
{
    int balance,deposit,withdraw,choice;
    printf("BRIDGET NGUGI\n");
    printf("C026-01-0985/2021\n");
    printf("Enter the initial account balance:");
    scanf("%d",&balance);
    a:
        printf("Select an option:\n1.Check your account balance\n2.Deposit\n3.Withdraw\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                printf("Your account balance is:%d\n",balance);
                goto a;
            }
        case 2:
            {
                printf("ENTER AMOUNT YOU WISH TO DEPOSIT Ksh.\n");
                scanf("%d",&deposit);
                printf("Your deposit is KSH.%d\n",deposit);
                printf("Your current account balance is KSH.%d\n",balance+deposit);
                balance +=deposit;
                goto a;
            }
        case 3:
            {
                printf("ENTER AMOUNT YOU WISH TO WITHDRAW Ksh.\n");
                scanf("%d",&withdraw);
                if(withdraw<balance){
                printf("Your current account balance is KSH.%d\n",balance-withdraw);
                balance -=withdraw;
                }
                else{
                    printf("You have insufficient funds hence withdrawal is not possible!!");
                }
                goto a;
                break;
            }
            default:
                {
                printf("INAVALID CHOICE!!Please select again.\n");
                goto a;
                break;
                }
        }
}
