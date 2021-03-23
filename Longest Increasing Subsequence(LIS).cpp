#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int arr[n],lis[n];
    for(int i ;i<n;i++)
    {
        printf("Array Index [%d] : ",i);
        scanf("%d",&arr[i]);
        lis[i]=1;

    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]>arr[j] && lis[i]<= lis[j])
            {
                lis[i]=lis[j]+1;
            }
        }
    }

    int mx=0;
    for(int i=0;i<n;i++)
    {
        if(mx<=lis[i])
        {
            mx=lis[i];
        }
    }

    printf("The Maximum LIS is : %d\n",mx);

}
