#include <stdio.h>


int main(){
    /*
    long long int s=0;
    long long int high,low;
    scanf("%lld",&input);

    
    if(s==0)    printf("0");
    else if(s>0)    printf("+");
    else printf("-");
*/
    int N;
    int fac=1;

    scanf("%d",&N);
    for(int i = 1;i<=N;i++){
        
        fac*=i;
    }
    printf("%d"fac);
    }
