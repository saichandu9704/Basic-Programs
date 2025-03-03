/*
  Name:Sai Chandu
  Date:05-11-24
  Description:to generate AP,GP,HP
  sample input:2 3 5
  sample output:AP=2,5,8,11,14
                GP=2,6,18,54,162
                HP=0.500000,0.200000,0.125000,0.090909,0.071428
*/
#include<stdio.h>
int main()
{
    int A,R,num,AP,HP;
    //printf("Enter the First Number 'A': ");
    scanf("%d",&A);
    //printf("Enter the Common Difference / Ratio 'R': ");
    scanf("%d",&R);
    //printf("Enter the number of terms 'N': ");
    scanf("%d",&num);
    int temp=A;
    if(num>0)
    {
        //printing of AP(Arithmtic progression)
        printf("AP = %d, ",temp);
        for(int i=1;i<num;i++)
        {
            A=A+R;
            printf("%d",A);
            if(i<num-1)
            {
                printf(", ");
            }
        }
        printf("\n");
        
        //printing of GP(Geometric progression)
        printf("GP = %d, ",temp);
        A=temp;
        for(int i=1;i<num;i++)
        {
            A=A*R;
            printf("%d",A);
            if(i<num-1)
            {
                printf(", ");
            }
        }
        printf("\n");
        
        //printing of HP(Harmonic progression)
        printf("HP = %.6f, ",(float)1/temp);
        for(int i=1;i<num;i++)
        {
            int F=temp+(i*R);
            printf("%.6f",(float)1/F);
            if(i<num-1)
            {
                printf(", ");
            }
        }
    }    
    else
    {
        printf("Invalid input");
    }
}