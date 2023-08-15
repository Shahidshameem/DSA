
#include<stdio.h>
int fact(int no);
int main()
{
    int no,f;
    printf("enter the no.whose fact u want to find");
    scanf("%d",&no);
    f=fact(no);
    printf("%d",f);

    

}
int fact(int no)
{
    int fac;
    if(no==0)
    return 1;
    else
    {
    fac=no*fact(no-1);
    return fac;
    }

}