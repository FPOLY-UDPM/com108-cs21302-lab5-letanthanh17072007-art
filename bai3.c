/******************************************************************************
 * Họ và tên: [Lê Tấn Thành]
 * MSSV:      [PS48491]
 * Lớp:       [COM108-C21302]
 ******************************************************************************/

#include <stdio.h>

// Hàm hoán vị sử dụng con trỏ (pointers)
void hoanVi(int *a, int *b) {
    int temp = *a; // Bước 1: Giữ giá trị của a vào biến tạm
    *a = *b;       // Bước 2: Gán giá trị của b cho a
    *b = temp;     // Bước 3: Gán giá trị tạm (a cũ) cho b
}

int main() {
    int x, y;

    // Nhập dữ liệu từ bàn phím
    printf("Nhập số a: ");
    scanf("%d", &x);
    printf("Nhập số b: ");
    scanf("%d", &y);

    printf("\nTrước khi hoán vị: a = %d, b = %d\n", x, y);

    // Gọi hàm theo tham chiếu (truyền địa chỉ của x và y)
    hoanVi(&x, &y);

    printf("Sau khi hoán vị:  a = %d, b = %d\n", x, y);

    return 0;
}
