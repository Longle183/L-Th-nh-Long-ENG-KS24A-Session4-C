#include<stdio.h>
int main(){
	int num1, num2, num3;
	printf("Moi ban nhap vao so thu nhat: ");
	scanf("%d",&num1);
	printf("Moi ban nhap vao so thu hai: ");
	scanf("%d",&num2);
	printf("Moi ban nhap vao so thu ba: ");
	scanf("%d",&num3);
	int min=num1<num2?num1:num2;
    int max=num1>num2?num1:num2;
    if(num3>min&&num3<max){
    	printf("So %d nam trong khoang giua cua %d va %d",num3, num1, num2);
	}else{
		printf("So %d khong nam trong khoang giua cua %d va %d",num3, num1, num2);
	}
	return 0;
}
