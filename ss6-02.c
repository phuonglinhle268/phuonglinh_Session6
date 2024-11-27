#include <stdio.h>

int main() {
	int so[5];
	int so_chan = 0, so_le = 0;
	int i; 
	printf("Nhap vao 5 so nguyen: \n");
	for (i = 0; i < 5; i++) {
		printf("Hay nhap so thu %d: ", i + 1);
		scanf("%d", &so[i]);
	}
	
	for (i = 0; i < 5; i++) {
		if (so[i] % 2 == 0) {
			so_chan++;
		} else {
			so_le++;
		}
	}
	printf("So so chan la: %d.\n", so_chan);
	printf("So so le la: %d.\n", so_le);
	
	return 0;
}
