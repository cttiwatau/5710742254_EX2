#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("Enter positive number :");
    scanf("%d %d",&a,&b);
    c=a-b;
    d=b-a;
    if (c>0){
        printf("|a-b|= %d",c);
    }
    else if(d>0){
        printf("|b-a|= %d",d);
    }
    return 0;
}
