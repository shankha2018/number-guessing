#include<stdio.h>
int main()
{
	int i,num=51,flag=1,guess,count=0;
	printf("Guess the number from 1 to 100\n");
	scanf("%d",&guess);
	do
	{
		if(num==guess)
		{
			flag=0;
		}
		else if(guess<num)
		{
			flag=1;
			printf("your guess is lower than number\n");
			count++;
		}
		else
		{
			flag=1;
			printf("your guess is greater than number\n");
			count++;
	    }
	    if(flag==1)
	    {
	    	printf("sorry! please guess it again\n");
	    	scanf("%d",&guess);
		}
		
	}while(flag);
	printf("Congrats!you guessed the number\n",num);
	printf("numbers of trails:%d\n",count);
	return 0;
}
