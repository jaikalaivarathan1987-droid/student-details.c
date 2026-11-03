#include<stdio.h>
#include<stdlib.h>
struct student{
char name[20];
int rollno;
int mark;
char city[25] ;
char dream[30] ;
};
void readstudent(struct student s[],int n){
int i;
for (i=0;i<n;i++){
printf("enter student name : ");
scanf("%s",&s[i].name);
printf("enter student rollnumber : ");
scanf("%d",&s[i].rollno);
printf("enter student mark : ");
scanf("%d",&s[i].mark);
printf("enter student city : ");
scanf("%s",&s[i].city);
printf("enter student dream : ");
scanf("%s",&s[i].dream);
printf("\n");
}
}
void writestudent(struct student s[],int n){
int i;
printf("\n----------STUDENT DETAILS----------\n");
for (i=0; i<n;i++){
printf("NAME : %s\n",s[i].name);
printf("ROLLNUMBER : %d\n",s[i].rollno);
printf("MARK : %d\n",s[i].mark);
printf("CITY : %s\n",s[i].city);
printf("DREAM : %s\n",s[i].dream);
printf("\n");
}
}
int main()
{
int n;
struct student s[100];
clrscr();
printf("\nENTER THE NUMBER OF STUDENTS : ");
scanf("%d",&n);
if (n<1&&n>100){
printf("INVALID INPUT");
}
else{
readstudent(s,n);
writestudent(s,n);
}
return 0;
}