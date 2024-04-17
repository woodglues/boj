#include <iostream>
#define MOD 1000000000

int v[256][256]={0};

int dp(int x,int y)
{
    if(x==0||y==1){
        return 1;
    }
    
    if(v[x][y]!=0){
        return v[x][y];
    } 
    
    int sum=0;
    
    for(int i=0;i<=x;++i){
        sum=(sum+dp(i,y-1))%MOD;
    }
    
    v[x][y]=sum;
    
    return v[x][y];
}

int main()
{
    int n,k;
    
    std::cin>>n>>k;
    std::cout<<dp(n,k);
    
    return 0;
}
