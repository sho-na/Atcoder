#include<iostream>
using namespace std;

int main(){
    
    int N;
    scanf("%d",&N);
    
    int ans = 0;
    if(N==12){
        ans = 1;
    }else{
        ans = N + 1;
    }
    
    printf("%d\n",ans);
    
}
