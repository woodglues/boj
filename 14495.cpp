#include <iostream>

long long int m[117]={0};

long long int dp(int k)
{
    if(m[k]!=0){
        return m[k];
    }
    if(k==1||k==2||k==3){
        m[k]=1;
        return 1;
    }
    m[k]=dp(k-1)+dp(k-3);
    return m[k];
}

int main()
{
    int n;
    std::cin>>n;
    std::cout<<dp(n);
    return 0;
}
