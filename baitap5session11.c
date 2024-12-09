#include <stdio.h>
#include <stdbool.h>

bool kiemTraSoNguyenTo(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) {
            return false;
        }
    }
    return true; 
}

int main() {
    int so1, so2;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &so2);
    if (kiemTraSoNguyenTo(so1)) {
        printf("%d là so nguyen to.\n", so1);
    } else {
        printf("%d không phai la so nguyen to.\n", so1);
    }
    if (kiemTraSoNguyenTo(so2)) {
        printf("%d là so nguyen to.\n", so2);
    } else {
        printf("%d không phai la so nguyen to.\n", so2);
    }

    return 0;
}
