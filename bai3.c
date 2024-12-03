#include<stdio.h>
int main(){
	int arr[] = {5, 2, 4, 10, 7, 3, 13};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 1; i < n; i++){
		int key = arr[i];
		int j = i - 1;
		
		while(j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
		
	}
	printf("mang da chen: \n");
	for(int i = 0; i < n; i++ ){
		printf("%d ",arr[i]);
	}
	return 0;
}
