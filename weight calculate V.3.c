/* weight calculate V.3. */
#include <stdio.h>
#include <stdlib.h>
float bmi(float,float);
float bmr(float,float,int,int);
int gender(void);
void ask(void);
int main(void)
{
	ask();
	int d,age,g;
	float w,total,average,high;
	
	printf("�п�J����(��쬰����):");
	scanf("%f",&high);
	printf("\n");
	
	printf("�п�J�~��:");
	scanf("%d",&age);
	printf("\n");
	
	g=gender();
	
	for(d=1;d<=7;d++)
	{
		printf("�п�J��%d�Ѫ��魫: ",d);
		scanf("%f",&w);
		total+=w;
	}
	printf("\n");
	
	average=total/7.0;
	printf("7�Ѫ������魫��%.2f����. ",average);
	printf("BMI=%.1f ",bmi(average,high));
	printf("��¦�N�²v=%.2f\n",bmr(average,high,age,g));
	
	system("pause");
	return 0;
}

void ask(void)
{
	char name[15];
	printf("Please input your name:");
	scanf("%s",name);
	printf("Hello %s!\n\n",name);
	return;
}

float bmi(float a,float h)
{
	return a/(h*h);
}

float bmr(float a,float h,int age,int g)
{
	if(g=11)
		return 66+(13.7*a+5*100*h-6.8*age);
	if(g=22)
		return 655+(9.6*a+1.8*100*h-4.7*age);	
}

int gender(void)
{
	char ch;
	label:
	printf("�п�J�ʧO(�k=M,�k=W): ");
	scanf(" %c",&ch);
	
	switch(ch)
	{
		case'M':
		case'm':
			printf("\n");
			return 11;
			break;
		case'W':
		case'w':
			printf("\n");
			return 22;
			break;
		default:
			printf("��J���~,�ЦA��J�@��!\n");
			goto label;
	}
}
