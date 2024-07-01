#include <stdio.h>
#include <math.h>
int main(void) {
	int a, b, v;
	scanf_s("%d%d%d", &a, &b, &v);
	if ((v - b) % (a - b) == 0)	printf("%d", (v - b) / (a - b));
	else	printf("%d", (v - b) / (a - b) + 1);
	return 0;
}
