#include<stdio.h>
int main()
{
	int sumA=0,sumB=0,num1=0,num2=0,num3=0,num4=0,num5=0,num6=0,flagA=0,flagB=0,trans=0;
	scanf("%d %d %d %d %d %d",&num1,&num2,&num3,&num4,&num5,&num6);
	sumA=num1+num2+num3;
	sumB=num4+num5+num6;
	flagA=(num1==num2&&num1==num3&&num2==num3);
	flagB=(num4==num5&&num4==num6&&num5==num6);
	if(flagA==1&&flagB==1)
	{
		if(sumA<sumB)
		{
			printf("B");
		}
		if(sumA>sumB)
		{
			printf("A");
		}
		if(sumA==sumB)
		{
			printf("=");
		}
	}
	if(flagA==1&&flagB!=1)
	{
		printf("A");
	}
	if(flagA!=1&&flagB==1)
	{
		printf("A");
	}
	if(flagA==1&&flagB!=1)
	{
		printf("B");
	}
	if(flagA!=1&&flagB!=1)
	{
		if(sumA<=10&&sumB<=10)
		{
			if(sumA<sumB)
			{
				printf("A");
			}
			if(sumA>sumB)
			{
				printf("B");
			}
			if(sumA==sumB)
			{
				printf("=");
			}
		}
		if(sumA>=11&&sumB>=11)
		{
			if(sumA>sumB)
			{
				printf("A");
			}
			if(sumA<sumB)
			{
				printf("B");
			}
			if(sumA==sumB)
			{
				printf("=");
			}
		}
		if(sumA<=10&&sumB>=11)
		{
			trans=21-sumA;
			if(trans>=sumB)
			{
				printf("A");
			}
			if(trans<sumB)
			{
				printf("B");
			}	
			if(trans==sumB)
			{
				printf("=");
			}
		}
		if(sumA>=11&&sumB<=10)
		{
			trans=21-sumB;
			if(trans>=sumA)
			{
				printf("B");
			}
			if(trans<sumA)
			{
				printf("A");
			}	
			if(trans==sumB)
			{
				printf("=");
			}
		}
	}
}



