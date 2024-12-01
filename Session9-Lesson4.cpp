#include <stdio.h>

int main() {
    int array[100]; // Mang luu tru toi da 100 phan tu
    int currentLength = 0; // So luong phan tu hien co trong mang
    int choice, value, index;

    do {
        // Hien thi menu
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Nhap vao mang
                printf("Nhap so luong phan tu (toi da 100): ");
                scanf("%d", &currentLength);

                if (currentLength <= 0 || currentLength > 100) {
                    printf("So luong phan tu khong hop le!\n");
                    currentLength = 0;
                    break;
                }

                printf("Nhap cac phan tu cua mang:\n");
                for (int i = 0; i < currentLength; i++) {
                    printf("Phan tu [%d]: ", i);
                    scanf("%d", &array[i]);
                }
                break;

            case 2: // Hien thi mang
                if (currentLength == 0) {
                    printf("Mang chua duoc nhap!\n");
                } else {
                    printf("Mang hien tai: ");
                    for (int i = 0; i < currentLength; i++) {
                        printf("%d ", array[i]);
                    }
                    printf("\n");
                }
                break;

            case 3: // Them phan tu
                if (currentLength >= 100) {
                    printf("Mang da day, khong the them phan tu!\n");
                } else {
                    printf("Nhap phan tu can them: ");
                    scanf("%d", &value);
                    array[currentLength] = value;
                    currentLength++;
                    printf("Phan tu da duoc them!\n");
                }
                break;

            case 4: // Sua phan tu
                printf("Nhap vi tri phan tu muon sua (tu 0 den %d): ", currentLength - 1);
                scanf("%d", &index);

                if (index < 0 || index >= currentLength) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    printf("Nhap gia tri moi cho phan tu [%d]: ", index);
                    scanf("%d", &value);
                    array[index] = value;
                    printf("Phan tu da duoc sua!\n");
                }
                break;

            case 5: // Xoa phan tu
                printf("Nhap vi tri phan tu muon xoa (tu 0 den %d): ", currentLength - 1);
                scanf("%d", &index);

                if (index < 0 || index >= currentLength) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = index; i < currentLength - 1; i++) {
                        array[i] = array[i + 1];
                    }
                    currentLength--;
                    printf("Phan tu da duoc xoa!\n");
                }
                break;

            case 6: // Thoat
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 6); // Lap lai menu cho den khi nguoi dung chon thoat

    return 0;
}

