#include <stdio.h>

int main() {
    int n;
    int ks_ngan, ks_tram, ks_chuc, ks_donvi;

    printf("Nhap vao so n: ");
    scanf("%d", &n);

    ks_ngan = n / 1000;
    ks_tram = (n % 1000) / 100;
    ks_chuc = (n % 100) / 10;
    ks_donvi = n % 10;

    if (ks_ngan != 0) {
        printf("%d ", ks_ngan);
    }

    if (ks_tram != 0 || ks_ngan != 0) {
        printf("%d ", ks_tram);
    }

    if (ks_chuc != 0 || ks_tram != 0 || ks_ngan != 0) {
        printf("%d ", ks_chuc);
    }

    printf("%d\n", ks_donvi);

    return 0;
}