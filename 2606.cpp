#include <iostream>
#include <vector>

int a[128][128]={0};
int v[128]={0};

int main()
{
    int n,m,ans=0;
    std::cin>>n>>m;
    
    for(int i=0;i<m;++i){
        int t1,t2;
        std::cin>>t1>>t2;
        a[t1][t2]=1;
        a[t2][t1]=1;
    }
    v[1]=1;
    std::vector<int> vec;
    vec.push_back(1);
    while(!vec.empty()){
        int x1=vec.back();
        vec.pop_back();
        for(int i=1;i<=n;++i){
            if(a[x1][i]==1&&v[i]==0){
                vec.push_back(i);
                ++ans;
                v[i]=1;
            }
        }
    }
    std::cout<<ans;
} 
