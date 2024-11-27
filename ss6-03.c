#include <stdio.h>

int main() {
	char password[] = "12345";
	char input[100];
	
	printf("Nhap mat khau: ");
	scanf("%s", input);
	
	int i = 0;
	while (password[i] != '\0' && input[i] != '\0') {
		if (password[i] != input[i]) {
			printf("Mat khau nhap sai\n");
			return 0;
		}
		i++;
	}
	if (password[i] != '\0' && input[i] != '\0') {
		printf("Mat khau dung\n");
	} else {
		printf("Mat khau sai\n");
	}
	
	return 0;
} 
