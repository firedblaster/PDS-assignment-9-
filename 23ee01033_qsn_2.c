 #include <stdio.h>

void swap(int ar1[],int ar2[], int n);

int main(void)
{
    int n;
    printf("Enter Size of Array");
    scanf("%d",&n);

    int ar1[n],ar2[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element[%d] for both arrays(with space) as a[%d] d[%d] :",i,i,i);
        scanf("%d %d",&ar1[i],&ar2[i]);
    }

    swap(ar1,ar2,n);

    printf("The Swapped Arrays\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n",ar1[i],ar2[i]);
    }
    return 0;
}

void swap(int array1[], int array2[],int num)
{
    for (int i = 0; i < num; i++)
    {
        int *a = &array1[i];
        int *b = &array2[i];
        int temp = array1[i];

        *a = array2[i];
        *b = temp;
    }
}