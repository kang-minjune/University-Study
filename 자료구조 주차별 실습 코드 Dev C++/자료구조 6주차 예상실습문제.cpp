#include"stdio.h"
#include"math.h"
#include"stdlib.h"
#include "iostream"
/*
int main()//6���� �ǽ� ���� ���� 1)�迭�� �̿��Ͽ� 3���� ������ �Է¹޾� �ջ�� ��� ���ϱ� 
{
	int korea[5],english[5],math[5], i, j, sum[5] ,ag[5] ;
	char name[100] ;
	
	for(i=1; i<=3; i++)
	{
		scanf("%d%d%d", &korea[i], &english[i], &math[i]) ;
		sum[i]= korea[i] + english[i] + math[i] ;
		printf("%d�� �л��� ���� ����  = %d\n",i,sum[i]);
	}
	printf("\n");
	for(i=1; i<=3; i++)
	{
		scanf("%d%d%d", &korea[i], &english[i], &math[i]) ;
		for(j=1; j<=i; j++)
		{
			ag[i] = sum[i]/3 ;
			
		}
		printf("%d�� �л��� ���  = %d\n",i,ag[i]);
	}

}


int main() //6���� ���� �ǽ� ���� 2) �ڽ��� �̸�, �й�, �а����� �迭�� �ʱ�ȭ�Ͽ� ��� 
{	
	int	b[7]={1,9,7,1,0,0,2}, i;
	char a[10]="������";
	char c[20] = "IT�ΰ������к�";
	
	printf("�̸�: %s",a) ;
	printf("\n");
	
	printf("�й�: ");
	for(i=0; i<7; i++)
	{
		printf("%d", b[i]);
	}
	printf("\n");
	
	printf("�а���: %s", c);

} 


#define SIZE 3 // 6���� 2)<���ܹ���>  �迭�� ����ؼ� �������� �̸�, �й�, �а����� �Է��� ��� 

struct Student 
{
    char studentId[10];
    char name[10];
    char magor[100];
    int list[20], SiZE;
};
 
 
 int main(void)
 {
     struct Student list[SIZE];
     int i;

     for( i = 0; i<SIZE; i++)
     {
         printf("�й��� �Է��Ͻÿ�:");
         scanf("%s",&list[i].studentId);
         printf("�̸��� �Է��Ͻÿ�:");
         scanf("%s",&list[i].name);
         printf("�а����� �Է��Ͻÿ�:");
         scanf("%s",&list[i].magor);
         printf("\n");
     }
     
     printf("\n");
     
     for(i=0; i<SIZE; i++)
     {
     printf("�й�:%s, �̸�:%s, �а���:%s\n",list[i].studentId,list[i].name,list[i].magor);
     }
	 return 0;
}



int main() //6���� �ڷᱸ��  �ǽ� ������ 3) case���� Ȱ���Ͽ� ���� ��� 
{

	int score, s;
	printf("����: ");
	scanf("%d", &score);

	
	switch(score)
	{
		case 100:
		printf("A+"); break;
		
		case 90:
		printf("A"); break;
		
		case 80: 
		printf("B"); break;
		
		case 70: 
		printf("C"); break;
		
		case 60:
		printf("D"); break;
		
		case 50: 
		printf("E"); break;
		
		case 40:
		printf("F"); break;
		
		default:
			printf("fail"); 
	}
}*/
void temperature(double c, double f) ;
int main(void) //6���� �ǽ� ���� 4)ȭ�� �µ��� �����µ��� ��ȯ 
{
	 double c, f, f2=0,fx;
	 printf("ȭ�� �µ� �Է�: ") ;
	 c=(f-32)*5./9;
	 scanf("%lf", &f);

	  
	 printf("����:%lf", c); 
	 return 0;
 } 

double d (double c, double f)
{	
	return c ;
}



	
 
 
