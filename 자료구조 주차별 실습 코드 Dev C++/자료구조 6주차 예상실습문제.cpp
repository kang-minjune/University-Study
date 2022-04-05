#include"stdio.h"
#include"math.h"
#include"stdlib.h"
#include "iostream"
#include <stdlib.h> 
#include <time.h> 
/*
int main()//6주차 실습 예상 문제 1)배열을 이용하여 3명의 국영수 입력받아 합산과 평균 구하기 
{
	int korea[5],english[5],math[5], i, j, sum[5] ,ag[5] ;
	char name[100] ;
	
	for(i=1; i<=3; i++)
	{
		scanf("%d%d%d", &korea[i], &english[i], &math[i]) ;
		sum[i]= korea[i] + english[i] + math[i] ;
		printf("%d번 학생의 점수 총합  = %d\n",i,sum[i]);
	}
	printf("\n");
	for(i=1; i<=3; i++)
	{
		scanf("%d%d%d", &korea[i], &english[i], &math[i]) ;
		for(j=1; j<=i; j++)
		{
			ag[i] = sum[i]/3 ;
			
		}
		printf("%d번 학생의 평균  = %d\n",i,ag[i]);
	}

}


int main() //6주차 예상 실습 문제 2) 자신의 이름, 학번, 학과명을 배열로 초기화하여 출력 
{	
	int	b[7]={1,9,7,1,0,0,2}, i;
	char a[10]="강민준";
	char c[20] = "IT인공지능학부";
	
	printf("이름: %s",a) ;
	printf("\n");
	
	printf("학번: ");
	for(i=0; i<7; i++)
	{
		printf("%d", b[i]);
	}
	printf("\n");
	
	printf("학과명: %s", c);

} 


#define SIZE 3 // 6주차 2)<번외문제>  배열을 사용해서 여러명의 이름, 학번, 학과명을 입력해 출력 

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
         printf("학번을 입력하시오:");
         scanf("%s",&list[i].studentId);
         printf("이름을 입력하시오:");
         scanf("%s",&list[i].name);
         printf("학과명을 입력하시오:");
         scanf("%s",&list[i].magor);
         printf("\n");
     }
     
     printf("\n");
     
     for(i=0; i<SIZE; i++)
     {
     printf("학번:%s, 이름:%s, 학과명:%s\n",list[i].studentId,list[i].name,list[i].magor);
     }
	 return 0;
}



int main() //6주차 자료구조  실습 예상문제 3) case문을 활용하여 학점 출력 
{

	int score, s;
	printf("학점: ");
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
}

double CT(double ft) //6주차  4)화씨 온도에서 섭씨온도로 변환  
{
	double ct;
	ct = (ft-32)/1.8;
	return ct;
	}
	
	int main(void)
	{
		double ip;
		printf("화씨온도:");
		scanf("%lf",&ip);
		printf("섭씨온도 변환: %lf",CT(ip));
	return 0;
} 


int main(void) //6주차  5)주사위 100번 던져 확률 출력  
{
	float dice[7] = {0 ,};
	
	int x, n; 
	
	srand(time(NULL));
	
	for(x = 1; x<= 100; x++)
	{
		n = 1 + (rand() % 6);
		dice[n]++;
	 } 
	for(x=1; x<=6; x++)
	{
		printf("100번 중 %d번이 나올 확률: %f\n", x, dice[x]/100);
		printf("\n"); 
	}
	return 0;
 }*/
 
 
