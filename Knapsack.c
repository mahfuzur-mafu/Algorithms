#include<stdio.h>
int main()

{
    int KS,n;
    printf("Enter Capacity : ");
    scanf("%d",&KS);
    printf("Enter item: ");
    scanf("%d",&n);
    int unitprice[n];
    for(int i=0; i<n; i++)
    {
        printf(" Item #%d unit price :",i+1);
        scanf("%d",&unitprice[i]);
    }
    int weight[n];
    for(int i=0; i<n; i++)
    {
        printf(" Item #%d weight :",i+1);
        scanf("%d",&weight[i]);
    }

    int NN[n];
    for(int i=0; i<n; i++)
    {
       NN[i]=0;
    }

    int maxprofit = 0;

    while(KS != 0)
    {
        int max = 0, ind;

        for(int i=0; i < 4 ; i++)
        {
            if(unitprice[i] > max && NN[i] == 0)
            {
                max = unitprice[i];
                ind = i;
            }
        }

        NN[ind] = 1;
        if(weight[ind] < KS)
        {
            maxprofit += (unitprice[ind] * weight[ind]);
            KS -= weight[ind];
        }
        else
        {
            maxprofit += (unitprice[ind] * KS);
            KS = 0;
        }

    }

    printf("The max profit = %d\n", maxprofit);

    return 0;
}
