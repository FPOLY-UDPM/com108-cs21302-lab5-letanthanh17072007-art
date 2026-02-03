/******************************************************************************
 * Họ và tên: [Lê Tấn Thành]
 * MSSV:      [PS48491]
 * Lớp:       [COM108-C21302]
 ******************************************************************************/
#include <stdio.h>

// Tạo hàm tìm số lớn nhất
int timMax(int a, int b, int c) {
    int max = a; // Giả sử a là số lớn nhất

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    return max;
}

int main() {
    int n1, n2, n3;

    // Nhập từ bàn phím 3 số bất kỳ
    printf("Nhập số thứ nhất: ");
    scanf("%d", &n1);
    printf("Nhập số thứ hai: ");
    scanf("%d", &n2);
    printf("Nhập số thứ ba: ");
    scanf("%d", &n3);

    // Gọi hàm trong hàm main
    int soMax = timMax(n1, n2, n3);

    // Xuất ra màn hình
    printf("Giá trị lớn nhất trong 3 số là: %d\n", soMax);

    return 0;
}