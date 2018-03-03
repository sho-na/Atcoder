#include<iostream>
using namespace std;

int main(){
    
    int N,i;
    scanf("%d",&N);
    
    int ans = 0;
    int x = 0;
    for(i=1;i<=N;i++){
        x = i*10000;
        ans+=x;
        x = 0;
    }
    
    ans = ans/N;
    
    printf("%d\n",ans);

}
