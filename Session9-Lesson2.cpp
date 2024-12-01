#include<stdio.h>
int main(){
	int array[] = {1,2,3,4,5,};
	int size = sizeof(array)/sizeof(array[0]);
	int index, new_value;
	
	printf("Mang ban dau: ");
	for(int i = 0;i<size;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
	
	printf("Moi ban nhap vao vi tri(tu 0 den %d) ",size - 1);
	scanf("%d",&index);
	if(index >= 0 && index < size){
		printf("Moi ban nhap gia tri vao vi tri %d", index);
		scanf("%d",&new_value); 
	 array[index]=new_value;
	 for(int i = 0;i<size;i++){
		printf("%d ",array[i]);
	} 
	printf("\n");
	}else
	printf("Vi tri nhap khong hop le\n");  
	 
	 
	
	return 0;
}
