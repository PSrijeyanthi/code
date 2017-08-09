#include <stdio.h>
int main()
{
    char str[100];
    int countnum,countAlpha,countChar,countSpaces;
    int counter;
    countnum=countAlpha=countChar=countSpaces=0;
    gets(str);
    for(counter=0;str[counter]!=NULL;counter++)
    {
        if(str[counter]>='0' && str[counter]<='9')
            countnum++;
        else if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
            countAlpha++;
        else if(str[counter]==' ')
            countSpaces++;
        else
            countChar++;
    }
    printf("\nnum: %d \nAlpha: %d \nSpaces: %d \nCharacters: %d",countnum,countAlpha,countSpaces,countChar);
    return 0;
}
