#include"stdio.h"
#include"math.h"
#include"stdlib.h"
/*
int main() //5���� �ǽ� ���� ���� 2) 7% ���� ��� 
{
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

int main(void) // 5)�ڽ��� �����̸��� �빮�ڿ��� �ҹ��ڷ� ���(�̿ϼ�) 
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

void Sum(int x, int y, int z); //5���� 1) 3���� ������ �ջ�, ���(�Լ��̿�) 

int main(void)

{

    int a, b, c, i ;
    char name[100] ;
 
    for(i=0; i<=2; i++)
    {


          scanf("%s", name);

          printf("����: ");
          scanf("%d", &a); 

          printf("����: ");
          scanf("%d", &b);

          printf("����: ");
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
            printf("�ջ�: %d \n", t);

            int arg;
            arg=(x+y+z)*1./3 ;
            printf("���: %d \n", arg);
    }
}
int main(void) // 5)�ڽ��� �����̸��� �빮�ڿ��� �ҹ��ڷ� ���(�̿ϼ�) 
{
 char x, y;
 
 printf("�����̸���  �Է��Ͻÿ�: ");
 scanf("%s", &x);

 y= x + 32;

 if(x>= 'A' && x <= 'Z')
  printf("�빮�� %s�� �ҹ��� %s�̴�",x,y);

 else
  printf("�빮�ڸ� �Է��Ͻÿ�");

 return 0;
}

int main() //5���� �ǽ� ���� ���� 2) 7% ���� ��� 
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
int main() //5���� �ǽ� ���� ���� 2) 7% ���� ��� 
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
int main() // 2)1000������ ������ 7%�� �����Ͽ��� ��� ��⸸�� 2�谡 �ɱ� 
{
	float a= 1000;
	int per= 7,b=100,c,d;
	printf("������ 7 percent \n") ;
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


float average_array(int kor, int eng, int mt); //1) �Լ��� �̿��� 3���� ���� �ջ�� ��� 
int main()
{
    
    int kor[5] = {100,90,70}, eng[5] = {90,85,85}, mt[5] = {100,95,80};
    int id;
    float average, all;

    for (id = 0; id < 3; id++)
    {
        printf(" %d�� �л� ���� ����: %d  ����: %d  ����: %d \n", id, kor[id], eng[id], mt[id]);
    }
    printf("\n");
    
    for (id = 0; id < 3; id++)
    {
        all = kor[id]+ eng[id]+ mt[id];
        printf("%d�� �л��� ���� �ջ�  : %f \n",id , all);
    }
    
	printf("\n"); 

    for (id = 0; id < 3; id++)
    {
        average = average_array(kor[id], eng[id], mt[id]);
        printf("%d�� �л��� ��� : %f \n",id , average);
    }

    return 0;
}

float average_array(int kor, int eng, int mt)
{
    float sum;

    sum = (kor + eng + mt);

    return (sum/3);
}*/

int main() //3) do wulie ���� �̿��� 3�� ����� �� 

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

    printf("3�� ���� ��  : %d\n", sum);

}


