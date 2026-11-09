#include <stdio.h>

int main(void) {
    double d;           //入力
    double result;      //結果
    scanf("%lf",&d);   //入力をキーボードから入
    scanf("%lf",&d);  //入力をキーボードから入力
    result = d * 1.08;
    printf("Result = %.2f\n", result);         
    return 0;
}
