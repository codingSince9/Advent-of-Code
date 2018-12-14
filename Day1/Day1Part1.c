#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *ul, *il;
	int sum = 0, number;

	ul = fopen("file.txt", "r");

	while (1) {
		if (fscanf(ul, "%d", &number) != 1)
			break;
		sum += number;
	}
	
	printf("%d\n", sum);
  return 0;
}
