#include <iostream>

int main()
{
    long n,b=0,ans=0;
    long a[500000]={0};

    std::cin>>n;

    for(int i=0;i<n;++i){
        std::cin>>a[i];
    }

    for(int i=n-1;i>=0;--i){
        if(b<a[i]){
            b++;
        }else{
            b=a[i];
        }
        ans+=b;
    }
    std::cout<<ans;
}
