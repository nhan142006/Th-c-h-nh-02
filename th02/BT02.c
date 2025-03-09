#include <stdio.h>

int main() {
    int M, Y;
    int days;

    printf("Nhap vao thang M: ");
    scanf("%d", &M);
    printf("Nhap vao nam Y: ");
    scanf("%d", &Y);

    switch (M) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if ((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        default:
            printf("Thang khong hop le!\n");
            return 1;
    }

    printf("Thang %d nam %d co %d ngay.\n", M, Y, days);

    return 0;
}
