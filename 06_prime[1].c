/*Documentiation
  Sai Chandu
  08-11-2024
  sample input:20
  sample output:2, 3, 5, 7, 11, 13, 17, 19
  Description:print all primes using Sieve of Eratosthenes method
*/
#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter the value of 'n' : ");
    scanf("%d",&num);
    //check number is valid or not
    if(num>1)
    {
        int arr[num];
        //give values to index starting from 0
        for(int i=0;i<num;i++)
        {
            for(int j=2;j<num-1;j++)
            {
                if(i<num-1)
                {
                    arr[i]=sum+j;
                    sum=sum+1;
                    break;
                }
            }
        }
/*
        //print the values
        for(int i=0;i<num-1;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
*/
        //checking array elements are prime or not
        printf("The primes less than or equal to %d are :",num);
        for(int i=2;i*i<=num;i++)
        {
            for(int j=i;j<num-1;j++)
            {
                if(arr[j]%i==0)
                {
                    arr[j]=0;
                }
            }
        }
        printf("\n");
        //printing only prime numbers
        for(int i=0;i<num-1;i++)
        {
            if(arr[i]!=0)
            {
                printf("%d, ",arr[i]);
            }
        }
    }
    else
    {
        printf("Please enter a positive number which is > 1");
    }
}