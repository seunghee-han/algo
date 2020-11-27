#include <stdio.h>
#include <string.h>

int main() {
	char name[10];

	scanf("%s", name);

	if (strcmp(name, "ÇÑ½ÂÈñ") == 0) {
		printf("%s, ¾È³ç\n", name);
	}
	else {
		printf("%s´Ô, ¾È³çÇÏ¼¼¿ä\n",name)''
	}
}