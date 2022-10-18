#include<stdio.h>

int main()
{
	//x la luong
	float x;
		printf("Nhap so luong: ");
	scanf("%f", &x);
	//a la so thue
	float a;
	
	//b la luong rong
	float b;

	if(x>=0){
		if(x>15){
			a = x * 30/100;
			b = x - a;
			printf("Thue thu nhap voi muc thue suat 30%% la: %f \n", a);
			printf("Luong thuc nhan la: %f", b);
		} else{
			if(x>=7){
				a = x * 20/100;
				b = x - a;
				printf("Thue thu nhap voi muc thue suat 20%% la: %f \n", a);
				printf("Luong thuc nhan la: %f", b);
			} else{
				a = x * 10/100;
				b = x - a;
				printf("Thue thu nhap voi muc thue suat 10%% la: %f \n", a);
				printf("Luong thuc nhan la: %f", b);
			}
		}
	} else{
		printf("Khong the tinh thue thu nhap va luong thuc nhan");	
	}
}
