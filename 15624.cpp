#include <iostream>

int m[1048576]={0};

int dp(int k)
{
    if(m[k]!=0){
        return m[k];
    }
    if(k==0){
        return 0;
    }
    if(k==1){
        return 1;
    }
    m[k]=((dp(k-1)%1000000007)+(dp(k-2)%1000000007))%1000000007;;
    return m[k];
}

int main()
{
    int n=0;

    std::cin>>n;
    
    std::cout<<dp(n);
}
