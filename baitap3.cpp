#include<stdio.h>

int main()
{
	//a, b, c diem bai kiem tra, diem thi giua ky, diem cuoi ky
	float a, b, c;
	 
	//x la diem trung binh 
	float x;
	
	printf("Nhap bai kiem tra: ");
	scanf("%f", &a);	
	printf("Nhap diem thi giua ky: ");
    scanf("%f", &b);	
    printf("Nhap diem cuoi ky: ");
	scanf("%f", &c);	
	if(a>=0 && b>=0 && c>=0){
		x = (a+b+c)/3;
		if(x>=9){
			printf("Hoc luc hang A");
		} else{
			if(x>=7){
				printf("Hoc luc hang B");
			} else{
				if(x>=5){
					printf("Hoc luc hang C");
				} else{
					 printf("Hoc luc hang F");
				}
			}
		}
	} else{
		printf("Khong the xep hang hoc luc");
	}
}
