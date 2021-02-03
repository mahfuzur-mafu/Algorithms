#include <stdio.h>
int main()
{
    int n,temp;
    int arr[100];
    printf("Elements :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Elements no [%d]: ",i+1);
        scanf("%d",&arr[i]);;
    }
    for (int i = 1 ; i <= n - 1; i++)
    {
        int j;
        j = i;
        while ( j > 0 && arr[j-1] > arr[j])
        {
            temp     = arr[j];
            arr[j]   = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
    printf("After Sorted : ");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
