/* program to illustrate use of one and two dimensional arrays.
The program will maintain marks of two students in 
3 quizzes using two dimensional arrays.The total marks of each 
student will be displayed*/
#include<stdio.h>
#define STD 2 //number if rows for student data
#define QUIZ 3//number of columns for quiz data
int main()
{
    int marks[STD][QUIZ];//MARKS ARRAY FOR 2 STUDENTS AND 3 QUIZZES
    int i,j,total_quiz[STD]={0};

    for(i=0;i<STD;i++)//loop for student row
    {
        for(j=0;j<QUIZ;j++)//loop for quiz column
        {
        printf("enter marks of student %d in quiz %d:",i+1,j+1);
        scanf("%d",&marks[i][j]);//reading marks of students
        total_quiz[i]+=marks[i][j];//total_quiz[i]=total_quiz[i]+marks[i][j]
        }
    }
//logic to print student no.quiz marks and total

for(i=0;i<QUIZ;i++) //loop for printing quiz number
{
    printf("\tQuiz %d",i+1);
}
printf("\tTotal\n");
for(i=0;i<STD;i++)//loop for student row
{
    printf("Student %d",i+1);
    for(j=0;j<QUIZ;j++) //loop for quiz column
    {
        printf("\t%d",marks[i][j]);//printing marks of students
    }
    printf("%d \n",total_quiz[i]);
}
return 0;
}
//end of program+-