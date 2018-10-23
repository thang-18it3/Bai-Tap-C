#include<stdio.h>
#include<conio.h>
#include<math.h>
int Tong(int m[100],int n){
	int tong=0;
	for(int i=0;i<n;i++){
		if (m[i]%2==0) tong = tong + m[i];
	}
	return tong;
}
void nhap(int mang[100],int n){
	for (int i=0;i<n;i++){
		printf("mang[%d]:",i);
		scanf("%d",&mang[i]);
	}
}
int main(){
	int n;
	int m[100];
	scanf("%d",&n);
	nhap(m,n);
	printf("tong cac phan tu chan trong mang la %d",Tong(m,n));
	
}

