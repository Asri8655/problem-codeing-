//https://drive.google.com/open?id=1Pmd3chR1VyFUnCicwFUwHTbRsIWFPze4
#include<stdio.h>
#include <locale.h>
void main()
{int card,pin,choice,amount=100000,cash,cash2,cash5,total;
    char name[25];
    printf("enter your card  ");scanf("%d",&card);
    if(card==1)
    {printf("\nYour Pin number ");scanf("%d",&pin);
        if(pin==2020)
        {printf("\nName ");scanf("%s",name);printf("\n1.Deposit\n2.Withdraw ");scanf("%d",&choice);
            if(choice==1)
            {printf("\nEnter your details");printf("\n100 = ");scanf("%d",&cash);printf("\n200 = ");scanf("%d",&cash2);printf("\n500 = ");scanf("%d",&cash5);
                total=(cash*100)+(cash2*200)+(cash5*500);
                setlocale(LC_NUMERIC, "");
                printf("Total amount is %'d",total);amount=total+amount;
                printf("\n%s you have deposited %'d and the balance is %'d",name,total,amount);}
            else if(choice==2)
            {printf("Enter the amount");scanf("%d",&cash);
                if(cash<=amount){
                setlocale(LC_NUMERIC, "");
                printf("%'d\n",cash);amount=amount-cash;
                printf("\n%s you have withdrawn %'d and the balance is %'d",name,cash,amount);}
                else printf("\n Insufficent funds");}}
        else printf("\nInvalid Pin Number ");} 
        else{printf("Enter a valid card..");}}

