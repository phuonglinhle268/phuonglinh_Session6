#include <stdio.h>
#include <math.h>

int main() {
	int num, sum;
	int number1, number2, number3;
	printf("Cac so Armstrong 3 chu so: \n");
	for (num = 100; num <= 999; num++) {
		number1 = num / 100;
		number2 = (num / 10) % 10;
		number3 = num % 10;
		
		sum = pow(number1, 3) + pow(number2, 3) + pow(number3, 3);
		
		if (sum == num) {
			printf("%d", num);
		}
	}
	printf("\n");
	
	return 0;
}
