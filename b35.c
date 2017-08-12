#include <stdio.h> 
int main()
{
    char    str[100];
    int countSpecialChar;
    int counter;
    countSpecialChar=0;
        if(str[counter]>='0' && str[counter]<='9')
            countSpecialChar++;
    printf("\nSpecial Characters: %d",countSpecialChar);
    return 0;
}
