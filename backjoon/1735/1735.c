#include <stdio.h>

int main(){
    int A1,A2,B1,B2;           // A 첫번째 분수 B 두 번째 
    int C1,C2;                 // C = A*B  분수 1: 분자 2: 분모모
    scanf("%d %d",&A1,&A2);
    scanf("%d %d",&B1,&B2);
    C1 = A1*B2 + B1*A2;       // 분자계산
    C2 = A2*B2;              // 분모계산
    
    int division = 2;            // 분수를 나눌 변수
    while(division<=C1 && division<=C2){
		if((C1%division!=0)||(C2%division!=0)){ // 조건 C1<C2 이면 i<=C1까지지 조건 C2>C1 이면 i<=C2까지지
			division++;                        //  둘다 나누어 지는 i값 division에 넣기
		}
		else {
			C1 /= division;                   //기약분수 표현현
			C2 /= division;
		}
	}
	printf("%d %d",C1,C2);                  // 정답의 분자 분수 출력
    return 0;
}