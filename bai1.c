#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho mang
    int arr[] = {4, 7, 2, 8, 5, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]); // Tinh do dai cua mang

    int element;
    int found = 0; // Bien de kiem tra phan tu co ton tai hay khong

    //nguoi dung nhap vao mot phan tu
    printf("Nhap vao phan tu can kiem tra: ");
    scanf("%d", &element);

    // Kiem tra xem phan tu co ton tai trong mang khong
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            printf("Vi tri phan tu trong mang la: %d\n", i);
            found = 1; 
            break;
        }
    }

    // Neu phan tu khong ton tai trong mang
    if (!found) {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}

