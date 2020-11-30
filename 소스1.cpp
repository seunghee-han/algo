#include<stdio.h>
#include<stdio.h>
int main()
{
char st[10] = "ABCD";
printf("문자열 st에는 \"%s\"가 들어 있습니다.", st);
return 0;
}

/*
#include<stdio.h>
#include<limits.h>
void str_dump(const char* s)
{
do {
int i;
printf("%c %0*X", *s, (CHAR_BIT + 3) / 4, *s);
for (i = CHAR_BIT - 1; i >= 0; i--)
putchar(((*s >> i) & 1U) ? '1' : '0');
putchar('\n');
} while (*s++ != '\0');
}
int main()
{
str_dump("STRING");
return 0;
}
*/

/*
#include<stdio.h>
int main() {
char st[10];
st[0] = 'A';
st[1] = 'B';
st[2] = 'C';
st[3] = 'D';
st[4] = '\0';
printf("문자열 st에는 \"%s\"가 들어 있습니다.\n", st);
return 0;
}
*/
