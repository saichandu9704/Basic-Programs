/*Documentiayion
  Sai Chandu
  04-11-24
  sample input:4
  sample output:4 is not a prime number
*/
#include <stdio.h>
int main()
{
    int num,i;
    //printf("Enter a number: ");
    scanf("%d",&num);
    if(num>1)
    {
        for(i=2;i*i<=num;i++)
        {
            if(num%i==0)
            {
                printf("%d is not a prime number",num);
                break;
            }
        }
        if(i*i>num)
        {
            printf("%d is a prime number",num);
        }
    }
    else
    {
        printf("Invalid input");
    }
}