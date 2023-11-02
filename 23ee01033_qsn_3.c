#include <stdio.h>

int search(int ar[], int num, int element);

int main(void)
{
    int n;
    printf("Enter Size of Array :");
    scanf("%d",&n);

    int ar[n];
    printf("Enter Elements of the Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ",i);
        scanf("%d",&ar[i]);
    }

    int ele;
    printf("Enter Element to Search :");
    scanf("%d",&ele);

    int ans = search(ar,n,ele);

    if (ans != -1)
        printf("The Element %d is found at position %d\n",ele,ans);
    else
        printf("The Element is not Present\n");
}

int search(int ar[], int num, int element)
{
    int *ptr = ar;
    for (int i = 0; i < num; i++)
    {
        if (*ptr == element)
        {
            return i+1;
            break;
        }
        else
            ptr++;
    }
    return -1;
}