#include"stdio.h"
#include"math.h"
#include"stdlib.h"
#include "iostream"
#include <stdlib.h> //rand()함수를 사용하기위해 
#include <time.h> //srand(time(NULL))을 사용하기 위해
#define SIZE 3 // 6주차 2)<번외문제>  배열을 사용해서 여러명의 이름, 학번, 학과명을 입력해 출력
#define Point2D
#include"string.h"

/*
//1)가위바위보 게임 (10번 무작위로 해서 승률 구하기) 
int win = 0, same = 0, lose = 0  ,num = 1; //1. 가위바위보 게임 (10번 무작위로 해서 승률 구하기)
double percent;
void PrintString(int n)
{
 if (n == 1) printf("가위");
 else if (n == 2) printf("바위");
 else if (n == 3) printf(" 보 ");
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
 if (com == user) // 비긴경우
 {
   same++;
   printf("무\n");
   printf("\n"); 
  return 0;
  
 }
 else if ((com == 1 && user == 2) ||
  (com == 2 && user == 3) ||
  (com == 3 && user == 1)) // user가 이긴경우
 {
  win++;
  printf("승\n");
printf("\n"); 
  return 1;
 }
 else if ((com == 1 && user == 3) ||
  (com == 2 && user == 1) ||
  (com == 3 && user == 2)) // 진 경우
   
 {
  lose++;
  printf("패\n"); 
  printf("\n"); 
  return -1;
 }
}
int main(void)
{
 printf("가위바위보\n");
 while (num<=10)
 {
  int user, com;
  srand((unsigned)time(NULL));
  com = rand() % 3 + 1;
  printf("[%d] 가위(1), 바위(2), 보(3): ", num);
  scanf("%d", &user);
  ++num;
  PrintfMatchup(user, com);
  Decision(user, com);
 }
 percent = (double)win / 10 * 100;
 printf("%d승 %d무 %d패, 승률은 %.1f%%입니다.\n", win, same, lose, percent);
 return 0;
}


//7주차 2) 3차원 배열을 이용하여  두 반 6명(각반 3명)의 국영 
int main()
{
int student[2][3][4] = {{{90, 80, 100}, {100, 100, 90}, {80, 90, 85}},
       {{95, 80, 100},{100, 70, 80}, {90, 70, 70}}};
int sum = 0, total_sum = 0;
double ave = 0, total_ave = 0;

printf("------------------------------------\n");

for (int i = 1; i <= 2; i++) 
{
  printf("%d반 점수   국어 영어 수학\n------------------------------------\n", i);
  for (int j = 1; j <= 3; j++) 
  {
  	 printf("%d번 학생 :   ", j);
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
  printf("%d반점수 합계와 평균\n------------------------------------\n", i);
  	for (int j = 1; j <= 3; j++) 
		{
  		printf("%d번 학생", j);
 	 		for (int k = 0; k < 4; k++) 
			{
  				sum += student[i - 1][j - 1][k];
   			}
  		ave = sum / 3.0;
  		total_sum += sum;
  		printf(" 점수합: %d, 평균: %.2f \n", sum, ave);
  		sum = 0;
		}
	printf("\n");
	}
}



int main() //7주차 3)문자열 배열을 이용한 자신의 이름, 주소, 학과명 출력 
{
	
	int StudentID[20] = {1,9,7,1,0,0,2};
	char name[50] = {"강민준"};
	char address[50] = {"수원시 권선구 곡반정로 188"};
	char major[20] = {"IT인공지능학부"};
	printf("이름: %s\n", name); 
	printf("학번: ");
	for(int i=0; i<7; i++)
	{
		printf("%d", StudentID[i]);
	}
	printf("\n");
	printf("주소: %s", address);
	printf("\n");
	printf("학과명: %s", major); 
}



//7주차 4)문자열을 입력하여 대문자는 소문자로 소문자는 대문자로 
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
int main() //7주차 1)포인터  배열을 이용한 자신의 이름, 주소, 학과명 출력 
{
	char *name[50] = {};
	char *address[70] = {};
	char *major[30] = {};
	scanf("%s", name);
	printf("이름: %s\n", name);
	printf("\n");
	scanf("%s", address);
	printf("주소: %s", address);
	printf("\n");
	scanf("%s", major);
	printf("학과명: %s", major); 
}
int main() { //7주차 3)대문자를 소문자로 소문자를 대문자 
	
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
        printf("수를 입력하세요: ");
        scanf("%d", &input);
        sum += input;
    }

    printf("총 합은 %d입니다.\n", sum);

    return 0;
} 

 




