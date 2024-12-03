#include<stdio.h>
int main(){
	// khoi tao va gan gia tri bat ky 
	int arr[] = {10, 2, 6, 9, 3, 5, 7};
	// kiem tra do dai mang
	int n = sizeof(arr)/sizeof(arr[0]);
	//su dung thuat toan sap xep chon 
	for(int i = 0; i < n -1; i++){
		int mix_idx = i;
		for(int j = i + 1; j < n; j++){
			if(arr[j] < arr[mix_idx]){
				mix_idx = j;
			}
		}
		int temp = arr[mix_idx];
		arr[mix_idx] = arr[i];
		arr[i] = temp;
	}
	printf("mang da selection sort : \n");
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
