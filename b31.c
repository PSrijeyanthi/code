#include <stdio.h>
int main()
{
   char ch;
   unsigned int long  charcount;
   int u;
   charcount=0;
while((ch=getc(stdin))!=EOF)
{
       if (ch !='\n') 
       {
           ++charcount;
   printf( "%lu \n", charcount );
       }
}
   return 0;
}
