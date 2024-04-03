#include <iostream>
int a[301]={0};
int m[301]={0};
int n=0;
void dp(int t)
{
    if(m[t-2]+a[t]>=m[t-3]+a[t-1]+a[t]){
        m[t]=m[t-2]+a[t];
    }else{
        m[t]=m[t-3]+a[t-1]+a[t];
    }
    if(n!=t){
        dp(t+1);
    }
}

int main()
{
    std::cin>>n;
    for(int i=0;i<n;++i){
        std::cin>>a[i];
    }
    m[0]=a[0];
    m[1]=a[1]+a[0];
    if(a[0]+a[2]>=a[1]+a[2]){
        m[2]=a[0]+a[2];
    }else{
        m[2]=a[1]+a[2];
    }
    
    if(n==1){
        std::cout<<a[0];
        return 0;
    }else if(n==2){
        std::cout<<a[0]+a[1];
        return 0;
    }
    dp(3);
    std::cout<<m[n-1];
}
