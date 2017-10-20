#include <stdio.h>
#include <cs50.h>

int main()
{
    printf("Height: ");
    int h = get_int();
    while ( (h > 23) || (h < 0) )
    {
        printf("Height: ");
        h = get_int();
    }
    int i;
    for (int j=1;j<=h;j++)
    {
        //printing the spaces
        for(i=h-j;i>0;i--)
        printf(" ");
        //printing left half of pyramid
        for(i=j;i>0;i--)
        printf("#");
        //printing two gaps
        printf("  ");
        //printing right half of pyramid
        for(i=j;i>0;i--)
        printf("#");
        printf("\n");
    }
    return 0;
}