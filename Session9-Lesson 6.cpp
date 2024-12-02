#include <stdio.h>

int nhapMang(int arr[][100], int *n, int *m) {
    printf("Nhap so dong: ");
    scanf("%d", n);
    printf("Nhap so cot: ");
    scanf("%d", m);

    for (int i = 0; i < *n; i++) {
        for (int j = 0; j < *m; j++) {
            printf("Nhap phan tu arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    return 1; // Tra ve thanh cong
}

int inMaTran(int arr[][100], int n, int m) {
    printf("Ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 1;
}

int inLeVaTinhTong(int arr[][100], int n, int m) {
    int tong = 0;
    printf("Cac phan tu le: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] % 2 != 0) {
                printf("%d ", arr[i][j]);
                tong += arr[i][j];
            }
        }
    }
    printf("\nTong cac phan tu le: %d\n", tong);
    return tong;
}

int inDuongBienVaTinhTich(int arr[][100], int n, int m) {
    int tich = 1;
    printf("Cac phan tu tren duong bien: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                printf("%d ", arr[i][j]);
                tich *= arr[i][j];
            }
        }
    }
    printf("\nTich cac phan tu tren duong bien: %d\n", tich);
    return tich;
}

int inDuongCheoChinh(int arr[][100], int n, int m) {
    printf("Cac phan tu tren duong cheo chinh: ");
    for (int i = 0; i < n && i < m; i++) {
        printf("%d ", arr[i][i]);
    }
    printf("\n");
    return 1;
}

int inDuongCheoPhu(int arr[][100], int n, int m) {
    printf("Cac phan tu tren duong cheo phu: ");
    for (int i = 0; i < n && i < m; i++) {
        printf("%d ", arr[i][m - 1 - i]);
    }
    printf("\n");
    return 1;
}

int dongCoTongLonNhat(int arr[][100], int n, int m) {
    int max_tong = -1, max_dong = -1;
    for (int i = 0; i < n; i++) {
        int tong = 0;
        for (int j = 0; j < m; j++) {
            tong += arr[i][j];
        }
        if (tong > max_tong) {
            max_tong = tong;
            max_dong = i;
        }
    }
    printf("Dong co tong lon nhat la dong %d voi tong la %d\n", max_dong, max_tong);
    return max_dong;
}

int main() {
    int arr[100][100];
    int n, m, luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
        case 1:
            nhapMang(arr, &n, &m);
            break;
        case 2:
            inMaTran(arr, n, m);
            break;
        case 3:
            inLeVaTinhTong(arr, n, m);
            break;
        case 4:
            inDuongBienVaTinhTich(arr, n, m);
            break;
        case 5:
            inDuongCheoChinh(arr, n, m);
            break;
        case 6:
            inDuongCheoPhu(arr, n, m);
            break;
        case 7:
            dongCoTongLonNhat(arr, n, m);
            break;
        case 8:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }
    } while (luaChon != 8);

    return 0;
}

