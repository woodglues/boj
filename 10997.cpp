#include <iostream>

int n,t=1,x=0,y=0;
int a[500][500]={0};

int main()
{

    std::cin>>n;
    y=n*2;
    x=(n-1)*2;
    a[y][x]=1;

    if(n==1){
        std::cout<<'*';
        return 0;
    }
    for(int i=0;i<2;++i){
        y--;
        a[y][x]=1;
    }
    for(int i=0;i<2;++i){
        x++;
        a[y][x]=1;
    }
    for(int i=0;i<4;++i){
        y++;
        a[y][x]=1;
    }
    for(int i=0;i<4;++i){
        x--;
        a[y][x]=1;
    }
    for(int i=0;i<6;++i){
        y--;
        a[y][x]=1;
    }
    for(int i=0;i<4;++i){
        x++;
        a[y][x]=1;

    }


    for(int j=0;j<n-2;++j){
        x++;
        a[y][x]=1;
        x++;
        a[y][x]=1;

        for(int i=0;i<(j+3-1)*4;++i){
            y++;
            a[y][x]=1;
        }

        for(int i=0;i<(j+3-1)*4;++i){
            x--;
            a[y][x]=1;
        }
        if(j==0){
            for(int i=0;i<(j+3-1)*4+2;++i){
                y--;
                a[y][x]=1;
            }
        }else{
            for(int i=0;i<(j+3-1)*4+2;++i){
                y--;
                a[y][x]=1;

            }
        }


        for(int i=0;i<(j+3-1)*4;++i){
            x++;
            a[y][x]=1;

        }

    }


    for(int i=0;i<6+(4*(n-2))+2;++i){
        if(i==1){
            std::cout<<"*\n";
            continue;
        }
        for(int j=0;j<4+4*(n-2)+1;++j){
            if(a[i][j]==0){
                std::cout<<' ';
            }else if(a[i][j]==1){
                std::cout<<'*';
            }
        }
        if(i==6+(4*(n-2))){
            break;
        }
        std::cout<<'\n';
    }

}
