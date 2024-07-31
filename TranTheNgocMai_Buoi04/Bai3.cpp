#include <stdio.h>

// Hàm đệ quy tính tổng phân số
double tongPhanSoLe(int n) {
    if (n == 1) {
        return 1.0 / 3;  // Cơ sở của đệ quy
    }
    else {
        return 1.0 / (2 * n + 1) + tongPhanSoLe(n - 1);  // Đệ quy
    }
}

int main() {
    int n;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Nhap n >= 1.\n");
    }
    else {
        printf("Tong S(%d) = %.4f\n", n, tongPhanSoLe(n));
    }

    return 0;
}
