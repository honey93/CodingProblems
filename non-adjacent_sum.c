#include<stdio.h>
long long int max(long long int a,long long int b)
{
    return a>b?a:b;
}
int main()
{
    int t,i,n;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    long long int arr[10000];
    long long int dp[10000];
    for(i=0;i<n;i++)
        scanf("%lld",&arr[i]);
    dp[0]=arr[0];
    dp[1]=max(arr[0],arr[1]);
    for(i=2;i<n;i++)
        dp[i]=max(dp[i-1],arr[i]+dp[i-2]);
    printf("%lld\n",dp[n-1]);
    }
    return 0;
}
