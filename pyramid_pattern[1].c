/*Documentiayion
  Sai Chandu
  30-10-24
  sample input:4
  sample output:4
                3 4
                2 3 4
                1 2 3 4
                2 3 4
                3 4
                4
*/
#include <stdio.h>
int main()
{
    int num;
   //printf("Enter a number: ");      //asiking input from user
    scanf("%d",&num);
                                   
    for (int i = num; i >= 1; i--)   //starting of first pymramid
    {
        for (int j = i; j <= num; j++) 
        {
            printf("%d ", j);
        }
        printf("\n"); 
    }
    
    for (int i = 2; i <= num; i++)   //starting of second pyramid
    {
        for (int j = i; j <= num; j++) 
        {
            printf("%d ", j);
        }
        printf("\n"); 
    }
    return 0;
}
