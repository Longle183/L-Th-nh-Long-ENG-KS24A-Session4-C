#include<stdio.h>
int main(){
	int number;
	printf("Hay nhap vao so nguyen: ");
	scanf("%d",&number);
	if(number>0){
		printf("Day la so duong");
	}else{
		printf("Day la so am");
	}
	return 0;
}
