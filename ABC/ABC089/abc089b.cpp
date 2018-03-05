#include<iostream>
using namespace std;

int main(){
    
    int N,i;
    scanf("%d",&N);
    
    char S[N];
    for(i=0;i<N;i++){
        scanf("%s",&S[i]);
    }
    
    int flag = 0;
    for(i=0;i<N;i++){
        if(S[i]=='Y'){
            printf("Four");
            flag = 1;
            break;
        }
    }
    if(flag==0){
        printf("Three");
    }
    
}
