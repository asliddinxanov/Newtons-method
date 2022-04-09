#include<stdio.h>
#include<stdlib.h>
#define N 30 //ニュートン法の試行回数

// f(x)
double f(double x) {
	return x * x + 2 * x + 1;
}

// f(x)の微分
double df(double x) {
	return 2 * x + 2;
}

int main(void) {
	// 初期値代入
	double x1 = 1.0, x2;

	// ニュートン法
	for (int i = 0; i < N; i++) {
		// 公式の計算
		x2 = x1 - f(x1) / df(x1);
		// x2をx1にする
		x1 = x2;
		printf("x2= %f\n", x2);
	}

	// 解を出力
	printf("解= %.f\n", x1);

	return 0;
}