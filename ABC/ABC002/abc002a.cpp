#include<iostream>
using namespace std;

int main(){
    
    int x,y;
    scanf("%d%d",&x,&y);
    
    //maxを使う方法
    int ans = max(x,y);
    printf("%d\n",ans);
    
    //ifを使う方法
    /*if(x > y){
        printf("%d\n",x);
    }else{
        printf("%d\n",y);
    }*/
    
}
