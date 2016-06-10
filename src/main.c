#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "roots.h"

int main(int argc, char *argv[])
{
	if (argc < 4) {
		fprintf(stderr, "Please, enter your coefficients!\n");
		exit(EXIT_FAILURE);
	}

	int a, b, c;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = atoi(argv[3]);

	if (a == 0) {
		fprintf(stderr, "First coefficient must be positive!\n");
		exit(EXIT_FAILURE);
	}

	double x1, x2;
	int amount;
	roots(a, b, c, &amount, &x1, &x2);

	return EXIT_SUCCESS;
}