/*
  Documentiation:
  Sai Chandu
  11/11/2024
  sample input:array1 size=5,arr2 size=5
               array1 elements:3 2 8 5 4, array2 elements:12 3 7 8 5
  sample output:Median of array1 : 4
                Median of array2 : 9.5
                Median of both arrays : 6.75
  Description:print median of two arrays and median of both arrays.
*/
#include<stdio.h>
int main()
{
    int num1,num2,temp;
    double median1,median2,median3;
    //scaning the both array sizes
    printf("Enter the 'n' value for Array A: ");
    scanf("%d",&num1);
    printf("Enter the 'n' value for Array B: ");
    scanf("%d",&num2);
    int arrA[num1],arrB[num2];
    
    //Scaning the both array elements
    printf("Enter the elements one by one for Array A: ");
    for(int i=0;i<num1;i++)
    {
        scanf("%d",&arrA[i]);
    }
    printf("Enter the elements one by one for Array B: ");
    for(int j=0;j<num2;j++)
    {
        scanf("%d",&arrB[j]);
    }
    
    //sorting arrA
    for(int i=0;i<num1;i++)
    {
        for(int j=i+1;j<num1;j++)
        {
            if(arrA[i]>arrA[j])
            {
                temp=arrA[i];
                arrA[i]=arrA[j];
                arrA[j]=temp;
            }
        }
    }
/*  printf("Sorted arrayA:");
    for(int i=0;i<num1;i++)
    {
        printf("%d ",arrA[i]);
    }
    printf("\n");*/
    
    //sorting arrB
    for(int i=0;i<=num2;i++)
    {
        for(int j=i;j<num2;j++)
        {
            if(arrB[i]>arrB[j])
            {
                temp=arrB[i];
                arrB[i]=arrB[j];
                arrB[j]=temp;
            }
        }
    }
/*  printf("Sorted arrayB:");
    for(int i=0;i<num2;i++)
    {
        printf("%d ",arrB[i]);
    }
     printf("\n");*/
     
     //finding median of arrA
     if(num1%2==0)
     {
         median1=(float)(arrA[num1/2]+arrA[(num1/2)-1])/2;
         printf("Median of array1 : %g",median1);
     }
     else
     {
         median1=(float)arrA[num1/2];
         printf("Median of array1 : %g",median1);
     }
     printf("\n");
     
     //finding median of arrB
     if(num2%2==0)
     {
         median2=(float)(arrB[num2/2]+arrB[((num2/2)-1)])/2;
         printf("Median of array2 : %g",median2);
     }
     else
     {
         median2=(float)arrB[num2/2];
         printf("Median of array2 : %g",median2);
     }
     printf("\n");
     
     //finding median of both arrays
     printf("Median of both arrays : ");
     median3=(median1+median2)/2;
     printf("%g",median3);
}
    
    
    