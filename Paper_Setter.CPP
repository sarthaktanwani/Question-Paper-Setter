#include<fstream.h>
#include<conio.h>
#include<stdio.h>          //for gets(), puts() etc.
#include<string.h>         //for string functions like strcpy(),strcmp() etc.
#include<stdlib.h>         //for randomize()
#include<process.h>        //for exit()
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
void type::output()
  {
   int n=0;
   while(strlen(ques[n]))
     {
     n++;
     }
   int arr[6]={0};
   for(int i=0;i<4;i++)
     {
     int r1=random(n);
     arr[i]=r1;
     }
   for(i=0;i<4;i++)
     {
     for (int j=0;j<i;j++)
       {
       if(arr[i]==arr[j])
	{
	arr[i]=random(4);
	--i;
	}
       }
     }
   for(i=0;i<4;i++)
   cout<<"\t\t\t ";
   puts(ques[arr[i]]);
  }
int type::returnmarks()
  {
  return marks;
  }
void type::show()
  {
  int n=0;
  while(strlen(ques[n]))
    {
    n++;
    }
    for(int i=0;i<n;i++)
    {
      puts(ques[i]);
      }
    puts(ques[i+1]);
  }
void type::addq()
 {
  int n=0,no;
  while(strlen(ques[n]))
  {
   n++;
   }
  cout<<"\t\t THE NUMBER OF QUESTIONS ARE: "<<n<<endl;
  cout<<"\t\t ENTER NUMBER OF QUESTIONS TO BE ENTERED: ";
  cin>>no;
  for(int i=0;i<no;i++)
  {
  cout<<"\t\t ENTER QUESTION "<<(i+n+1)<<": ";
  gets(ques[i+n]);}
 }
 void type::delq()
 {
  int x=0;
  int n=0;
  while(strlen(ques[n]))
  {
   n++;
   }
  show();
  cout<<"\t\t ENTER POSITION OF QUESTION TO BE DELETED: ";
  cin>>x;
  for(int i=x;i<=n;i++)
  strcpy(ques[i-1],ques[i]);
 }
 void type::modify()
 {
  int x=0;
  int n=0;
  while(strlen(ques[n]))
  {
   n++;
   }
  show();
  cout<<"\t\t ENTER POSITION OF THE QUESTION TO BE MODIFIED: ";
  cin>>x;
  cout<<endl;
  cout<<"\t\t ENTERED POSITION IS: ";
  cout<<x<<endl;
  cout<<"\t\t ENTER NEW QUESTION:  ";
  gets(ques[x-1]);
 }
int check(char a[10],char b[10])      //for password
{
    for(int i=0;i<10;i++)
    {
	if(a[i]!=b[i])    //if entered password is not same as registered password
	{
	break;
	}
    }
    if(i==10)
    return 1;
    else
    return 0;
}
void box()    //function to print box
{
gotoxy(15,2);       //go to a fixed position on screen
for(int a=1;a<=53;a++)       //loop to print upper horizontal line of the box
  {
  cout<<"*";    //print stars
  }
cout<<endl;
for(int d=3;d<=24;d++)     //loop to print left vertical line of the box
  {
  gotoxy(15,d);
  cout<<"*";    //print stars
  }
for(int g=3;g<=24;g++)     //loop to print right vertical line of he box
  {
  gotoxy(67,g);
  cout<<"*";     //print stars
  }
for(int h=15;h<=67;h++)    //loop to print lower horizontal line of the box
  {
  gotoxy(h,24);
  cout<<"*";    //print stars
  }
}
void main()      // main() function
 {
clrscr();      //clear the screen
gotoxy(23,7);     //go to a fixed position on screen
textcolor(YELLOW);       //to set text colour as YELLOW
cputs("********* W E L C O M E ********* " );
gotoxy(24,9);    //go to a fixed position on screen
cputs(" BLUEBELLS SCHOOL INTERNATIONAL " );
gotoxy(24,12);    //go to a fixed position on screen
cputs(" T E S T  P A P E R  S E T T E R  ");
textcolor(BLUE);  //to set text colour as BLUE
delay(1000);    //delay for 1000ms or 1 sec
gotoxy(37,14);   //go to a fixed position on screen
cputs("DONE BY: ");
gotoxy(34,16);    //go to a fixed position on screen
cputs("SARTHAK TANWANI");
gotoxy(36,17);    //go to a fixed position on screen
cputs("AYUSH GUPTA");
gotoxy(19,25);    //go to a fixed position on screen
cputs("******** PRESS ANY KEY TO CONTINUE ********* ");
getch();     //wait for keypress
textcolor(GREEN);    //to set text colour as GREEN
clrscr();     //clear the screen
char pwd[10],def[]="AYUSHGUPTA",user[100];   //registered passwaord-AYUSHGUPTA
int i=0,mycheck;
gotoxy(15,2);      //go to a fixed position on screen
for(int a=1;a<=50;a++)    //loop to print upper horizontal line of the box
 {
 cout<<"-";     //print -
 }
cout<<endl;
for(int d=3;d<=13;d++)    //loop to print left vertical line of the box
  {
  gotoxy(14,d);
  cout<<"|";       //print |
  }
for(int g=3;g<=13;g++)      //loop to print right vertical line of the box
  {
  gotoxy(65,g);
  cout<<"|";       //print |
  }
for(int h=15;h<=64;h++)    //loop to print lower horizontal line of the box
  {
  gotoxy(h,14);
  cout<<"-";      //print -
  }
gotoxy(17,5);    //go to a fixed position on screen
cout<<"ENTER USERNAME:-";
gets(user);     //input username
gotoxy(17,7);   //go to a fixed position on screen
cout<<"ENTER PASSWORD (10 digits):-";
while(i<10)
{
pwd[i]=getch();  //input password
cout<<"*";     //print * in password
++i;
}
getch();    //wait for keypress
gotoxy(17,9);   //go to a fixed position on screen
mycheck=check(pwd,def);    //function call to check id entered password and registered password is same
if(mycheck==1)     //if password is correct
 {
 cout<<"\n\t\t\t\tPLEASE WAIT..."<<endl;
 delay(2000);      //delay for 2000ms or 2 sec
 }
else          //if password is incorrect
  {
  cout<<"\n\t\t\t      INCORRECT PASSWORD";
  cout<<"\n\n\t\t\t\t  BREAKING...";
  delay(2000);    //delay for 2000ms or 2 sec
  exit(0);      //exit
  }
 textcolor(WHITE);     //to set text colour as WHITE
 clrscr();       //clear the screen
 int j,k;
 randomize();     //randomize function
 fstream fil;     //file object
 char ch,ch1;
 textcolor(RED);    //to set text colour as RED
 clrscr();    //clear the screen
 do      //do while loop
  {
  clrscr();    //clear the screen
  box();    //function call to construct box
  gotoxy(25,4);   //go to a fixed position on screen
  cout<<"MENU:\n\n";
  gotoxy(25,6);   //go to a fixed position on screen
  cout<<"1. Print Question paper\n\n";
  gotoxy(25,8);   //go to a fixed position on screen
  cout<<"2. Show 1 markers\n\n";
  gotoxy(25,10);  //go to a fixed position on screen
  cout<<"3. Show 2 marker\n\n";
  gotoxy(25,12);  //go to a fixed position on screen
  cout<<"4. Show 3 marker\n\n";
  gotoxy(25,14);  //go to a fixed position on screen
  cout<<"5. Add question\n\n";
  gotoxy(25,16);  //go to a fixed position on screen
  cout<<"6. Delete question\n\n";
  gotoxy(25,18);  //go to a fixed position on screen
  cout<<"7. Modify\n\n";
  gotoxy(25,20);  //go to a fixed position on screen
  cout<<"8. Exit";
  gotoxy(25,22);  //go to a fixed position on screen
  cout<<"Enter choice: ";
  cin>>ch;     //input choice 1-8
  fil.seekg(0);
  textcolor(WHITE);   //to set text colour as WHITE
  clrscr();     //clear the screen
  switch(ch)
  {
   case '1':clrscr();    //clear the screen
	box();     //function call to construct the box
	cout<<endl;
	gotoxy(1,1);    //go to a fixed position on screen
	cout<<"\n              *******************QUESTION PAPER";
	cout<<endl;
	fil.open("paper",ios::binary | ios::in);    //to open the binary file in input mode
	cout<<"\n\t\t\t1 MARKER QUESTIONS"<<endl;
	fil.read((char*) &type1, sizeof(type1));    //reading a record of the binary file
	type1.output();       //function call to output 1 marker questions
	cout<<endl;
	cout<<"\t\t\t2 MARKER QUESTIONS"<<endl;
	fil.read((char*) &type2, sizeof(type2));   //reading a record of the binary file
	type2.output();      //function call to output 2 marker questions
	cout<<endl;
	cout<<"\t\t\t3 MARKER QUESTIONS"<<endl;
	fil.read((char*) &type3, sizeof(type3));   //reading a record of the binary file
	type3.output();          //function call to output 3 marker questions
	for(int d=3;d<=24;d++)     //loop to print left vertical line of the box
	{
	gotoxy(15,d);
	cout<<"*";       //print stars
	}
	for(int g=3;g<=24;g++)     //loop to print right vertical line of the box
	{
	gotoxy(67,g);
	cout<<"*";     //print stars
	}
	fil.close();    //closing the file
	break;
   case '2':clrscr();      //clear the screen
       box();        //function call to construct the box
       gotoxy(1,5);     //go to a fixed position on screen
       fil.open("paper",ios::binary | ios::in);  //to open the binary file in input mode
       fil.read((char*)&type1,sizeof(type1));    //reading a record of the binary file
       cout<<"\t\t 1 MARKER QUESTIONS ARE: \n";
       type1.show();       //function call to show the questions
       for(d=3;d<=24;d++)       //loop to print left vertical line of the box
       {
       gotoxy(15,d);
       cout<<"*";       //print stars
       }
       for(g=3;g<=24;g++)     //loop to print right vertical line of the box
	{
	gotoxy(67,g);
	cout<<"*";     //print stars
	}
       fil.close();     //closing the file
       break;
   case '3':clrscr();     //clear the screen
       box();       //function call to construct the box
       gotoxy(1,5);     //go to a fixed position on screen
       fil.open("paper",ios::binary | ios::in);    //to open the binary file in input mode
       fil.seekg(sizeof(type)|ios::beg);       //positioning the file pointer at the end of the 1st record
       fil.read((char*)&type2,sizeof(type2));     //reading a record of a binary file
       cout<<"\t\t 2 MARKER QUESTIONS ARE: \n";
       type2.show();       //function call to show the questions
       for(d=3;d<=24;d++)         //loop to print left vertical line of the box
       {
       gotoxy(15,d);
       cout<<"*";      //print stars
       }
       for(g=3;g<=24;g++)     //loop to print right vertical line of the box
	{
	gotoxy(67,g);
	cout<<"*";     //print stars
	}
       fil.close();      //closing the file
       break;
   case '4':clrscr();     //clear the screen
       box();       //function call to construct the box
       gotoxy(1,5);     //go to a fixed position on screen
       fil.open("paper",ios::binary | ios::in);    //to open the binary file in input mode
       fil.seekg(2*sizeof(type)|ios::beg);      //positioning the file pointer to the end of the 2nd record
       fil.read((char*)&type3,sizeof(type3));     //reading a record of a binary file
       cout<<"\t\t 3 MARKER QUESTIONS ARE: \n";
       type3.show();       //function call to show the question
       for(d=3;d<=24;d++)      //loop to print left vertical line of the box
       {
       gotoxy(15,d);
       cout<<"*";        //print stars
       }
       for(g=3;g<=24;g++)     //loop to print right vertical line of the box
	{
	gotoxy(67,g);
	cout<<"*";     //print stars
	}
       fil.close();    //closing the file
       break;
   case '5':clrscr();   //clear the screen
       box();      //function call to construct the box
       gotoxy(1,5);    //go to a fixed position on screen
       fil.open("paper",ios::binary | ios::out);    //to open the binary file in output mode
       char k;
       cout<<"\t\t WHICH TYPE ? (1/2/3): ";      //type of question(marks)
       cin>>k;      //input type of question(marks)
       switch(k)
       {
	case '1':gotoxy(1,6);    //go to a fixed position on screen
	     type1.addq();       //function call to add a question
	     break;
	case '2':gotoxy(1,6);    //go to a fixed position on screen
	     type2.addq();       //function call to add a question
	     break;
	case '3':gotoxy(1,6);    //go to a fixed position on screen
	     type3.addq();       //function call to add a question
	     break;
	}
	box();
       fil.close();      //closing the file
       break;
   case '6':clrscr();     //clear the screen
       box();       //function call to construct the box
       gotoxy(1,5);      //go to a fixed position on screen
       fil.open("paper",ios::binary | ios::out);    //to open the binary file in output mode
       cout<<"\t\t WHICH TYPE ? (1/2/3): ";      //type of question(marks)
       cin>>k;      //input type of question(marks)
       switch(k)
       {
	case '1':gotoxy(1,6);    //go to a fixed position on screen
	     type1.delq();       //function call to delete a question
	     break;
	case '2':gotoxy(1,6);    //go to a fixed position on screen
	     type2.delq();       //function call to delete a question
	     break;
	case '3':gotoxy(1,6);    //go to a fixed position on screen
	     type3.delq();      //function call to delete a question
	     break;
       }
       box();
       fil.close();      //closing the file
       break;
   case '7':clrscr();      //clear the screen
       box();      //function call to construct the box
       gotoxy(1,5);       //go to a fixed position on screen
       fil.open("paper",ios::binary | ios::out);    //to open the binary file in output mode
       cout<<"\t\tWHICH TYPE ? (1/2/3): ";      //type of question(marks)
       cin>>k;      //input type of question(marks)
       switch(k)
       {
	case '1':gotoxy(1,6);    //go to a fixed position on screen
	     type1.modify();      //function call to modify a question
	     break;
	case '2':gotoxy(1,6);    //go to a fixed position on screen
	     type2.modify();      //function call to modify a question
	     break;
	case '3':gotoxy(1,6);    //go to a fixed position on screen
	     type3.modify();      //function call to modify a question
	     break;
       }
       box();
       fil.close();     //closing the file
       break;
   case '8':exit(0);
   }
   gotoxy(2,24);      //go to a fixed position on screen
   cout<<endl<<"WANT TO ENTER MORE(Y/N): ";
   cin>>ch1;       //input choice
   textcolor(RED);     //to set text colour as RED
   clrscr();      //clear the screen
   }
   while(ch1=='y' || ch1=='Y');    //if key entered is y or Y
  getch();      //wait for keypress
}      //end of main()
