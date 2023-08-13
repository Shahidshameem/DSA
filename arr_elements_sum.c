
#include<stdio.h>
int main()
{
    int a[20],i,size;
    int sum=0;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enter the array elements");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        
    }
    printf("sum of array elements is: %d",sum);
    
}