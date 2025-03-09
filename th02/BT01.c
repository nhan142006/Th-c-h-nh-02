#include <stdio.h>

int main() {
    int X;
    int thu;

    printf("Nhap vao so ngay X: ");
    scanf("%d", &X);

    thu = (X % 7); 
    switch (thu) {
        case 0:
            printf("Sau %d ngay la Chu nhat.\n", X);
            break;
        case 1:
            printf("Sau %d ngay la Thu hai.\n", X);
            break;
        case 2:
            printf("Sau %d ngay la Thu ba.\n", X);
            break;
        case 3:
            printf("Sau %d ngay la Thu tu.\n", X);
            break;
        case 4:
            printf("Sau %d ngay la Thu nam.\n", X);
            break;
        case 5:
            printf("Sau %d ngay la Thu sau.\n", X);
            break;
        case 6:
            printf("Sau %d ngay la Thu bay.\n", X);
            break;
    }

    return 0;
}
