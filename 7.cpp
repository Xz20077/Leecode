// 7. 整数反转
// 中等
// 相关标签
// premium lock icon
// 相关企业
// 给你一个 32 位的有符号整数 x ，返回将 x 中的数字部分反转后的结果。

// 如果反转后整数超过 32 位的有符号整数的范围 [−231,  231 − 1] ，就返回 0。

// 假设环境不允许存储 64 位整数（有符号或无符号）。
#include <vector>
#include <climits>
#include <iostream>
using namespace std;
int reverse(int x) {
    int res = 0,i=0,newres=0,newx=x;
    i=x%10;
    while (x != 0) {
        if((newres*10+x%10>INT_MAX-2e9&&i>=2)||(newres*10+x%10<INT_MIN+2e9&&i<=-2))return 0;
        res = res * 10 + x % 10;
        if(x!=newx)
        newres = newres * 10+x % 10;
        x /= 10;
    }
    return res;
}
//test
int main(){
    int x = 1534236432;
    int res = reverse(x);
    cout<<res<<endl;
    return 0;
}