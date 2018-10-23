#include<stdio.h>
#include<conio.h>
#include<math.h>
void NhapMang(int array[100],int n){
	for (int i=0;i<n;i++){
		printf("mang[%d]=",i);
		scanf("%d",&n);
	}
}
void InMang(int array[100],int n){
	for(int i=0;i<n;i++){
		printf("\n mang[%d]=%d",i,array[i]);
	}
}
int Tong(int array[100],int n){
	int tong=0;
	for(int i=0;i<n;i++){
		tong=tong;
	}
}
double TienDien(int a,int b){
	double tien=0;
	if (a>b) {
		int tt=a-b;
		if(tt<=50) tien = tt*1500;
	    else if (tt>50 && tt<=100) tien = 50*1500+(tt-50)*2000;
		else tien = 50*1500+50*2000+(tt-150)*3000; 
	} else printf("so dien moi nho hon so dien cu");
	return tien;
}
int main(){
	int SDM,SDC;
	scanf("%d",&SDM);scanf("%d",&SDC);
	double TongTien=TienDien(SDM,SDC);
	printf("%d",TongTien);
}
