#include<stdio.h>
int main(){
	int soCu, soMoi;
	int soDien;
	long long tienDien=0;
	printf("Nhap chi so dien cu: ");
	scanf("%d",&soCu);
	printf("Nhap chi so dien moi: ");
	scanf("%d",&soMoi);
	soDien=soMoi-soCu;
	if(soDien<0){
		printf("Chi so dien khong hop le");
		return 1;
	}
	if(soDien<=50){
		tienDien=soDien*10000;
	}else if(soDien<=100){
		tienDien=50*10000+(soDien-50)*15000;
	}else if(soDien<=150){
		tienDien=50*10000+50*15000+(soDien-100)*20000;
	}else if(soDien<=200){
		tienDien=50*10000+50*15000+50*20000+(soDien-150)*25000;
	}else{
		tienDien=50*10000+50*15000+50*20000+50*25000+(soDien-200)*30000;
	}
	printf("So dien tieu thu: %d KWh\n",soDien);
	printf("So tien dien phai tra: %d VND\n",tienDien);
	return 0;
}
