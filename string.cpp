#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char name[10];
	scanf("%s", name);

	if (strcmp(name, "kwon") == 0) {
		printf("%s, æ»≥Á.\n", name);
	}
	else {
		printf("%s¥‘, æ»≥Á«œººø‰.\n", name);
	}
}

