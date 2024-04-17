#include <iostream>

int m[131072]={0, -1, 1, -1, 2, 1, 3, 2, 4};

int dp(int k)
{
    if(m[k]!=0){
        return m[k];
    }
    
    m[k]=dp(k-5)+1;
    return m[k];
}

int main()
{
    int n;

    std::cin>>n;
    std::cout<<dp(n);
    
    return 0;
}
