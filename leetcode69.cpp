#include<iostream>
#include<cmath>

int mySqrt(int x);

int main(){
    int x;
    std::cin >> x;
    int ans = mySqrt(x);
    std::cout << ans << std::endl;
    return 0;
}

int mySqrt(int x){
    if(x == 0) return 0;
    int ans = exp(0.5 * log(x));
    return (long long)(ans + 1) * (ans + 1) <= x ? ans + 1 : ans;
}
