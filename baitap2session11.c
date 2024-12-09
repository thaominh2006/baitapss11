#include <stdio.h>
void inMang(int arr[],int kickCo);
int main(){
    int kichCo;
    printf("Nhap kich co mang: ");
    scanf("%d",&kichCo);
    int arr[kichCo];
    printf("\nNhap cac phan tu cua mang: \n");
    for (int i = 0; i < kichCo; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    inMang(arr,kichCo);
    return 0;
}
void inMang(int arr[], int kichCo) {
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < kichCo; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
