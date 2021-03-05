#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//void game();
int main()
{   //press F11 to start the game, I hope you all will enjoy it.
	srand(time(0));
	int number=rand()/1000 +1;
	printf("enter your number\n");
	int chances,guess;
	chances=1;
	do
	{
		scanf("%d",&guess);
	   if(guess==number)
	   {
	   	printf("your guess %d is right in %d\n", guess,chances);
	   }
	   else if(guess>number)
	   {
	   	printf("lower please\n");
	   }else if(guess<number)
	   {
	   	printf("upper please\n");
	   }
	   chances++;
	}while(guess!=number);

}

