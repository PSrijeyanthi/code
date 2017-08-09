#include <stdio.h>
int main()
{
    int n1, n2,leastmul;
    scanf("%d %d", &n1, &n2);
    leastmul = (n1>n2) ? n1 : n2;
    while(1)
    {
        if( leastmul%n1==0 && minMultiple%n2==0 )
        {
            printf("The LCM of %d and %d is %d.", n1, n2,minMultiple);
            break;
        }
        ++leastmul;
    }
    return 0;
}
