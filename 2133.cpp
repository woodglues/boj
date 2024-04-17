#include <iostream>

int main()
{
    int n;
    int a[32]={0};
    
    std::cin>>n;
    
    a[2]=3;
    
    for(int i=4;i<=n;i+=2){
        a[i]=3*a[i-2];
        for(int j=4;j<i;j+=2){
            a[i]+=2*a[i-j];
        }
        a[i]+=2;
    }
    
    std::cout<<a[n];
    
    return 0;
}
