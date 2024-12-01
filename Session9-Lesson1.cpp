#include <stdio.h>
int main() {
    int array[100];
    int currentLength = 0; 
    int n, addIndex, newValue;

    // Nhap so luong phan tu ban dau
    printf("Nhap so phan tu ban dau (toi da 100): ");
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

    // Yeu cau nguoi dung nhap vi tri va gia tri can them vao mang
    printf("Nhap vi tri muon them phan tu (tu 0 den %d): ", currentLength);
    scanf("%d", &addIndex);

    // Kiem tra vi tri hop le
    if (addIndex < 0 || addIndex > currentLength) {
        printf("Vi tri khong hop le!\n");
    } else {
        printf("Nhap gia tri muon them: ");
        scanf("%d", &newValue);

        if (addIndex == currentLength) {
            array[currentLength] = newValue;
            currentLength++;
        } else {
            // Dich chuyen cac phan tu tu vi tri addIndex len 1 vi tri
            for (int i = currentLength; i > addIndex; i--) {
                array[i] = array[i - 1];
            }
            // Them gia tri moi vao vi tri addIndex
            array[addIndex] = newValue;
            currentLength++;
        }

        // Hien thi mang sau khi them
        printf("Mang sau khi them: ");
        for (int i = 0; i < currentLength; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}

