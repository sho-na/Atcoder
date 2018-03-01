#include <cstdio>

int main(){
    
    int i;
    int h[2];
    for(i=0;i<2;i++){
        scanf("%d",&h[i]);
    }
    
    int ans = h[0] - h[1];
    
    printf("%d\n",ans);
    
}
