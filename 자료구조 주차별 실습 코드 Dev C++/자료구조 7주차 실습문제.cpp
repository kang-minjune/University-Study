#include"stdio.h"
#include"math.h"
#include"stdlib.h"
#include "iostream"
#include <stdlib.h> //rand()�Լ��� ����ϱ����� 
#include <time.h> //srand(time(NULL))�� ����ϱ� ����
#define SIZE 3 // 6���� 2)<���ܹ���>  �迭�� ����ؼ� �������� �̸�, �й�, �а����� �Է��� ���
#define Point2D
#include"string.h"

/*
//1)���������� ���� (10�� �������� �ؼ� �·� ���ϱ�) 
int win = 0, same = 0, lose = 0  ,num = 1; //1. ���������� ���� (10�� �������� �ؼ� �·� ���ϱ�)
double percent;
void PrintString(int n)
{
 if (n == 1) printf("����");
 else if (n == 2) printf("����");
 else if (n == 3) printf(" �� ");
}

void PrintfMatchup(int user, int com)
{
 if (user == 1 || user == 2 || user == 3)
 {
  PrintString(user); 
  PrintString(com);
  printf("\n");
 }
 else
 {
  printf("fail\n");
  num--;
 }
}
int Decision(int user, int com)
{
 if (com == user) // �����
 {
   same++;
   printf("��\n");
   printf("\n"); 
  return 0;
  
 }
 else if ((com == 1 && user == 2) ||
  (com == 2 && user == 3) ||
  (com == 3 && user == 1)) // user�� �̱���
 {
  win++;
  printf("��\n");
printf("\n"); 
  return 1;
 }
 else if ((com == 1 && user == 3) ||
  (com == 2 && user == 1) ||
  (com == 3 && user == 2)) // �� ���
   
 {
  lose++;
  printf("��\n"); 
  printf("\n"); 
  return -1;
 }
}
int main(void)
{
 printf("����������\n");
 while (num<=10)
 {
  int user, com;
  srand((unsigned)time(NULL));
  com = rand() % 3 + 1;
  printf("[%d] ����(1), ����(2), ��(3): ", num);
  scanf("%d", &user);
  ++num;
  PrintfMatchup(user, com);
  Decision(user, com);
 }
 percent = (double)win / 10 * 100;
 printf("%d�� %d�� %d��, �·��� %.1f%%�Դϴ�.\n", win, same, lose, percent);
 return 0;
}


//7���� 2) 3���� �迭�� �̿��Ͽ�  �� �� 6��(���� 3��)�� ���� 
int main()
{
int student[2][3][4] = {{{90, 80, 100}, {100, 100, 90}, {80, 90, 85}},
       {{95, 80, 100},{100, 70, 80}, {90, 70, 70}}};
int sum = 0, total_sum = 0;
double ave = 0, total_ave = 0;

printf("------------------------------------\n");

for (int i = 1; i <= 2; i++) 
{
  printf("%d�� ����   ���� ���� ����\n------------------------------------\n", i);
  for (int j = 1; j <= 3; j++) 
  {
  	 printf("%d�� �л� :   ", j);
   		for(int k = 0; k < 3; k++) 
		{
    		printf("%d  ", student[i - 1][j - 1][k]);
   		}
   printf("\n");
  }
  printf("\n\n");
}
printf("------------------------------------\n");

for (int i = 1; i <= 2; i++) 
	{
  printf("%d������ �հ�� ���\n------------------------------------\n", i);
  	for (int j = 1; j <= 3; j++) 
		{
  		printf("%d�� �л�", j);
 	 		for (int k = 0; k < 4; k++) 
			{
  				sum += student[i - 1][j - 1][k];
   			}
  		ave = sum / 3.0;
  		total_sum += sum;
  		printf(" ������: %d, ���: %.2f \n", sum, ave);
  		sum = 0;
		}
	printf("\n");
	}
}



int main() //7���� 3)���ڿ� �迭�� �̿��� �ڽ��� �̸�, �ּ�, �а��� ��� 
{
	
	int StudentID[20] = {1,9,7,1,0,0,2};
	char name[50] = {"������"};
	char address[50] = {"������ �Ǽ��� ������� 188"};
	char major[20] = {"IT�ΰ������к�"};
	printf("�̸�: %s\n", name); 
	printf("�й�: ");
	for(int i=0; i<7; i++)
	{
		printf("%d", StudentID[i]);
	}
	printf("\n");
	printf("�ּ�: %s", address);
	printf("\n");
	printf("�а���: %s", major); 
}



//7���� 4)���ڿ��� �Է��Ͽ� �빮�ڴ� �ҹ��ڷ� �ҹ��ڴ� �빮�ڷ� 
int main() { 
	
	int a = 0;
	char b[101];

	scanf("%s", b);

	for (a = 0; a < 101; a++) {
		if (b[a] >= 'a' && b[a] <= 'z') {
			b[a] = b[a] - 32;
		}
		else if (b[a] >= 'A' && b[a] <= 'Z') {
			b[a] = b[a] + 32;
		}
	}
	printf("%s", b);

	return 0;
}
int main() //7���� 1)������  �迭�� �̿��� �ڽ��� �̸�, �ּ�, �а��� ��� 
{
	char *name[50] = {};
	char *address[70] = {};
	char *major[30] = {};
	scanf("%s", name);
	printf("�̸�: %s\n", name);
	printf("\n");
	scanf("%s", address);
	printf("�ּ�: %s", address);
	printf("\n");
	scanf("%s", major);
	printf("�а���: %s", major); 
}
int main() { //7���� 3)�빮�ڸ� �ҹ��ڷ� �ҹ��ڸ� �빮�� 
	
	int a = 0;
	char b[101];

	scanf("%s", b);

	for (a = 0; a < 101; a++) {
		if (b[a] >= 'a' && b[a] <= 'z') {
			b[a] = b[a] - 32;
		}
		else if (b[a] >= 'A' && b[a] <= 'Z') {
			b[a] = b[a] + 32;
		}
	}
	printf("%s", b);

	return 0;
}*/

int main(void)
{
    int input = 1;
    int sum = 0;

    while (input != 0)
    {
        printf("���� �Է��ϼ���: ");
        scanf("%d", &input);
        sum += input;
    }

    printf("�� ���� %d�Դϴ�.\n", sum);

    return 0;
} 

 




