#include<stdio.h>
#include<stdio.h>
#include<string.h>
#define MAX_ELEMENTS 50
#define TRUE 1
#define FALSE 0

int main()
{
    int i = 0,
        found = TRUE,
        totalElements = 0,
        TargetElement = 0,
        array[MAX_ELEMENTS];

    printf("How many elements : ");
    scanf("%d",&totalElements);

    for(i=0; i<totalElements; i++)
    {
        printf("Enter elements No [%d]: ",i+1);
        scanf("%d",&array[i]);
    }

    printf("\nElement to searched : ");
    scanf("%d",&TargetElement);

    found = FALSE;

    // linear search
    for(i=0 ; i < totalElements ; i++)
    {
        if(array[i] == TargetElement)
        {
            printf("\n%d Target Element is found at ---> Elements No [%d]\n",TargetElement,i+1);
            found = TRUE;
            break;
        }
    }


    if(FALSE == found)
    {
        printf("\n%d Target Element is not Found\n",TargetElement);
    }
    return 0;
}
