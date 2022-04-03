#include"stdio.h"
#include"math.h"
#include"stdlib.h"


/*

int main() //4주차 예상실습문제 3) 국어, 영어, 수학 점수 입력하여 합산과 평균구하기  
  {
  	int k, e, m, a, b;
  
	scanf("%d%d%d", &k,&e,&m) ; 
	printf("국어 점수: %d 영어 점수: %d 수학 점수: %d\n", k,e,m);
	printf("\n"); 
	a=k+e+m ;
	b=a*1./3;
	printf("세 과목의 합산: %d\n", a);
	printf("세 과목의 평균: %d\n", b);
}
int main(void) // 4) 3의 배수의 합 
{
	int i, a=0;
	for(i=0; i<=100; i++)
	{
		if(i%3==0){a+=i;}	
	}
	printf("%d", a);
}
int main() //자료구조 4주차 5)문자열 역순 구하기
   {
    char a[1000] ;
   	int i,j ;
   	char *p ;
   	printf("단어를 입력하세요: ") ;
   	scanf("%s", a) ;
   	p = a;
   	for(i=0; a[i] != NULL ; i++) ;
   	for(j=i; j>-1 ; j--)
   	{
   		printf("%c", *(a+j-1));
	}
	return 0;
}

int main()
{
	int i, j ;
	char name[2200];
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
int convert(long long s); //2) 10진수 2진수 변환 
int main() {
	printf("10 진수 입력: ") ;
    long long s;
    scanf("%lld", &s);
    printf("%lld  = %d \n", s, convert(s));
    return 0;
} 
int convert(long long s) {
    int a = 0, i = 0, b;
    printf("10진수에서 2진수 변환: ");
    while (s != 0) {
        b = s % 10;
        s/= 10;
        a += b * pow(2, i);
        ++i;
    }
    return a;
}
int main() //1) 본인 이름 n번출력  
{
	int i, n ;
	char name[100] ;
	printf("당신의 이름은 무엇입니까?: ");
	scanf("%s", name) ;
	for(i=0; i<= ; i++) 
	{
		
}
int convert(long long s); // 10진수 2진수 변환 
int main() {
	printf("10 진수 입력: ") ;
    long long s;
    scanf("%lld", &s);
    printf("%lld  = %d \n", s, convert(s));
    return 0;
} 
int convert(long long s) {
    int a = 0, i = 0, b;
    printf("10진수에서 2진수 변환: ");
    while (s != 0) {
        b = s % 10;
        s/= 10;
        a += b * pow(16, i);
        ++i;
    }
    return a;
}
int main() //자신 이름 역순 
   {
    char a[1000] ;
   	int i,j ;
   	char *p ;
   	printf("단어를 입력하세요: ") ;
   	scanf("%s", a) ;
   	p = a;
   	for(i=0; a[i] != NULL ; i++) ;
   	for(j=i; j>-1 ; j--)
   	{
   		printf("%c", *(a+j-1));
	}
	return 0;
}
int convert(long long s); // 10진수 16진수 변환 
int main() {
	printf("10 진수 입력: ") ;
    long long s;
    scanf("%lld", &s);
    printf("%lld  = %d \n", s, convert(s));
    return 0;
} 
int convert(long long s) {
    int a = 0, i = 0, b;
    printf("10진수에서 16진수 변환: ");
    while (s != 0) {
        b = s % 10;
        s/= 10;
        a += b * pow(16, i);
        ++i;
    }
    return a;
}
int main() //4주차 1) 3명의 국어, 영어, 수학 점수를 입력받아 합산과 평균구하기  
  {
  	int k, e, m, a, b,i;
  	char name[100] ;
	
	for(i=1; i<=3; i++)
	{
		scanf("%s%s%s", name) ;  
		scanf("%d%d%d", &k,&e,&m) ; 
		printf("국어 점수: %d 영어 점수: %d 수학 점수: %d\n", k,e,m);
		printf("\n"); 
		a=k+e+m ;
		b=a*1./3;
		printf("%s \n", name[i]);
		printf("세 과목의 합산: %d\n 세 과목의 평균: %d\n", a,b);
	}
	
}
int main() //자료구조 4주차3)문자열 갯수 구하기 
   {
    char word[1000] ;
   	int i,a=0 ;
   	char *p ;
   	printf("단어를 입력하세요: ") ;
   	scanf("%s", word) ;
   	p=word;
   	for(i=0; word[i] !=NULL ; i++) ;
	{
		a=a+i++;
	}
	printf("%d",a) ;
	return 0;
  }
  int main() //4주차 1) 3명의 국어, 영어, 수학 점수를 입력받아 합산과 평균구하기  
  {
  	
  	
  	int k, e, m, a, b,i;
  	char name[100] ;
  	for(i=1; i<=3 ;i++)
  	{ 	
	scanf("%s", name);
	scanf("%d%d%d", &k,&e,&m) ; 
	printf("국어 점수: %d 영어 점수: %d 수학 점수: %d\n", k,e,m);
	printf("\n"); 
	a=k+e+m ;
	b=a*1./3;
	printf("세 과목의 합산: %d\n", a);
	printf("세 과목의 평균: %d\n", b);
	}
	return 0;
}*/
int main()
{
 char key;
 int k = 0;
 printf("10진수->16진수로 변환하는 프로그램입니다.\n\n");
 
 scanf("%c", &key);
 printf("변환할숫자를 입력하세요. : ");

 if (key == 'a')
 {
   scanf("%d", &k);
   printf("10진수값 : %d --> 16진수 값 : %x\n" ,k,k);
 }
}

