#include<stdio.h>

int main()
{
	//x la tong doanh so.
	float x;
	
	printf("Nhap tong doanh so: ");
	scanf("%f", &x);
	//a la so tien hoa hong.
	float a;
	
	if(x>=0){
		if(x<=300){
			if(x<=100){
				a = x*5/100;
				printf("Voi tong doanh so la %f", x);
				printf(" thi hoa hong se nhan duoc la %f", a);
			} else{
				a = x*10/100;
				printf("Voi tong doanh so la %f", x);
				printf(" thi hoa hong se nhan duoc la %f", a);
			}
		} else{
			a = x*20/100;
			printf("Voi tong doanh so la %f", x);
			printf(" thi hoa hong se nhan duoc la %f", a);	
		}
	} else{
		printf("khong the tinh so hoa hong ban nhan duoc");
	}
}
