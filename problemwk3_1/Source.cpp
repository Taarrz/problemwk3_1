#include<stdio.h>
int main() {
	int x,d,a;
	scanf_s("%d", &x);
	int i = 1;
	if (x > 100) {
		while (i <= 3) {
			a = x % 1000;
			x = x * 10;
			if (i != 3) {
				printf("%d , ", a / 100);
			}
			else {
				printf("%d", a / 100);
			}
			i++;
		}
	}
	else {
		printf("error");
	}
	return 0;
}
