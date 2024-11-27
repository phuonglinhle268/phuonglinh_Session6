#include <stdio.h>

int kiem_tra(int n) {
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) {
            return 0;  
        }
    }
    return 1; 
}

int main() {
    int n;
    printf("Nhap so nguyen bat ki: ");
    scanf("%d", &n);

    if (kiem_tra(n)) {
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d khong phai so nguyen to.\n", n);
    }

    return 0;
}
