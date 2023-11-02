#include <stdio.h>

int sum(int array[], int n);

int main()
{
    int n;
    printf("Enter Size of Array :");
    scanf("%d",&n);

    int array[n];
    printf("Enter Elements of the Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ",i);
        scanf("%d",&array[i]);
        printf("\n");
    }

    int ans = sum(array,n);

    printf("The Sum of Elements is %d\n",ans);
    return 0;
}

int sum(int array[], int n)
{
    int *p_array = array;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *p_array;
        p_array++;
    }
    return sum;
}