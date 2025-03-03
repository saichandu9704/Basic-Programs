/*Name : Sai Chandu
  Date : 22/10/24
  Sample input : 2
  Sample output : 2 is positive even number
  Description : check whether the number is even or odd using nested if
*/
#include<stdio.h>
int main()
{
    int n;
    //printf("Enter the value of'n':");
    scanf("%d",&n);
    if(n>0)                             //checking whether it is positive
    {
        if(n%2==0)                      //checking whether it is even
        {
            printf("%d is positive even number\n",n);
        }
        else
        {
            printf("%d is positive odd number\n",n);
        }
    }
    else if(n<0)                         //checking whether it is negative
    {
        if(n%2==0)                       //checking whether it is even
        {
            printf("%d is negative even number",n);
        }
        else
        {
            printf("%d is negative odd number",n);
        }
    }
    else
    {
        printf("%d is neither odd nor even",n);
    }
}