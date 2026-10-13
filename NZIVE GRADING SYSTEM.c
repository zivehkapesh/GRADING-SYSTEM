/*
    PROJECT: GRADING SYSTEM
    DESCRIPTION:A system to grade a student doing ICT at a college based on formative and summartive marks
    AUTHOR: NZIVE NELSON
    DATE: 13/10/2026
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int formative_marks,summartive_marks,total_marks;
    char grade,student_name[50],comment[20];
    printf("CDACC GRADING SYSTEM\n");

    // capture inputs
    printf("Enter student Name: ");
    fgets(student_name,50,stdin);
do {

    printf("Enter formative marks(0-50): ");
    scanf("%d",&formative_marks);
    if (formative_marks < 0|| formative_marks> 50){
    printf("invalid marks. Try again\n");
        }

    } while(formative_marks < 0 || formative_marks > 50);

do  {
    printf("Enter summartive marks(0-50): ");
    scanf("%d",&summartive_marks);
    if (summartive_marks < 0 || summartive_marks > 50){
        printf("invalid marks. Try again\n");
        }

    }while(summartive_marks < 0 || summartive_marks > 50);
    total_marks = formative_marks + summartive_marks;
    // marks moderation
if(total_marks == 49){
    total_marks = 50;
    }
    //check for technical fail
    if(formative_marks < 50 || summartive_marks > 50){
        total_marks = 50;
    }
    // find grade
    if(total_marks >= 70) grade = 'A';
    else if(total_marks >= 60) grade = 'B';
    else if(total_marks >= 50) grade = 'C';
    else grade = 'D';
    switch(grade) {
case 'A':
    strcpy(comment,"Mastery");
    break;
case 'B':
    strcpy(comment,"Proficient");
    break;
case 'C':
     strcpy(comment,"Competent");
    break;
case 'D':
    strcpy(comment,"Not Yet Competent");
default:
    strcpy(comment,"M.M");
    break;
    }
    // Output
    printf("Student name: %s\n",student_name);
    printf("Total marks: %d\n",total_marks);
    printf("Grade: %c\n",grade);
    printf("Comment: %s\n",comment);
return 0;
}




