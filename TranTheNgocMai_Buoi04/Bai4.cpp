#include <stdio.h>

// Hàm đệ quy tính tổng của các tích
int tongTich(int n) {
    if (n == 1) {
        return 1 * 2;  // Cơ sở của đệ quy
    }
    else {
        return n * (n + 1) + tongTich(n - 1);  // Đệ quy
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
        printf("Tong S(%d) = %d\n", n, tongTich(n));
    }

    return 0;
}
