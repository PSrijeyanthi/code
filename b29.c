#include<stdio.h>
void main()
{
   int i, sum=0;
   for(i=101;i<200;i++)
   {
     if(i%7==0)
     {
       printf("%5d",i);
       sum+=i;
     }
   }
   printf("\n\nsum = %d",sum);
}
