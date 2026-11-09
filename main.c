#include <stdio.h>

int main(void) {
    double d;           //入力
    double result;      //結果
    scanf("%lf",&d);   //入力をキーボードから入
    result=d*1.08;
    printf("%.2f\n", result);
    return 0;
}
