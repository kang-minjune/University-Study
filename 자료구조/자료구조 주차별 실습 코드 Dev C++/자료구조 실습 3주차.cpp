#include"stdio.h"
#include"math.h"
#include"stdlib.h"


/*

int main() //4���� ����ǽ����� 3) ����, ����, ���� ���� �Է��Ͽ� �ջ�� ��ձ��ϱ�  
  {
  	int k, e, m, a, b;
  
	scanf("%d%d%d", &k,&e,&m) ; 
	printf("���� ����: %d ���� ����: %d ���� ����: %d\n", k,e,m);
	printf("\n"); 
	a=k+e+m ;
	b=a*1./3;
	printf("�� ������ �ջ�: %d\n", a);
	printf("�� ������ ���: %d\n", b);
}
int main(void) // 4) 3�� ����� �� 
{
	int i, a=0;
	for(i=0; i<=100; i++)
	{
		if(i%3==0){a+=i;}	
	}
	printf("%d", a);
}
int main() //�ڷᱸ�� 4���� 5)���ڿ� ���� ���ϱ�
   {
    char a[1000] ;
   	int i,j ;
   	char *p ;
   	printf("�ܾ �Է��ϼ���: ") ;
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
	printf("�̸��� �Է��Ͻÿ�: ");
	scanf("%s", name);
	printf("�� ȸ ����ұ��? ");
	scanf("%d", &j);
	while(i<j)
	{
		printf("%s", name[j]);
		i++;
		return 0;
	}
}
int convert(long long s); //2) 10���� 2���� ��ȯ 
int main() {
	printf("10 ���� �Է�: ") ;
    long long s;
    scanf("%lld", &s);
    printf("%lld  = %d \n", s, convert(s));
    return 0;
} 
int convert(long long s) {
    int a = 0, i = 0, b;
    printf("10�������� 2���� ��ȯ: ");
    while (s != 0) {
        b = s % 10;
        s/= 10;
        a += b * pow(2, i);
        ++i;
    }
    return a;
}
int main() //1) ���� �̸� n�����  
{
	int i, n ;
	char name[100] ;
	printf("����� �̸��� �����Դϱ�?: ");
	scanf("%s", name) ;
	for(i=0; i<= ; i++) 
	{
		
}
int convert(long long s); // 10���� 2���� ��ȯ 
int main() {
	printf("10 ���� �Է�: ") ;
    long long s;
    scanf("%lld", &s);
    printf("%lld  = %d \n", s, convert(s));
    return 0;
} 
int convert(long long s) {
    int a = 0, i = 0, b;
    printf("10�������� 2���� ��ȯ: ");
    while (s != 0) {
        b = s % 10;
        s/= 10;
        a += b * pow(16, i);
        ++i;
    }
    return a;
}
int main() //�ڽ� �̸� ���� 
   {
    char a[1000] ;
   	int i,j ;
   	char *p ;
   	printf("�ܾ �Է��ϼ���: ") ;
   	scanf("%s", a) ;
   	p = a;
   	for(i=0; a[i] != NULL ; i++) ;
   	for(j=i; j>-1 ; j--)
   	{
   		printf("%c", *(a+j-1));
	}
	return 0;
}
int convert(long long s); // 10���� 16���� ��ȯ 
int main() {
	printf("10 ���� �Է�: ") ;
    long long s;
    scanf("%lld", &s);
    printf("%lld  = %d \n", s, convert(s));
    return 0;
} 
int convert(long long s) {
    int a = 0, i = 0, b;
    printf("10�������� 16���� ��ȯ: ");
    while (s != 0) {
        b = s % 10;
        s/= 10;
        a += b * pow(16, i);
        ++i;
    }
    return a;
}
int main() //4���� 1) 3���� ����, ����, ���� ������ �Է¹޾� �ջ�� ��ձ��ϱ�  
  {
  	int k, e, m, a, b,i;
  	char name[100] ;
	
	for(i=1; i<=3; i++)
	{
		scanf("%s%s%s", name) ;  
		scanf("%d%d%d", &k,&e,&m) ; 
		printf("���� ����: %d ���� ����: %d ���� ����: %d\n", k,e,m);
		printf("\n"); 
		a=k+e+m ;
		b=a*1./3;
		printf("%s \n", name[i]);
		printf("�� ������ �ջ�: %d\n �� ������ ���: %d\n", a,b);
	}
	
}
int main() //�ڷᱸ�� 4����3)���ڿ� ���� ���ϱ� 
   {
    char word[1000] ;
   	int i,a=0 ;
   	char *p ;
   	printf("�ܾ �Է��ϼ���: ") ;
   	scanf("%s", word) ;
   	p=word;
   	for(i=0; word[i] !=NULL ; i++) ;
	{
		a=a+i++;
	}
	printf("%d",a) ;
	return 0;
  }
  int main() //4���� 1) 3���� ����, ����, ���� ������ �Է¹޾� �ջ�� ��ձ��ϱ�  
  {
  	
  	
  	int k, e, m, a, b,i;
  	char name[100] ;
  	for(i=1; i<=3 ;i++)
  	{ 	
	scanf("%s", name);
	scanf("%d%d%d", &k,&e,&m) ; 
	printf("���� ����: %d ���� ����: %d ���� ����: %d\n", k,e,m);
	printf("\n"); 
	a=k+e+m ;
	b=a*1./3;
	printf("�� ������ �ջ�: %d\n", a);
	printf("�� ������ ���: %d\n", b);
	}
	return 0;
}*/
int main()
{
 char key;
 int k = 0;
 printf("10����->16������ ��ȯ�ϴ� ���α׷��Դϴ�.\n\n");
 
 scanf("%c", &key);
 printf("��ȯ�Ҽ��ڸ� �Է��ϼ���. : ");

 if (key == 'a')
 {
   scanf("%d", &k);
   printf("10������ : %d --> 16���� �� : %x\n" ,k,k);
 }
}

