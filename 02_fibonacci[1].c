/*Documentiation
  Name:Sai Chandu
  Date:24-10-24
  Description:Print Positive Fibonacci numbers
  sample input:5
  sample output:0 1 1 2 3 5
*/
#include<stdio.h>
int main()
{
    int num1=0,num2=1,sum=0,n;          //variable declaration
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0)         //checking number is valid or not
    {
        printf("Invalid input");
    }
    else
    {
        while(sum<=n)
        {
            num1=num2;
            num2=sum;
            printf("%d ",sum);
            sum=num1+num2;
            
        }
    }
}