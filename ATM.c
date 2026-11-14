#include <stdio.h>
unsigned long amount=10000,deposit,withdraw;
int choice,pin=0,k;

int main()
{
   float balance = 5000;
   unsigned long amounnt = 100000;
   while(pin!=1234)
   {
      printf("enter your secret pin no.:");
      scanf("%d",&pin);
      if(pin!=1234)
      {
       printf("please enter valid pin brooooo....");
      }
      else
      break;
   }
   do
   {
      printf("''''''''''''welcome to atm machine''''''''''''\n");
      printf("1. check balance\n");
      printf("2. withraw cash\n");
      printf("3. depodite cash\n");
      printf("4. quit\n");
      printf("\n\n");
      printf("enter your choice: ");
      scanf("%d",&choice);

      switch (choice)
      {
         case 1:
            printf("\n YOUR CURRENT BALANCE IS = %.2f\n\n ",balance);
            break;

         case 2:
            printf("enter amount to withdraw: ");
            scanf("%lu",&amount);

            if(amount <= balance)
            {
               balance -= amount;
               printf("updation  balance = %.2f\n",balance);
            }
            else
            {
               printf("insufficient balance!\n",balance);
            }
            break;
            
         case 3:
            printf("enter amount to deposite");
            scanf("%lu",&amount);
            balance += amount;
            printf("updation balance = %.2f\n",balance);
         break;

         case 4:
            printf("exiting atm\n");
            break;
            
         default:
            printf("invalide choice: noobs!");
         break;

      }
      

   } while(choice != 4);

 return 0;
    
}