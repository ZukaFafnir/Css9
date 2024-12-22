#include <stdio.h>

int main(void) {
    const int MAX_SIZE = 100;
    int arrayInt[MAX_SIZE];
    int size = 0;
    
    printf("==============MENU================\n");
    printf("1. Nhap phan tu cho mang\n");
    printf("2. HIen thi mang\n");
    printf("3. Them moi phan tu vao mang\n");
    printf("4. Sua gia tri \n");
    printf("5. Xoa phan tu\n");
    printf("6. Thoat\n");
    int choice;
    printf("Hay nhap lua chon :");
    scanf("%d", &choice);
    
    while (1) {
        switch (choice) {
            case 1:
                int n;
                printf("Hay nhap so luong phan tu mang :");
                scanf("%d", &n);
                if (n <= 0 || n > MAX_SIZE) {
                    printf("Gia tri nhap vao ko hop le\n");
                    break;
                }
                for (int i = 0; i < n; ++i) {
                    printf("Nhap Array[%d] = ", i + 1);
                    scanf("%d", &arrayInt[i]);
                }
                size = n;
                break;
            case 2:
                if (size == 0) {
                    printf("Mang rong\n");
                    break;
                }
                printf("Cac phan tu trong mang la :\n");
                for (int i = 0; i < size; ++i) {
                    printf("%d ", arrayInt[i]);
                }
                printf("\n");
                break;
            case 3:
                if (size == MAX_SIZE) {
                    printf("Mang da day, ko them them nua\n");
                    break;
                }
                int addIndex, valueInput;
                printf("Hay nhap vao gia tri can them: ");
                scanf("%d", &valueInput);
                printf("Hay nhap vi tri can them: ");
                scanf("%d", &addIndex);

                if (addIndex < 0) {
                    addIndex = 0;
                } else if (addIndex > size) {
                    addIndex = size;
                }

                for (int i = size - 1; i >= addIndex; --i) {
                    arrayInt[i + 1] = arrayInt[i];
                }

                arrayInt[addIndex] = valueInput;
                size++;
                printf("Da them moi thanh cong\n");
                break;
            case 4:
                int editIndex, newValue;
                printf("Hay nhap vi tri can sua: ");
                scanf("%d", &editIndex);

                if (editIndex < 0 || editIndex > size - 1) {
                    printf("Vi tri can sua ko hop le\n");
                } else {
                    printf("Hay nhap vao gia tri moi [gia tri cu = %d]: ", arrayInt[editIndex]);
                    scanf("%d", &newValue);
                    arrayInt[editIndex] = newValue;
                    printf("Da cap nhat gia tri\n");
                }
                break;
            case 5:
                int deleteIndex;
                printf("Hay nhap vi tri can xoa: ");
                scanf("%d", &deleteIndex);
                if (deleteIndex < 0 || deleteIndex > size - 1) {
                    printf("Vi tri can xoa ko hop le\n");
                } else {
                    for (int i = deleteIndex; i < size - 1; ++i) {
                        arrayInt[i] = arrayInt[i + 1];
                    }
                    size--;
                    printf("Da xoa thanh cong\n");
                }
                break;
            case 6:
                printf("Thoat chuong trinh\n");
                return 0;
            default:
                printf("Lua chon ko hop le : vui long nhap tu 1 - 6\n");
        }
    }

    return 0;
}

