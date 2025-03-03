/*Documentiation
  Name:Sai Chandu
  Date:25-10-24
  Description:find a day in year
  sample input:n=9 ,day start=3
  sample output:wednesday
*/
#include<stdio.h>
int main()
{
    int n,day,ch;         //variable declration
    //printf("Enter the value of 'n' :");
    scanf("%d",&n);
    if(n>=1 && n<=356)    //checking valid number or not
    {
        //printf("Choose First Day :\n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\n");
        //printf("Enter the option to set the first day :");
        scanf("%d",&day);         
        if(day>=1 && day<=7)          //checking valid day or not
        {
            day=day-1;
            ch=((day+(n-1))%7);
            
            switch(ch)               //using switch case to print output
            {
                case 0:
                printf("The day is Sunday\n");
                break;
                case 1:
                printf("The day is Monday\n");
                break;
                case 2:
                printf("The day is Tuesday\n");
                break;
                case 3:
                printf("The day is Wednesday\n");
                break;
                case 4:
                printf("The day is Thursday\n");
                break;
                case 5:
                printf("The day is Friday\n");
                break;
                case 6:
                printf("The day is Saturday\n");
                break;
            }
        }
        else
        {
            printf("Error: Invalid Input, first day should be > 0 and <= 7\n");
        }
    }
    else
    {
        printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
    }
}