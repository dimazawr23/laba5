#include <stdio.h>
#include <math.h>

int main()
{
	float a;
	float b;
	float c;
	int status;
	Roots answer;

	printf("Input your A, B, C for equation\n");
	scanf("%f %f %f", &a, &b, &c);
	
	answer = solve(a, b, c, &status);
	if (status > 0) {
		printf("Roots of the equation: %.2f & %.2f\n", answer.x1, answer.x2);
	}
	else
		printf("Non-quadratic equation\n");

	return 0;
}
