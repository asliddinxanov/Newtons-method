#include<stdio.h>
#include<stdlib.h>
#define N 30 //�j���[�g���@�̎��s��

// f(x)
double f(double x) {
	return x * x + 2 * x + 1;
}

// f(x)�̔���
double df(double x) {
	return 2 * x + 2;
}

int main(void) {
	// �����l���
	double x1 = 1.0, x2;

	// �j���[�g���@
	for (int i = 0; i < N; i++) {
		// �����̌v�Z
		x2 = x1 - f(x1) / df(x1);
		// x2��x1�ɂ���
		x1 = x2;
		printf("x2= %f\n", x2);
	}

	// �����o��
	printf("��= %.f\n", x1);

	return 0;
}