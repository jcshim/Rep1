#include <stdio.h>
int add(int a, int b) {
	return a + b;
}
int main() {
	int a, b;
	a = 2;
	b = 3;
	printf("%d\n", add(a, b));
}