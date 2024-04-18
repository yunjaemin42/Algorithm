#include <stdio.h>

int main(){
    long long x, y, z, ans = -1;
    scanf("%lld %lld", &x, &y);
    z = y*100 / x + 1;
    if(z >= 100){
        printf("-1");
        return 0;
    }
    long long left = 1;
    long long right = 1000000000;
    while(left <= right){
        long long mid = (left + right) / 2;
        long long val = (y + mid)*100 / (x + mid);
        if(z <= val){
            right = mid - 1;
            ans = mid;
        } 
        else left = mid + 1;
    }
    printf("%lld\n", ans);

    return 0;
}