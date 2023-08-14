
#include<stdio.h>
int main()
{
    int a[20],i,size,y,sum,p,avg;
    float var;
    printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter the array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("the sum of array elements is:%d\n",sum);
    avg=sum/size;
    printf("average is:%d\n",avg);
   /**or(i=0;i<size;i++)
    {
        y=a[i]-avg;
        p=y*y;
        var=p/size;
        printf("variance is:%d\n",var);
    } */   
     
}