/*Documentiation
  Name:Sai Chandu
  Date:28-10-24
  Description:To check if number is perfect or not
  sample input:6
  sample output:Yes, entered number is perfect number
*/
#include<stdio.h>
int main()
{
    int num,i,sum=0;            //variable declaration
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<=0)
    {
        printf("Error: Invalid Input, Enter only positive number\n");
    }
    else
    {
      for(i=1;i<num;i++)            //checking limits
      {
         if(num%i==0)              //checking perfect number or not
         {
             sum=sum+i;
         }
      }
      if(sum==num)
      {
         printf("Yes, entered number is perfect number\n");
      }
      else
      {
         printf("No, entered number is not a perfect number\n");
      }
    }
    
    return 0;
}