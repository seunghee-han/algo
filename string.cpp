#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char name[10];
	scanf("%s", name);

	if (strcmp(name, "kwon") == 0) {
		printf("%s, �ȳ�.\n", name);
	}
	else {
		printf("%s��, �ȳ��ϼ���.\n", name);
	}
}
