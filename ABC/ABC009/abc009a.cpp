#include<iostream>
using namespace std;

int main(){
    
    int n;
    scanf("%d",&n);
    
    int ans = n/2;
    if(n%2==1){
        ans += 1;
    }
    printf("%d\n",ans);
}
