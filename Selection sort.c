#include<stdio.h>
int main()
{
    int i,n,j,loop,arr[100],minvalue,swap;
    printf("How many elements : ");
    scanf("%d",&n);
    for(i = 0 ; i<n ; ++i)
    {
        printf("Elements no [%d]: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(loop = 0 ; loop < n-1 ; loop++)
    {
        minvalue = loop;
        for(j = loop + 1 ; j < n ; j++)
        {
            if(arr[minvalue] > arr[j])
            {
                minvalue = j;
            }
        }
        if(minvalue != loop)
        {
            swap = arr[loop];
            arr[loop] = arr[minvalue];
            arr[minvalue] = swap;
        }
    }
    printf("After Sorted : ");
    for(i = 0 ; i < n ; i++)
    {
        printf("%d ",arr[i]);
    }
   return 0;
}

