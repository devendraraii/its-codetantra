#include<stdio.h>
int main(){
	int english,chemistry,computer,physics,maths,total;
	float percentage;
	
	printf("Enter the five subjects marks : ");
	scanf("%d%d%d%d%d",&english,&chemistry,&computer,&physics,&maths);
	
	total = english + chemistry + computer + physics + maths;
	percentage = total/5.00;
	
	printf("Total marks : %d\n",total);
	printf("Percentage : %f",percentage);
	
	if(percentage>=90)
{
    printf("\nGrade : A\n");
}
	else if(percentage>=80 && percentage<90)
{
    printf("\nGrade : B\n");
}
else if(percentage>=70 && percentage<80)
{
	printf("\nGrade : C\n");
}
    else if(percentage>=60 && percentage<70)
    {
    	printf("\nGrade : D\n");
    }
    else if (percentage>=40 && percentage<60)
    {
    	printf("\nGrade : E\n");
    }
    else if(percentage<40)
    {
    	printf("\nGrade : Fail\n");
    }
    return 0;
 }