#include<stdio.h>
int main()
{
	int frame=1,try=1,pin1=0,pin2=0,pin3=0,strike=0,spare=0,a=0,b=0,score=0;
	while(frame<10){
		printf("%d번째 프레임 %d번째 처리 핀 수 : ", frame,try);
		scanf("%d", &pin1);
		score+=pin1*(1+a+b);
		printf("**** 현재까지 점수 : %d\n",score);
		if(pin1<10){
			try++;
		{
		if(strike==3)
			a=2,strike-=2;
		else if(strike==1||strike==2)
			a=1,strike--;
		b=0;
		}
			printf("%d번째 프레임 %d번째 처리 핀 수 : ",frame,try);
			scanf("%d", &pin2);
			score+=pin2*(1+a+b);
			printf("**** 현재까지 점수 : %d\n",score);
			if(pin1+pin2==10)
				spare+=1;
		}
		if(pin1==10)
			strike+=2;
		frame++,try=1,a=0,b=0;
		{
		if(strike==3)
			a=2,strike-=2;
		else if(strike==1||strike==2)
			a=1,strike--;
			{
			if(spare)
				b=1,spare--;
			}
		}
	}
	if(frame==10){
		printf("%d번째 프레임 %d번째 처리 핀 수 : ", frame,try);
		scanf("%d", &pin1);
		score+=pin1*(1+a+b);
		printf("**** 현재까지 점수 : %d\n",score);
		try++;
		if(a)
			a--;
		printf("%d번째 프레임 %d번째 처리 핀 수 : ",frame,try);
		scanf("%d", &pin2);
		score+=pin2*(1+a);
		printf("**** 현재까지 점수 : %d\n",score);
		if(pin1==10||pin1+pin2==10){
			try++;
			printf("%d번째 프레임 %d번째 처리 핀 수 : ", frame,try);
			scanf("%d", &pin3);
			score+=pin3;
			printf("**** 최종 점수 : %d\n",score);}
	}
	return 0;
}
