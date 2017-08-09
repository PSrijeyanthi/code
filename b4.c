#include <stdio.h>
int main()
{
    char y;
    scanf("%c",&y);
    if( (y>='a' && y<='z') || (y>='A' && y<='Z'))
        printf("%c is an alphabet.",y);
    else
        printf("%c is not an alphabet.",y);
    return 0;
}
