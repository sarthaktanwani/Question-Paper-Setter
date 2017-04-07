#include<fstream.h>
#include<conio.h>
#include<stdio.h>         //for gets(), puts() etc.
#include<string.h>        //for string functions like strcpy(), strcmp() etc.
#include<stdlib.h>        //for randomize()
#include<process.h>       //for exit()
#include<dos.h>
class type
  {
     int marks;
     char ques[40][80];
   public:
     void input();
     void output();
     void show();
     void set_marks(int);
     int returnmarks();
     void addq();
     void delq();
     void modify();
  }type1,type2,type3;          //1,2,3 marks
void type::input()
  {
   int n;
   cout<<"\nENTER NUMBER OF QUESTIONS(atleast 4): ";
   cin>>n;
   while(n<4)
     {
     cout<<"ENTER A NUMBER GREATER THAN OR EQUAL TO 4: ";
     cin>>n;
     cout<<endl;
     }
   for(int i=0;i<n;i++)
     {
     cout<<"\t ENTER QUESTION "<<i+1<<": ";
     gets(ques[i]);
     }
  }
void type::set_marks(int x)
  {
   marks=x;
  }
int check(char a[10],char b[10])      //for password
{
    for(int i=0;i<10;i++)
    {
	if(a[i]!=b[i])      //if entered password is not same as registered password
	{
	break;
	}
    }
    if(i==10)
    return 1;
    else
    return 0;
}
void main()      // main() function
 {
clrscr();      //clear the screen
gotoxy(23,7);     //go to a fixed position on screen
textcolor(YELLOW);       //to set text colour as YELLOW
cputs("********* W E L C O M E ********* " );
gotoxy(24,9);     //go to a fixed position on screen
cputs(" BLUEBELLS SCHOOL INTERNATIONAL " );
gotoxy(20,12);    //go to a fixed position on screen
cputs(" I N P U T  T E S T  Q U E S T I O N S ");
textcolor(BLUE);    //to set text colour as BLUE
delay(1000);        //delay for 1000ms or 1 sec
gotoxy(37,14);    //go to a fixed position on screen
cputs("DONE BY: ");
gotoxy(34,16);    //go to a fixed position on screen
cputs("SARTHAK TANWANI");
gotoxy(36,17);    //go to a fixed position on screen
cputs("AYUSH GUPTA");
gotoxy(19,25);    //go to a fixed position on screen
cputs("******** PRESS ANY KEY TO CONTINUE ********* ");
getch();      //wait for keypress
textcolor(GREEN);     //to set text colour as GREEN
clrscr();      //clear the screen
char pwd[10],def[]="AYUSHGUPTA",user[100];       //registered passwaord-AYUSHGUPTA
int i=0,mycheck;
gotoxy(15,2);     //go to a fixed position on screen
for(int a=1;a<=50;a++)     //loop to print upper horizontal line of the box
  {
  cout<<"-";      //print -
  }
cout<<endl;
for(int d=3;d<=13;d++)      //loop to print left vertical line of the box
  {
  gotoxy(14,d);
  cout<<"|";        //print |
  }
for(int g=3;g<=13;g++)        //loop to print right vertical line of the box
  {
  gotoxy(65,g);
  cout<<"|";       //print |
  }
for(int h=15;h<=64;h++)      //loop to print lower horizontal line of the box
  {
  gotoxy(h,14);
  cout<<"-";     //print -
  }
gotoxy(17,5);     //go to a fixed position on screen
cout<<"ENTER USERNAME:-";
gets(user);       //input username
gotoxy(17,7);     //go to a fixed position on screen
cout<<"ENTER PASSWORD (upto 10 digits):-";
while(i<10)
{
pwd[i]=getch();   //input password
cout<<"*";      //print * in password
++i;
}
getch();      //wait for keypress
gotoxy(17,9);     //go to a fixed position on screen
mycheck=check(pwd,def);
if (mycheck==1)     //if password is correct
 {
 cout<<"\n\t\t\t\tPLEASE WAIT..."<<endl;
 delay(2000);      //delay for 2000ms or 2 sec
 }
else            //if password is incorrect
  {
  cout<<"\n\t\t\t      INCORRECT PASSWORD";
  cout<<"\n\n\t\t\t\t  BREAKING...";
  delay(2000);     //delay for 2000ms or 2 sec
  exit(0);       //exit
  }
 textcolor(WHITE);   //to set text colour as WHITE
 clrscr();       //clear the screen
 int j,k;
 randomize();      //randomize function
 fstream fil;      //file object
 fil.open("paper",ios::binary | ios::out);   //to open the binary file in output mode
   cout<<"ENTER 1 MARK QUESTIONS\n\n";
   type1.input();    //function call to input 1 marker questions
   type1.set_marks(1);     //function to set marks as 1
   fil.write((char*) &type1,sizeof(type1));      //writing a record of a binary file
   cout<<endl;
   cout<<"ENTER 2 MARK QUESTIONS\n\n";
    type2.input();   //function call to input 2 marker questions
    type2.set_marks(2);    ////function to set marks as 2
    fil.write((char*) &type2,sizeof(type2));     //writing a record of a binary file
    cout<<endl;
  cout<<"ENTER 3 MARK QUESTIONS\n"<<endl;
  type3.input();     //function call to input 3 marker questions
  type3.set_marks(3);     //function to set marks as 3
  fil.write((char*) &type3,sizeof(type3));       //writing a record of a binary file
  cout<<endl;
  fil.close();     //closing the file
  getch();     //wait for keypress
 }