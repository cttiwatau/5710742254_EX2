#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,total;
    int b;
    printf("Enter midterm :");
    scanf("%d",&a);
    printf("Enter final   :");
    scanf("%d",&b);
    (total=a+b);
    if((a>=20)&&(b>=30));
        printf("passed with score :%d",total);
    else((a<=19)&&(b<=29));
        printf("failed with score :%d",total);
    return 0;
}
