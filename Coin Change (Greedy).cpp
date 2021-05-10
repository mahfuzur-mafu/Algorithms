#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,M,N;
    printf("How Many Coin : ");
    scanf("%d",&M);

    int coin[M];
    printf("Coins :\n");
    for(i = 0 ; i<M ; i++)
    {
        scanf("%d",&coin[i]);
    }

    printf("Input Value for coin change : ");
    scanf("%d",&N);
    int no_of_coins =0;

    for(i = M-1; i>=0; i--)
    {
        if(coin[i]<=N)
        {
            no_of_coins += N/coin[i];
            printf("The %d coin needed %d times\n",coin[i],N/coin[i]);
            N = N%coin[i];
        }
    }
    printf("Number of coins: %d\n",no_of_coins);

    return 0;
}
