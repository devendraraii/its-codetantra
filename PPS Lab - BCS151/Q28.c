#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50
typedef struct TIME
{
	int hour;
	int minute;
}TIME;
typedef struct TRAIN_INFO{
	int train_no;
	char train_name[35];
	char start_st[35];
	char end_st[35];
	TIME dept_time;
	TIME arr_time;
}TRAIN;
void train_edit(TRAIN*,int *);
int main(void)
{
	int no_of_trains=0;
	int i;
	int choice;
	char dept_st[35];
	char arr_st[35];
	TIME train_time;
	TRAIN train[MAX];
	train_edit(train,&no_of_trains);
	while(1)
	{
		printf("MENU\n");
		printf("1.List all the trains departed from a particular station\n");
		printf("2.List all the trains departed from a particular station at a particular time\n");
		printf("3.List all the trains departed from particular station within the next one hour of a given time\n");
		printf("4.List all the trains between a pair of start station and end station\n");
		printf("5.Edit train details\n");
		printf("6.Exit\n");
		printf("Your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("Input Details\n");
			printf("Depart Station: ");
			fflush(stdin);
			gets(dept_st);
			for(i=0;i<=no_of_trains-1;i++)
			{
				if(strcmp(train[i].start_st,dept_st)==0)
				{
					printf("%d\t\t%s\t%s\t%s\t%d:%d\t%d:%d\n",train[i].train_no,train[i].train_name,train[i].start_st,train[i].end_st,train[i].dept_time.hour,train[i].dept_time.minute,train[i].arr_time.hour,train[i].arr_time.minute);
				}
			}
			printf("");
			break;
			case 2:
			printf("Input Details\n");
			printf("Depart Station: ");
			fflush(stdin);
			gets(dept_st);
			printf("Train Time: \n");
			printf("Hour: ");
			scanf("%d",&train_time.hour);
			printf("Minute: ");
			scanf("%d",&train_time.minute);
			for(i=0;i<=no_of_trains-1;i++)
			{
				if(strcmp(train[i].start_st,dept_st)==0 && train[i].dept_time.hour==train_time.hour && train[i].dept_time.minute==train_time.minute)
				{
					printf("%d\t\t%s\t%s\t%s\t%d:%d\t%d:%d\n",train[i].train_no,train[i].train_name,train[i].start_st,train[i].end_st,train[i].dept_time.hour,train[i].dept_time.minute,train[i].arr_time.hour,train[i].arr_time.minute);
				}
			}
			printf("");
			break;
			case 3:
			printf("Input Details\n");
			printf("Depart Station: ");
			fflush(stdin);
			gets(dept_st);
			printf("Time: \n");
			printf("Hour: ");
			scanf("%d",&train_time.hour);
			printf("Minute: ");
			scanf("%d",&train_time.minute);
			for(i=0;i<=no_of_trains-1;i++)
			{
				if(strcmp(train[i].start_st,dept_st)==0 && ((train[i].dept_time.hour==train_time.hour && train[i].dept_time.minute>=train_time.minute) || (train[i].dept_time.hour==train_time.hour+1 && train[i].dept_time.minute<=train_time.minute)))
				{
					printf("%d\t\t%s\t%s\t%s\t%d:%d\t%d:%d\n",train[i].train_no,train[i].train_name,train[i].start_st,train[i].end_st,train[i].dept_time.hour,train[i].dept_time.minute,train[i].arr_time.hour,train[i].arr_time.minute);
				}
			}
			printf("");
			break;
			case 4:
			printf("Input Details\n");
			printf("Depart Station: ");
			fflush(stdin);
			gets(dept_st);
			printf("Arrival Station: ");
			fflush(stdin);
			gets(arr_st);
			for(i=0;i<=no_of_trains-1;i++)
			{
				if((strcmp(train[i].start_st,dept_st)==0 && (strcmp(train[i].end_st,arr_st)==0)))
				{
					printf("%d\t\t%s\t%s\t%s\t%d:%d\t%d:%d\n",train[i].train_no,train[i].train_name,train[i].start_st,train[i].end_st,train[i].dept_time.hour,train[i].dept_time.minute,train[i].arr_time.hour,train[i].arr_time.minute);
				}
			}
			printf("");
			break;
			case 5:
			printf("");
			train_edit(train,&no_of_trains);
			break;
			case 6:
			return 0;
			default:
			printf("\nError! Wrong Choice.\n");
		}
	}
	return 0;
}
void train_edit(TRAIN *train,int *no_of_trains)
{
	int choice;
	int i,train_num;
	TRAIN temp;
	while(1)
	{
		printf("Train Edit Menu\n");
		printf("1.Add Train\n");
		printf("2.Delete Train\n");
		printf("3.Exit Train Edit Menu\n");
		printf("Your Choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			if(*no_of_trains>=MAX)
			{
				printf("\nError! There are already maximum trains.\n");
				break;
			}
			printf("Train Number: ");
			scanf("%d",&temp.train_no);
			for(i=0;i<=*no_of_trains-1;i++)
			{
				if(train[i].train_no==temp.train_no)
				{
					printf("Error! Train number %d already exist. Please try again.");
					temp.train_no=-1;
					break;
				}
			}
			if(temp.train_no==-1)
			break;
			printf("Input Train Name: ");
			fflush(stdin);
			gets(temp.train_name);
			printf("Input Start Station: ");
			fflush(stdin);
			gets(temp.start_st);
			printf("Input End Station: ");
			fflush(stdin);
			gets(temp.end_st);
			printf("Input Departure Time: \n");
			printf("Hour: ");
			scanf("%d",&temp.dept_time.hour);
			printf("Minute: ");
			scanf("%d",&temp.dept_time.minute);
			printf("Input Arrival Time: \n");
			printf("Hour: ");
			scanf("%d",&temp.arr_time.hour);
			printf("Minute: ");
			scanf("%d",&temp.arr_time.minute);
			train[*no_of_trains]=temp;
			for(i= *no_of_trains;i>=1;i--)
			{
				if(train[i-1].train_no>=train[i].train_no)
				{
					temp=train[i-1];
					train[i-1]=train[i];
					train[i]=temp;
				}
				else
				break;
			}
			*no_of_trains=*no_of_trains+1;
			printf("Train %d added successfully\n",train[i].train_no);
			break;
			case 2:
			if (*no_of_trains==0)
			{
				printf("Error! No Train Available\n");
				break;
			}
			printf("Input Train Number: ");
			scanf("%d",&train_num);
			for(i=0;i<=*no_of_trains-1;i++)
			{
				if(train[i].train_no==train_num)
				{
					while(i<=*no_of_trains-1)
					{
						train[i]=train[i+1];
						i++;
					}
					*no_of_trains=*no_of_trains-1;
					printf("Train %d deleted successfully\n",train_num);
					train_num=-1;
					break;
				}
			}
			if(train_num!=-1)
			printf("Error! Train %d not found",train_num);
			break;
			case 3:
			printf("");
			return 0;
			default:
			printf("Error! Wrong Choice.\n");
		}
	}
}