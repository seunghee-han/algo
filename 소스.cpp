#include <stdio.h>

/*
int factorial(int n) {

	printf("factorial ���� n: %d\n", n);
	if (n > 0){
		int result = factorial(n - 1);
		printf("factorial  ���� n: %d\n");
		return n * result;
}
	else
		return 1;
}
int main(void) {
	int x;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &x);
	printf("%d�� �������� ���� %d�Դϴ�.\n", x, factorial(x));

	return 0;

}
*/

int gcd(int x, int y) {
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int main(void) {

	int x, y;
	puts("�� ������ �ִ������� ���մϴ�.");
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &x);
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &y);
	printf("�ִ������� %d�Դϴ�. \n", gcd(x, y));

	return 0;
}