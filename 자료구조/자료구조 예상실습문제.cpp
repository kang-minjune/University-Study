#include"stdio.h"
#include"math.h"
#include"stdlib.h"

/*int main() //2���� �ǽ� ������ 1) �� ���� �ջ� 
{ 
	int a, b;
	a = 1 ;
	b = 2 ;
	printf("%d", a+b);
 }
 int main() // ���� 1) �� ���� �ջ� (scanf ���)
 {
 	 int a, b, c;
	 scanf("%d %d", &a,&b);
	 printf("%d", a+b);
 }
 
int main() // 2) ������ ������  
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

int main() // 2) ������ ������ 
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

int main() //������ N�� ���� ���� 
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

int main() //2���� �ǽ� ������ 3)�ڱ��̸� 10�� ����ϱ� 
{
	int i ;
	char *a ; 
	for(i=1; i<=10; i++)
	{
		a = "������" ;
		printf("%s\n", a) ;
	
	}
} 

int main() //2���� �ǽ� ������ 4) ���� ������ ���� [������(3.14) ���� �� �ڵ�]
{
	int r ;	
	scanf("%d", &r) ;
	printf("���� ����: %d", 2*r);

	float a, p ;
	p=3.14 ;
	a=p*pow(r,2);	
	scanf("%d", &r) ;
	printf("���� ����: %f", a) ;
}

int main() //2���� �ǽ� ������ 4) ���� ������ ���� [�������� �ڵ�����(4*atan(1))���� ����]  
{
	int r ;	
	scanf("%d", &r) ;
	printf("���� ����: %d", 2*r);

	float a, p ;
	p=4*atan(1);
	a=p*pow(r,2);	
	scanf("%d", &r);
	printf("���� ����: %f", a);
}

int main() //2���� �ǽ� ������ 5) 1���� 100���� ���ϱ�;
{
	int a,i;
	for(i=0; i<=100; i++)
	 {		
		a = a+i;
	 }
	printf("%d", a);
 }
 
 int main() // �ǽ����� 2�� ��Ÿ��� ������ ������ ���ϴ� ���α׷��� �ۼ��ϰ� �����Ͻÿ�. 
{
	int a,b;
	double c ;
	scanf("%d%d", &a, &b) ;
	printf("����: "); 
	c=sqrt(a*a+b*b) ;
	printf("%lf", c) ;
}

int main() // 3) �� ������ �Է��Ͽ� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d ��%d = %d",a,b, a*b) ;
 } 
 
int main() // 4)���� �ѷ��� ������ ���ϴ� ���α׷��� �ۼ��ϰ� �����Ͻÿ�  
 {
 	double a,b,r,pi ;
 	pi=4*atan(1) ;
 	scanf("%lf", &r) ;
 	printf("���� �ѷ���: ") ; 
 	a=2*pi*r ;
 	printf("%lf", a) ;
 	
 	scanf("%lf", &r);
 	printf("���� ������: ") ; 
 	b=pow(r,2)*pi ;
 	printf("%lf", b) ;
 }
 
 int main() // 5) �� �Ǽ��� �Է��Ͽ� ��Ģ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
 {
 	float a, b ;
 	scanf("%f%f", &a, &b) ;
 	printf("���ϱ�: %f + %f = %f \n",a,b,a+b);
 	printf("����: %f - %f = %f \n",a,b,a-b);
 	printf("���ϱ�: %f ��%f = %f \n",a,b,a*b);
 	printf("������: %f ��%f = %f \n",a,b,a/b);
 }
  int main() // �ǽ����� 2�� ��Ÿ��� ������ ������ ���ϴ� ���α׷��� �ۼ��ϰ� �����Ͻÿ�. 
{
	int a,b;
	double c ;
	scanf("%d%d", &a, &b) ;
	printf("����: "); 
	c=sqrt(a*a+b*b) ;
	printf("%lf", c) ;
}
int main() // 2���� �ǽ����� 3) ���� �ѷ��� ������ ���ϴ� ���α׷��� �ۼ��ϰ� �����Ͻÿ�  
 {
 	double a,b,r,pi ;
 	pi=4*atan(1) ;
 	scanf("%lf", &r) ;
 	printf("���� �ѷ���: ") ; 
 	a=2*pi*r ;
 	printf("%lf", a) ;
 	
 	scanf("%lf", &r);
 	printf("���� ������: ") ; 
 	b=pow(r,2)*pi ;
 	printf("%lf", b) ;
 }
int main() // 2) ������ ������  
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
int main() //2���� �ǽ����� 2)�ڱ��̸��� �й�  10�� ����ϱ� 
{
	int i ,b ;
	char *a ; 
	for(i=1; i<=10; i++)
	{		
		a = "������" ;
		b = 1971002 ;
		printf("�̸�: %s �й�: %d\n", a,b) ;
	
	}
}
int main() // 2���� �ǽ����� 3) ���� �ѷ��� ������ ���ϴ� ���α׷��� �ۼ��ϰ� �����Ͻÿ�  
 {
 	double a,b,r,pi ;
 	pi=4*atan(1) ;
 	scanf("%lf", &r) ;
 	printf("���� �ѷ���: ") ; 
 	a=2*pi*r ;
 	printf("%lf", a) ;
 	
 	scanf("%lf", &r);
 	printf("���� ������: ") ; 
 	b=pow(r,2)*pi ;
 	printf("%lf", b) ;
 }
 
 int main() // 2���� �ǽ����� 1) ������ 19���� ��� 
 {
 	int i, j;
 	for(i=1; i<=19; i++)
	{
	 	for(j=1; j<=19;j++)
	 	{
	 		printf("%d ��%d = %d\n", i,j,i*j);
		}
		 printf("\n");
	}
  }
  
  int main()
  {
  	int i, n ;
  	char *a ;
  	printf("����� �̸���?") ;
  	scanf("%s", a);
	printf("%s", a);
   	for(i=1; i<=n; i++)
  	{
	  	scanf("%d", &n);
  		
	}
	printf("\n");
  }
  
  int main() //4���� ����ǽ����� 3) ����, ����, ���� ���� �Է��Ͽ� �ջ�� ��ձ��ϱ�  
  {
  	int k, e, m, a, b;
  	printf("���� ������?");
	scanf("%d", &k) ; 
	printf("���� ����: %d\n", k);
	printf("\n"); 
	printf("���� ������?");
	scanf("%d", &e);
	printf("��������: %d\n", e);
	printf("\n"); 
	printf("���� ������?");
	scanf("%d", &m);
	printf("��������: %d\n", m);
	printf("\n"); 
	a=k+e+m ;
	b=a*1./3;
	printf("�� ������ �ջ�: %d\n", a);
	printf("�� ������ ���: %d\n", b);
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
   int main() //�ڷᱸ�� 4���� 5)���ڿ� ���� ���ϱ�
   {
    char word[1000] ;
   	int i,j ;
   	char *p ;
   	printf("�ܾ �Է��ϼ���: ") ;
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
   int main() //2���� �ǽ����� 2)�ڱ��̸��� �й�  10�� ����ϱ� 
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
int a (int n); //4)���ȣ���� �̿��� 10�������� 2������  
int main()
{
    int n;
    printf("10���� �Է�: ");
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

 printf("�����̸���  �Է��Ͻÿ�: ");
 scanf("%s", &x);
 
 y= x + 32;
 
 if(x>= 'A' && x <= 'Z')
  printf("�빮�� %s�� �ҹ��� %s�̴�",x,y);
 else
  printf("�빮�ڸ� �Է��Ͻÿ�");

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

printf("���� : %.0lfwon\n", cp);



return 0;

}







	
	
	
