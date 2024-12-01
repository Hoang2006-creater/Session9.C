#include <stdio.h>

int main() {
    int array[100]; 
    int currentLength = 0; 
    int n, del_Index;

    // Nhap so luong phan tu
    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &n);

    // Kiem tra so luong phan tu hop le
    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le!\n");
        return 0;
    }

    // Nhap cac phan tu vao mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &array[i]);
    }
    currentLength = n;

    // Hien thi mang ban dau
    printf("Mang ban dau: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Yeu cau nhap vi tri can xoa
    printf("Nhap vi tri can xoa (tu 0 den %d): ", currentLength - 1);
    scanf("%d", &del_Index);

    // Kiem tra vi tri hop le
    if (del_Index < 0 ||del_Index >= currentLength) {
        printf("Vi tri khong hop le!\n");
    } else {
        // Thuc hien xoa phan tu tai vi tri deleteIndex
        for (int i = del_Index; i < currentLength - 1; i++) {
            array[i] = array[i + 1];
        }
        currentLength--; 

        // Hien thi mang sau khi xoa
        printf("Mang sau khi xoa: ");
        for (int i = 0; i < currentLength; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}

