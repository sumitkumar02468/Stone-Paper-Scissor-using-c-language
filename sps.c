#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
//For choose random number
	int number(int n)
	{
	srand(time(NULL));//This is function is use for call rendom number between 0-n;
	return rand()%n;
	}
//For print selection of player
	void playerchoice(int choice)
	{
	if(choice==1)
	printf("You choose 'Stone'\n");
	else if(choice==2)
	printf("You choose 'Paper'\n");
	else if(choice==3)
	printf("You choose 'Scissor'\n");
	else
	printf("Please enter right choice\n");
	}
//For print selection of computer
	void copmchoice(int comp)
	{
	if(comp==0)
	printf("Computer choose 'Stone'\n");
	else if(comp==1)
	printf("Computer choose 'Paper'\n");
	else
	printf("Computer choose 'Scissor'\n");
	comp=0;
	}
int main()
{
int points=0,point=0;
void copmchoice(int comp);
void  playerchoice(int choice);
int number(int n);
int choice,n,comp;
char name[30];
printf("~~~~~~~~~~~`WELCOME TO 'STONE' 'PAPER' and 'SCISSOR' Game`~~~~~~~~~~~\n");
printf("Enter your name\n");
scanf("%[^\n]s",name);
printf("\nEnter 1. for Stone 2. for Paper 3. for Scissor\n\n");
for(int i=1;i<=3;i++)
{
printf("Enter your choice\n");
scanf("%d",&choice);
if(choice==1)//For cheak, the slection of player is right or not.
{
goto x;
}
else if(choice==2)
{
goto x;
}
else if(choice==3)
{
goto x;
}
else
{
printf("WARNING! You entered invalid choice.\n");
exit(0);//For end the program, if the slection is not correct.
}
x:
playerchoice(choice);
comp = number(3);
copmchoice(comp);

if(((choice==1)&&(comp==0))||((choice==2)&&(comp==1))||((choice==3)&&(comp==2)))
{
printf("The match is draw!\n");
}
else if(((choice==1)&&(comp==1))||((choice==2)&&(comp==2))||((choice==3)&&(comp==0)))
{
printf("The computer win!\n");
point++;
}
else
{
printf("You win!\n");
points++;
}
printf("\n");
}
//For printing who is winner.
if(points>point)
{
printf("\t~~~~~~~~~~~CONGURATULATIONS~~~~~~~~~~~\n");
printf("\t\t\t`%s`\n",name);
printf("\t\tYou are the winner!\n");
}
else if(points==point)
{
printf("\nTHE MATCH IS DRAW!\n");
}
else
{
printf(" OOPS! \t%s\n",name);
printf("You Loos The Match \nBATTER LUCK NEXT TIME!\n");
}
return 0;
}
