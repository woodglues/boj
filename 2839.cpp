#include <iostream>

int a[8192]={0};
int main()
{
    int n;

    std::cin>>n;
    
    a[3]=1;
    a[5]=1;
    
    for(int i=6;i<=n;++i){
        if(a[i-5]>=1){
            a[i]=a[i-5]+1;
        }else if(a[i-3]>=1){
            a[i]=a[i-3]+1;
        }
    }
    
    if(a[n]==0){
        std::cout<<-1;
    }else{
        std::cout<<a[n];
    }
    
    return 0;
}
