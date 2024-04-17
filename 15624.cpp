#include <iostream>

#define MOD 1000000007

int m[1048576]={0};

int dp(int k)
{
    if(m[k]!=0){
        return m[k];
    }
    if(k<=1){
        return k;
    }
    m[k]=((dp(k-1)%MOD)+(dp(k-2)%MOD))%MOD;
    return m[k];
}

int main()
{
    int n;

    std::cin>>n;
    
    std::cout<<dp(n);

    return 0;
}
