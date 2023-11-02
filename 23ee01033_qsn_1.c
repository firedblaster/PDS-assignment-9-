#include <stdio.h>
int main ()
{
    int x=1,y=12;
    int *px=&x,*py=&y;
    printf("The values of x = %d and y = %d\n",x,y);
    int temp;
    temp = *px;
    *px=*py;
    *py=temp;
    printf("The new values of x = %d and y = %d",x,y);
    return 0;
}