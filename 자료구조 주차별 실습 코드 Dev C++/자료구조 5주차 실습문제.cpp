#include"stdio.h"
#include"math.h"
#include"stdlib.h"
/*
int main() //5주차 실습 예상 문제 2) 7% 복리 계산 
{
int won, year;

float per;

printf("Won, percent1, year: ");

scanf("%d %f %d",&won, &per, &year);


double cp, res;


res = pow((1 + per / 100.0), year);

cp = won * res;

printf("복리 : %.0lfwon\n", cp);


return 0;

}

int a (int n); //4)재귀호출을 이용한 10진수에서 2진수로  
int main()
{
    int n;
    printf("10진수 입력: ");
    scanf("%d",&n);
    a (n);

    return 0;
}

int a (int n)
{
	
    if(n==0||n==1)
    
    printf("%d",n);
    else
     {
     a (n/2);
     printf("%d",n%2);
     }
    return 0;
}

int main(void) // 5)자신의 영어이름을 대문자에서 소문자로 출력(미완성) 
{
 char x;
 char y;

 printf("영어이름을  입력하시오: ");
 scanf("%s", &x);
 
 y= x + 32;
 
 if(x>= 'A' && x <= 'Z')
  printf("대문자 %s는 소문자 %s이다",x,y);
 else
  printf("대문자를 입력하시오");

 return 0;
}

void Sum(int x, int y, int z); //5주차 1) 3명의 국영수 합산, 평균(함수이용) 

int main(void)

{

    int a, b, c, i ;
    char name[100] ;
 
    for(i=0; i<=2; i++)
    {


          scanf("%s", name);

          printf("국어: ");
          scanf("%d", &a); 

          printf("영어: ");
          scanf("%d", &b);

          printf("수학: ");
          scanf("%d", &c);

    }
 
    Sum(a, b, c);

    return 0;


}

void Sum(int x, int y, int z)

{
    int i,j,t=0;
    char name[100] ;
    for(i=0; i<=2; i++)
    {
    	
    		t=x+y+z ;
            scanf("%s", name);
            printf("\n");
            printf("합산: %d \n", t);

            int arg;
            arg=(x+y+z)*1./3 ;
            printf("평균: %d \n", arg);
    }
}
int main(void) // 5)자신의 영어이름을 대문자에서 소문자로 출력(미완성) 
{
 char x, y;
 
 printf("영어이름을  입력하시오: ");
 scanf("%s", &x);

 y= x + 32;

 if(x>= 'A' && x <= 'Z')
  printf("대문자 %s는 소문자 %s이다",x,y);

 else
  printf("대문자를 입력하시오");

 return 0;
}

int main() //5주차 실습 예상 문제 2) 7% 복리 계산 
{
int won, year;

float per;

double res, cp;

cp = won * res;


printf("Won, percent, res: ");

scanf("%d %f %d",&won, &per, &res);


year = pow(res,2)-sqrt(1+per/100.0) ;


printf("%.0d year\n", year);


return 0;

}
int main()
{
	int a=0, b, i ;
	for(i=1; i<=100; i++)
	{
		
		while (3*i==0)
		{
			if(3*i==0)
			{
				a=a+i ;
				printf("%d", a);
			}
		}
		
	}
}
int main() //5주차 실습 예상 문제 2) 7% 복리 계산 
{
int won, year;

float per;

double res, cp;

cp = won * res;


printf("Won, percent, res: ");

scanf("%d %f %d",&won, &per, &res);


year = pow(res,2)-(1+per/100.0) ;


printf("%.0d year\n", year);


return 0;

}
int main() // 2)1000만원을 연이율 7%로 저금하였을 경우 몇년만에 2배가 될까 
{
	float a= 1000;
	int per= 7,b=100,c,d;
	printf("연이율 7 percent \n") ;
	for(c=1; ;c++)
	{
		d=a*per/b;
		a=a+d ;
		printf("%f \n",a);
		printf("%d \n",c);
		if(a>=2000)
		{
			break;
		}
	}
	return 0 ;
}


float average_array(int kor, int eng, int mt); //1) 함수를 이용한 3명의 점수 합산과 평균 
int main()
{
    
    int kor[5] = {100,90,70}, eng[5] = {90,85,85}, mt[5] = {100,95,80};
    int id;
    float average, all;

    for (id = 0; id < 3; id++)
    {
        printf(" %d번 학생 점수 국어: %d  영어: %d  수학: %d \n", id, kor[id], eng[id], mt[id]);
    }
    printf("\n");
    
    for (id = 0; id < 3; id++)
    {
        all = kor[id]+ eng[id]+ mt[id];
        printf("%d번 학생의 점수 합산  : %f \n",id , all);
    }
    
	printf("\n"); 

    for (id = 0; id < 3; id++)
    {
        average = average_array(kor[id], eng[id], mt[id]);
        printf("%d번 학생의 평균 : %f \n",id , average);
    }

    return 0;
}

float average_array(int kor, int eng, int mt)
{
    float sum;

    sum = (kor + eng + mt);

    return (sum/3);
}*/

int main() //3) do wulie 문을 이용한 3의 배수의 합 

{

    int i = 0, sum = 0;

 

    while (i <= 100)

    {

        if ((i % 3 == 0))

        {

            sum += i;

        }

        i++;

    }

    printf("3의 배의 합  : %d\n", sum);

}


