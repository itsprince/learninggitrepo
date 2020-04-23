#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    int avg;
    printf("\tENTER 5 NUMBER\n");
    for(i=0;i<=4;i++)

        scanf("%d",&a[i]);
       for(i=0;i<=4;i++)

           sum=sum+a[i];

    avg=sum/10.0;
    printf("AVERAGE IS %d",avg);
}
