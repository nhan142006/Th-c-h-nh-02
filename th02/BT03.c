#include <stdio.h>
#include <stdlib.h>

int main() {
    float diem;
    printf("Nhập điểm: ");
    scanf("%f", &diem);

    if (diem < 0.0 || diem > 10.0) {
        printf("Điểm không hợp lệ! Vui lòng nhập điểm từ 0 đến 10.\n");
        return 0;
    }

    if (0.0 <= diem && diem < 3.0) {
        printf("Sinh viên xếp loại kém\n");
        printf("Thang điểm theo hệ 4: điểm chữ F và điểm số %.1f\n", 0.0);
    } else if (3.0 <= diem && diem < 4.0) {
        printf("Sinh viên xếp loại yếu\n");
        printf("Thang điểm theo hệ 4: điểm chữ D và điểm số %.1f\n", 1.0);
    } else if (4.0 <= diem && diem < 5.0) {
        printf("Sinh viên xếp loại trung bình yếu\n");
        printf("Thang điểm theo hệ 4: điểm chữ D+ và điểm số %.1f\n", 1.5);
    } else if (5.0 <= diem && diem < 6.0) {
        printf("Sinh viên xếp loại trung bình\n");
        printf("Thang điểm theo hệ 4: điểm chữ C và điểm số %.1f\n", 2.0);
    } else if (6.0 <= diem && diem < 7.0) {
        printf("Sinh viên xếp loại trung bình khá\n");
        printf("Thang điểm theo hệ 4: điểm chữ B và điểm số %.1f\n", 2.5);
    } else if (7.0 <= diem && diem < 8.0) {
        printf("Sinh viên xếp loại khá\n");
        printf("Thang điểm theo hệ 4: điểm chữ B+ và điểm số %.1f\n", 3.0);
    } else if (8.0 <= diem && diem < 9.0) {
        printf("Sinh viên xếp loại giỏi\n");
        printf("Thang điểm theo hệ 4: điểm chữ A và điểm số %.1f\n", 3.5);
    } else if (9.0 <= diem && diem <= 10.0) {
        printf("Sinh viên xếp loại xuất sắc\n");
        printf("Thang điểm theo hệ 4: điểm chữ A+ và điểm số %.1f\n", 4.0);
    }

    return 0;
}
