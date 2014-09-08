#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter score :");
    scanf("%d",&a);
    if (a>79)
    {
        printf("you grade : A",a);
    }
    else if (a>69)
    {
        printf("you grade : B",a);
    }
    else if (a>59)
    {
        printf("you grade : C",a);
    }
    else if (a>49)
    {
        printf("you grade : D",a);
    }
    else
    {
        printf("you grade : F",a);
    }
    return 0;
}
