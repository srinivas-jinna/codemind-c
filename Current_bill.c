#include<stdio.h>
int main(){
	float u,t1,t2,t3,m3,t4,m4;
	scanf("%f",&u);
	t1=u*1.2 + 100;
	t2=u*1.5 + 100;
	m3=u*1.8;
	t3=(u*1.8)+(m3*0.15);
	m4=u*2;
	t4=(u*2)+ (m4*0.15);
	if(u<200)
	{
		printf("%.2f",t1);
	}
	else if(u<400)
	{
		printf("%.2f",t2);
	}
	else if(u<600)
	{
		printf("%.2f",t3);
	}
	else
	{
		printf("%.2f",t4);
	}
}