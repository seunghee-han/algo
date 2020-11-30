#include<stdio.h>
void swap_ptr(char** x, char** y){
	char* tmp = *x;
	*x = *y;
	*y = tmp;
}

int main(){
	char* s1 = (char*)"ABCD";
	char* s2 = (char*)"EFGH";
	printf("포인터 s1은 \"%s\"를 가리킵니다. \n", s1);
	printf("포인터 s2은 \"%s\"를 가리킵니다. \n", s2);
	swap_ptr(&s1, &s2);
	puts("\n포인터 s1과 s2의 값을 서로 교환했습니다. \n");
	printf("포인터 s1은 \"%s\"를 가리킵니다. \n", s1);
	printf("포인터 s2은 \"%s\"를 가리킵니다. \n", s2);
	return 0;
}
