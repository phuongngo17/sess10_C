#include<stdio.h>
//tinh toan cac thuat toan sap xep va tim kiem 
void bble_sort(int arr[], int n){
	for(int i = 0; i < n -1; i++){
		for(int j = 0; j< n - i - 1; j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int binary_search(int arr[], int n, int x){
	int left = 0, right = n - 1;
	while(left <= right){
		int mind = (left + right)/2;
		if(arr[mind] == x){
			return mind;
		}
		else if(arr[mind] < x){
			left = mind + 1;
		}
		else{
			right = mind - 1;
		}
	}
	return -1;
	
}
int main(){
	// khoi tao va gan gia tri cho mang so nguyen bat ky
	int arr[] = {1, 3, 8, 20, 14, 17};
	int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("mang ban dau: \n");
    for(int i = 0; i < n; i++){
    	printf("%d ",arr[i]);
	}
	
	printf("\n");
	
	//goi ham sap xep
	bble_sort(arr,n);
	
	// sap xep mang
	printf("mang sau khi duoc sap xep: \n");
	for(int i = 0; i < n; i++){
		printf("%d ",arr[i]);
	}
	
	printf("\n");
	
	//nhap vao so can tim
	int x;
	printf("nhap vao mot so nguyen de tim kiem: \n");
	scanf("%d ",&x);
	
	//tim kiem nhi phan
	int position = binary_search(arr,n,x);
	if(position != -1){
		printf("so %d duoc tim thay o vi tri %d : ",x,position);
		
	}else{
		printf("so %d k ton tai trong mang",x);
	}
	return 0;
}
