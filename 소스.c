#include <stdio.h>
#include <stdlib.h>
#define swap(type, x,y) do{type t=x;x=y;y=t;} while(0)
/* �ܼ� ���� ����
// ��Ƚ��: (n^2-n)/2
void selection(int a[], int n) {

	int i, j;
	for (i = 0; i < n - 1; i++) {
		int min = i;
		for (j = i + 1; j < n; j++)
			if (a[j] < a[min])
				min = j;
		swap(int, a[i], a[min]);
	}
}
*/

void insertion(int a[], int n) {
	int i, j;
	for (i = 1; i < n; i++) {
		int tmp = a[i];
		for (j = i; j > 0 && a[j - 1] > tmp; j--)
			a[j] = a[j - 1];
		a[j] = tmp;
	}
}

int main(void) {
	int i, nx;
	int* x;
	puts("�ܼ� ���� ����");

	printf("��Ұ���: ");
	scnaf("%d", &nx);
	x = calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++) {
		printf("x[%d]: ", i);
		scanf_s("%d", &x[i]); 
	}

	insertion(x, nx);

	puts("������������ �����߽��ϴ�.");
	for (i = 0; i < nx; i++)
		printf("x[%d]=%d\n", i, x[i]);

	free(x);

	return 0;
}