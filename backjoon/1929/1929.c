#include <stdio.h>
#include <math.h>

int main()
{
    int M,N;
    
    scanf("%d%d",&M,&N);            //범위 M에서 N까지지
    
    
    for(int i=M;i<=N;i++)
    {
        int a=1;                    
        if(i<=1)              // 1 밑에는 소수가 아니니 소거
        {
            a=0;
        }
        for(int j=2;j<=sqrt(i);j++)  //2부터 루트i까지 j에 1씩 더하기
            {
                if(i%j==0)          // 아이랑 제이를 나누어 0이면 소수가 아니므로 에이에 0넣고 브레이크로 빠져나오기
                {
                    a=0;
                    break;
                }
               
            }
            if(a && i>1)                    //a가 0이 아니고 아이가 1보다 클 때 소수 이므로 출력하기
            {
                printf("%d\n",i);
            }
    }
    
    
    
    return 0;
}