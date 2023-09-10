// C program implementing the NOT gate

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int a[5] = { 1, 0, 1, 0, 1 };
	int i, ans;

	for (i = 0; i < 5; i++) {
		ans = !(a[i]);
		printf("\n NOT %d = %d", a[i], ans);
	}
}
