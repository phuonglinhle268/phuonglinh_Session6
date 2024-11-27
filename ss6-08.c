#include <stdio.h>

int main() {
	int tienGoc, laiSuat, tienLai;
	int thang;
	printf("Nhap so tien gui ban dau: ");
	scanf("%d", &tienGoc);
	printf("Nhap lai suat %: ");
	scanf("%d", &laiSuat);
	printf("Nhap so thang gui: ");
	scanf("%d", &thang);
	
	for (int i = 0; i < thang; i++) {
		tienLai = tienGoc * laiSuat / 100;
		tienGoc += tienLai;
	}
	printf("Tien lai cuoi thang la: %d VND\n", tienLai);
	printf("Tong so tien nhan duoc la: %d VND\n", tienGoc);
	
	return 0;
} 
