#include <stdio.h>

/*

//재귀함수
int factorial(int n) {

	printf("factorial 진입 n: %d\n", n);
	if (n > 0){
		int result = factorial(n - 1);
		printf("factorial  진출 n: %d\n");
		return n * result;
}
	else
		return 1;
}
int main(void) {
	int x;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &x);
	printf("%d의 순차곱셈 값은 %d입니다.\n", x, factorial(x));

	return 0;

}
*/

//유클리드 호제법
int gcd(int x, int y) {
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int main(void) {

	int x, y;
	puts("두 정수의 최대공약수를 구합니다.");
	printf("정수를 입력하세요: ");
	scanf_s("%d", &x);
	printf("정수를 입력하세요: ");
	scanf_s("%d", &y);
	printf("최대공약수는 %d입니다. \n", gcd(x, y));

	return 0;
}
