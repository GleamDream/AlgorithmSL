#include <stdio.h>

int gcd(int a, int b){
	int c;
	
	if (b == 0) {
		printf("a: Value = %10d, Addr = %p\n", a, &a);
		printf("b: Value = %10d, Addr = %p\n", b, &b);
		printf("c: Value = %10d, Addr = %p\n\n", c, &c);
		return (a);
	}
	
	c = gcd(b, a % b);
	printf("a: Value = %10d, Addr = %p\n", a, &a);
	printf("b: Value = %10d, Addr = %p\n", b, &b);
	printf("c: Value = %10d, Addr = %p\n\n", c, &c);
	return (c);
}

int main(void){
	int x = 27, y = 18, z, gcd();

	printf("----- Start -----\n");
	printf("x: Value = %10d, Addr = %p\n", x, &x);
	printf("y: Value = %10d, Addr = %p\n", y, &y);
	printf("z: Value = %10d, Addr = %p\n\n", z, &z);

	printf("-- Start GCD ---\n");
	z = gcd(x, y);
	printf("--- GCD Done ---\n");

	printf("x: Value = %10d, Addr = %p\n", x, &x);
	printf("y: Value = %10d, Addr = %p\n", y, &y);
	printf("z: Value = %10d, Addr = %p\n", z, &z);


	printf("\ngcd(%d, %d) = %d\n", x, y, z);

	return (0);
}

