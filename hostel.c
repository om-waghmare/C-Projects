#include "stdio.h"
#include "string.h"

struct project
{
char name[50],name1[50],history[25],gender[25],college[25],room[25],status[25],pass[25],type[25],charge[25],age[25],date[25];
char referral[25];
int num[25],id[25];
}ob1;

void details_store()//TO STORE THE STUDENT DETAILS
{
printf("Enter Your Room id:\n");
scanf("%s",&ob1.id);
printf("Enter Your First Name:\n");
scanf("%s",&ob1.name);
printf("Enter Your Last Name:\n");
scanf("%s",&ob1.name1);
printf("Enter Your Contact no:\n");
scanf("%s",&ob1.num);
printf("Enter Your Pass Status(yes/no):\n");
scanf("%s",&ob1.pass);
printf("Enter Your Age:\n");
scanf("%s",&ob1.age);
printf("Enter Your Medical History or Conditions:\n");
scanf("%s",&ob1.history);
printf("Enter Your Pass expiry date(DD/MM/YY):\n");
scanf("%s",&ob1.pass);
printf("Enter Your Gender(Male/Female):\n");
scanf("%s",&ob1.gender);
printf("Enter Your College name:\n");
scanf("%s",&ob1.college);
printf("Enter Your Room type(simple/deluxe):\n");
scanf("%s",&ob1.room);
printf("Enter Your Student status(new/existing):\n");
scanf("%s",&ob1.status);
printf("Enter Your Student Type(engineering/medical):\n");
scanf("%s",&ob1.type);
printf("Enter Your Referral Status(yes/no):\n");
scanf("%s",&ob1.referral);
printf("----------------------------------------------------------------------------------------------\n");}
void display()//TO DISPLAY THE DETAILS//
{
printf("Room_id");
printf("\t\tContact Number");
printf(" \tStudent Name(First Name)");
printf("\n%s",ob1.id);
printf("\t\t%s",ob1.num);
printf(" \t\t%s",ob1.name);
printf("\nPass Status");
printf("\tMedical History");
printf("\tCollege Name");

printf("\n%s",ob1.pass);
printf(" \t\t%s",ob1.history);
printf("\t\t%s",ob1.college);

}

void output(int *p,int *q,int *r)//TO CALCULATE AND DISPLAY THE ESTIMATE//
{
printf("\nAge ");
printf("\t\tService Charge ");
printf("\tGender ");
printf("\t\tDiscount Offered");
printf("\tTotal Bill");
printf("\n%s",ob1.age);
printf("\t\t%d",r);
printf("\t\t%s",ob1.gender);
printf("\t\t%d",q);
printf("\t\t\t%d",p);
printf("\n----------------------------------------------------------------------------------------------\n");
}
//START OF MAIN//
int main()
{static int charge = 500;char o[]="yes";char room_type[]="deluxe";int amt=10000;char a[]="yes",Student_Type[]="medical";
 char gender[]="Female";char stu[]="new";
int amt_f=0;//Discount

details_store();

display();

if(strcmp(ob1.status,stu)==0)
{amt=amt-500;
amt_f+=500;
}

if(strcmp(ob1.type,Student_Type)==0)
{
amt=amt-(amt*10/100);
amt_f+=(amt/10);
}



if(strcmp(ob1.gender,gender)==0)
{
amt=amt-(amt*10/100);
amt_f+=(amt/10);
}



if(strcmp(ob1.referral,o)==0)
{
amt=amt-(amt*5/100);
amt_f+=(amt/20);
}



if(strcmp(ob1.pass,a)==0)
{amt=amt-500;charge=0;
amt_f+=500;
}

if(strcmp(ob1.room,room_type)==0)
{
amt=amt+400;
}
output(amt,amt_f,charge);
return 0;
}