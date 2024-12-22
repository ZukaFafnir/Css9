#include <stdio.h>

int main(void) {
    const int MAX_SIZE = 100;
    int arrayInt[MAX_SIZE];
    int currentLength = 0;

    int n;
    printf("Nhap so luong phan tu mang :");
    scanf("%d", &n);
    if (n <= 0 || n > MAX_SIZE) {
        printf("Gia tri nhap vao ko hop le\n");
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        printf("Nhap Array[%d] = ", i + 1);
        scanf("%d", &arrayInt[i]);
    }
    currentLength = n;

    if (currentLength == 0) {
        printf("Mang rong\n");
    } else {
        printf("Cac phan tu trong mang la :\n");
        for (int i = 0; i < currentLength; ++i) {
            printf("%d ", arrayInt[i]);
        }
        printf("\n");
    }

    if (currentLength == MAX_SIZE) {
        printf("Mang da day, ko the them\n");
        return 0;
    }
    int addIndex, valueInput;
    printf("Nhap vao gia tri can them: ");
    scanf("%d", &valueInput);
    printf("Nhap vi tri can them: ");
    scanf("%d", &addIndex);

    if (addIndex < 0 || addIndex > currentLength) {
        printf("Vi tri can them ko hop le\n");
        return 0;
    }

    for (int i = currentLength - 1; i >= addIndex; --i) {
        arrayInt[i + 1] = arrayInt[i];
    }

    arrayInt[addIndex] = valueInput;
    currentLength++;

    printf("Cac phan tu trong mang sau khi them moi :\n");
    for (int i = 0; i < currentLength; ++i) {
        printf("%d ", arrayInt[i]);
    }
    printf("\n");

    return 0;
}

