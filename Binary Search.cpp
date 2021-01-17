#include<stdio.h>
#include<algorithm>
#include<stdio.h>
#include<string.h>
#define MAX_ELEMENTS 100
#define TRUE 1
#define FALSE 0

int main()
{
    int i=0,low=0,mid=0,high=0,found=TRUE,TargetElement=0,totalElements=0,array[MAX_ELEMENTS];


    printf("How many elements: ");
    scanf("%d",&totalElements);


    for(i = 0 ; i < totalElements ; i++)
    {
        printf("\nElements No [%2d ]: ",i+1);
        scanf("%d",&array[i]);
    }

    printf("\n\nTarget Element to be searched: ");
    scanf("%d",&TargetElement);

    // binary search
    low = 0;
    high = totalElements - 1;
    found = FALSE;

    while(low <= high)
    {
        mid = (low+high)/2;
        // search in lower half
        if(TargetElement < array[mid])
        {
            high = mid - 1;
        }
        else
        {
           // search in upper half
            if(TargetElement > array[mid])
            {
                low = mid + 1;
            }
            else
            {
                if(TargetElement == array[mid])
                {
                    printf("\n %d Target Element is found at ---> Elements No [%d]\n",TargetElement,mid+1);
                    found = TRUE;
                    break;
                }
            }
        }
    }

    if(FALSE == found)
    {
        printf("\n %d Target Element is not Found\n",TargetElement);
    }


    return 0;

}
