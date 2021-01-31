#include <stdio.h>

int pow(int x, int n) {
	if (n == 0) return (1);
	else return x * pow(x, n - 1);
}

int main(void) {
	int n, i, x, k;
	int a[128];

	printf("::: 多項式の計算 :::\n\n");
	printf("最大次数を設定してください: ");
	scanf("%d", &n);
	printf("\n");

	printf("各項の係数を入力してください\n");
	for (i = n; i>= 0; i --) {
		printf("  次数が %2d の項の係数: ", i);
		scanf("%d", &a[i]);
	}
	printf("\n");

	printf(" x の値を入力してください: ");
	scanf("%d", &x);
	printf("\n");

	printf("---------------------------------\n");
	printf("入力した多項式\n");
	for (i = n; i >= 1; i--) {
		printf("%d*%d^%d + ", a[i], x, i);
	}
	printf(" %d*%d^%d \n", a[i], x, i);

	k = 0;
	for (i = n; i >= 0; i--)
		k += a[i] * pow(x, i);


	printf("\n答え: %d\n", k);

	return (0);
}
