#include <stdio.h>

int main(){
    int N;
    int fac=1;

    scanf("%d",&N);
    for(int i = 1;i<=N;i++){
        
        fac*=i;
    }
    printf("%d",fac);
}