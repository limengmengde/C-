#include<stdio.h>
int main()
{
	float score;
	char grade;
	printf("请输入一个百分制成绩\n");
	scanf("%f",&grade);
	if(score>100||score<0)
	{
		printf("输入有误，请重新输入");
		scanf("%f",&score); 
	}
	else 
	switch((int)(score/10))
	{
		case10:
		case9:grade='A';break;
		case8:grade='B';break;
		case7:grade='C';break;
		case6:grade='D';break;
		case5:
		case4:
		case3:
		case2:
		case1:
		case0:grade='E';
	}
	printf("成绩为%5.1f,相应的等级为%c\n",score,grade);
	return 0;
}