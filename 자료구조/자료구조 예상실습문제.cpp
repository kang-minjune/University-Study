#include"stdio.h"
#include"math.h"
#include"stdlib.h"

/*int main() //2주차 실습 예상문제 1) 두 수의 합산 
{ 
	int a, b;
	a = 1 ;
	b = 2 ;
	printf("%d", a+b);
 }
 int main() // 번외 1) 두 수의 합산 (scanf 사용)
 {
 	 int a, b, c;
	 scanf("%d %d", &a,&b);
	 printf("%d", a+b);
 }
 
int main() // 2) 구구단 세로형  
{
	int a, b, i, j;
 	{
	 	for(i=1; i<=9; i++)
 		{
		  for(j=1; j<=9; j++)
		  {
			a = i*j ;
			printf("%d * %d = %d\n", i,j,a);			
		  }
		  printf("\n");
		}
	}	
}

int main() // 2) 구구단 가로형 
{
	int a, b, i, j;
 	{
	 	for(i=1; i<=9; i++)
 		{
		  for(j=1; j<=9; j++)
		  
		  
		  {
			a = i*j ;
			printf("%d * %d = %d  ", i,j,a);			
		  }
		  printf("\n");
		}
	}	
}

int main() //구구단 N단 별로 정리 
{
	int i,j ;
	for(i=1; i<=9; i++)
	{
		for(j=1; j<=9; j++)
		{		
		printf("%d * %d = %2d  ",j,i,i*j);
		}
	printf("\n") ;	
	}
}

int main() //2주차 실습 예상문제 3)자기이름 10번 출력하기 
{
	int i ;
	char *a ; 
	for(i=1; i<=10; i++)
	{
		a = "강민준" ;
		printf("%s\n", a) ;
	
	}
} 

int main() //2주차 실습 예상문제 4) 원의 지름과 면적 [원주율(3.14) 선언 한 코드]
{
	int r ;	
	scanf("%d", &r) ;
	printf("원의 지름: %d", 2*r);

	float a, p ;
	p=3.14 ;
	a=p*pow(r,2);	
	scanf("%d", &r) ;
	printf("원의 면적: %f", a) ;
}

int main() //2주차 실습 예상문제 4) 원의 지름과 면적 [원주율을 코드형식(4*atan(1))으로 선언]  
{
	int r ;	
	scanf("%d", &r) ;
	printf("원의 지름: %d", 2*r);

	float a, p ;
	p=4*atan(1);
	a=p*pow(r,2);	
	scanf("%d", &r);
	printf("원의 면적: %f", a);
}

int main() //2주차 실습 예상문제 5) 1부터 100까지 더하기;
{
	int a,i;
	for(i=0; i<=100; i++)
	 {		
		a = a+i;
	 }
	printf("%d", a);
 }
 
 int main() // 실습문제 2번 피타고라스 정리의 빗면을 구하는 프로그램을 작성하고 실행하시오. 
{
	int a,b;
	double c ;
	scanf("%d%d", &a, &b) ;
	printf("빗면: "); 
	c=sqrt(a*a+b*b) ;
	printf("%lf", c) ;
}

int main() // 3) 두 정수를 입력하여 곱셈을 수행하는 프로그램을 작성하시오. 
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d ×%d = %d",a,b, a*b) ;
 } 
 
int main() // 4)원의 둘레와 면적을 구하는 프로그램을 작성하고 실행하시오  
 {
 	double a,b,r,pi ;
 	pi=4*atan(1) ;
 	scanf("%lf", &r) ;
 	printf("원의 둘레는: ") ; 
 	a=2*pi*r ;
 	printf("%lf", a) ;
 	
 	scanf("%lf", &r);
 	printf("원의 면적은: ") ; 
 	b=pow(r,2)*pi ;
 	printf("%lf", b) ;
 }
 
 int main() // 5) 두 실수를 입력하여 사칙연산을 수행하는 프로그램을 작성하시오. 
 {
 	float a, b ;
 	scanf("%f%f", &a, &b) ;
 	printf("더하기: %f + %f = %f \n",a,b,a+b);
 	printf("빼기: %f - %f = %f \n",a,b,a-b);
 	printf("곱하기: %f ×%f = %f \n",a,b,a*b);
 	printf("나누기: %f ÷%f = %f \n",a,b,a/b);
 }
  int main() // 실습문제 2번 피타고라스 정리의 빗면을 구하는 프로그램을 작성하고 실행하시오. 
{
	int a,b;
	double c ;
	scanf("%d%d", &a, &b) ;
	printf("빗면: "); 
	c=sqrt(a*a+b*b) ;
	printf("%lf", c) ;
}
int main() // 2주차 실습문제 3) 원의 둘레와 면적을 구하는 프로그램을 작성하고 실행하시오  
 {
 	double a,b,r,pi ;
 	pi=4*atan(1) ;
 	scanf("%lf", &r) ;
 	printf("원의 둘레는: ") ; 
 	a=2*pi*r ;
 	printf("%lf", a) ;
 	
 	scanf("%lf", &r);
 	printf("원의 면적은: ") ; 
 	b=pow(r,2)*pi ;
 	printf("%lf", b) ;
 }
int main() // 2) 구구단 세로형  
{
	int a, b, i, j;
 	{
	 	for(i=1; i<=19; i++)
 		{
		  for(j=1; j<=19; j++)
		  {
			a = i*j ;
			printf("%d * %d = %d\n", i,j,a);			
		  }
		  printf("\n");
		}
	}	
}
int main() //2주차 실습문제 2)자기이름과 학번  10번 출력하기 
{
	int i ,b ;
	char *a ; 
	for(i=1; i<=10; i++)
	{		
		a = "강민준" ;
		b = 1971002 ;
		printf("이름: %s 학번: %d\n", a,b) ;
	
	}
}
int main() // 2주차 실습문제 3) 원의 둘레와 면적을 구하는 프로그램을 작성하고 실행하시오  
 {
 	double a,b,r,pi ;
 	pi=4*atan(1) ;
 	scanf("%lf", &r) ;
 	printf("원의 둘레는: ") ; 
 	a=2*pi*r ;
 	printf("%lf", a) ;
 	
 	scanf("%lf", &r);
 	printf("원의 면적은: ") ; 
 	b=pow(r,2)*pi ;
 	printf("%lf", b) ;
 }
 
 int main() // 2주차 실습문제 1) 구구단 19구단 출력 
 {
 	int i, j;
 	for(i=1; i<=19; i++)
	{
	 	for(j=1; j<=19;j++)
	 	{
	 		printf("%d ×%d = %d\n", i,j,i*j);
		}
		 printf("\n");
	}
  }
  
  int main()
  {
  	int i, n ;
  	char *a ;
  	printf("당신의 이름은?") ;
  	scanf("%s", a);
	printf("%s", a);
   	for(i=1; i<=n; i++)
  	{
	  	scanf("%d", &n);
  		
	}
	printf("\n");
  }
  
  int main() //4주차 예상실습문제 3) 국어, 영어, 수학 점수 입력하여 합산과 평균구하기  
  {
  	int k, e, m, a, b;
  	printf("국어 점수는?");
	scanf("%d", &k) ; 
	printf("국어 점수: %d\n", k);
	printf("\n"); 
	printf("영어 점수는?");
	scanf("%d", &e);
	printf("영어점수: %d\n", e);
	printf("\n"); 
	printf("수학 점수는?");
	scanf("%d", &m);
	printf("수학점수: %d\n", m);
	printf("\n"); 
	a=k+e+m ;
	b=a*1./3;
	printf("세 과목의 합산: %d\n", a);
	printf("세 과목의 평균: %d\n", b);
}
  int main()
  {
  	int i, a, b ;
  	for(i=1; i<=100; i++)
  	{
	   	b=0 ;
  		a=b+i ;
  		if(a*1./3==0)
  		{
  			
  			printf("%d", a);		  
		  }
	  }
   }
   int main() //자료구조 4주차 5)문자열 역순 구하기
   {
    char word[1000] ;
   	int i,j ;
   	char *p ;
   	printf("단어를 입력하세요: ") ;
   	scanf("%s", word) ;
   	p=word;
   	for(i=0; word[i] !=NULL ; i++) ;
   	for(j=i; j>-1 ; j--)
   	{
   		printf("%c", *(word+j-1));
	}
	return 0;
   }
   int main()
	{
   	int i , a=0;
   	for(i=0; i<=100; i++)
	   {
	   		
	   		if(i*1./3)
			{
	   		a=a+i ;
			   
			}
		}
		printf("%d", a) ;		
   	
   	
   }
   int main() //2주차 실습문제 2)자기이름과 학번  10번 출력하기 
{
	int i ,b, n=0 ;
	char *a ; 
	for(i=1; i<=n; i++)
	{
		n=n+1 ;
		scanf("%s", a);
		printf("%d\n", a[n]);	
	}
}
int main()
{
	int i, j ;
	char name[20] ;
	printf("이름을 입력하시오: ");
	scanf("%s", name);
	printf("몇 회 출력할까요? ");
	scanf("%d", &j);
	while(i<j)
	{
		printf("%s", name[j]);
		i++;
		return 0;
	}
	
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

int main(void)
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



int main() {

int won, year ;

float percent ;

printf("Enter the principal(won), per(%) and period(year) with space : ");

scanf("%d %f %d",&won, &percent, &year);



float compound;

float res;

res = pow((1 + percent / 100.0), year);

compound = won * res;

printf("Compound Interest : %.0fwon\n", compound);


return 0;

}*/
int main() {

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







	
	
	
