#include<graphics.h>
#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
class student
{
	char y;
	public:
		void companies();
		void rostudents();
		void ropstudents();
		void feed();

		};

void student :: companies()
{
	cout<<"\4 COMPANIES \n";

	cout<<"\n Company Name \t Type \t     Website             \t   Phone       Status   \n";

	cout<<"\n Infosys      \t IT   \t https://www.infosys.com \t 9876567434     Active  ";
	cout<<"\n TCS          \t IT   \t https://www.TCS.com     \t 8987675434    Inactive ";
	cout<<"\n BPO services \t BPO  \t https://www.conbpo.com  \t 9834545566     Active  ";
	cout<<"\n Wipro        \t IT   \t https://www.wipro.com   \t 9876776545     Active  ";
	cout<<"\n Mexin        \t IT   \t https://www.mexin.com   \t 8747534788     Active  ";
	cout<<"\n ASD services \t BPO  \t https://www.ASD.com     \t 8874668374     Active  ";
	cout<<"\n Web solutions\t IT   \t https://www.websol.com  \t 9827746374     Active  ";
	cout<<"\n swan systems \t BPO  \t https://www.swansys.com \t 9843775683     Active  ";
	cout<<"\n Cleartrip    \t IT   \t https://www.ctrip.com   \t 9374836652     Active  ";

}

void student :: rostudents()

{
int c;

	cout<<"\n 1) VIEW STUDENTS \n ";
	cout<<"\n 2) COMPANIES APPLIED \n";
	cout<<"\n 3) SELECTED STUDENTS \n";
	cout<<"\n Enter the option you want to choose : ";
	cin>>c;
	clrscr();

	switch(c)
	{

		case 1:
			cout<<"\n\n \4 VIEW STUDENTS : \n";

			cout<<"\n Student name \t  Phone     \t    Email            \t username \t Branch \n";

			cout<<"\n naveen       \t 9867546655 \t  naven34@gmail.com  \t Naveen   \t CSE   \n ";
			cout<<"\n mohit        \t 8979627877 \t  mohit21@gmail.com  \t Mohit    \t CSIT  \n ";
			cout<<"\n vipul        \t 9982745689 \t  vipul43@gmail.com  \t Vipul    \t IT    \n ";
			cout<<"\n ankit        \t 9934677488 \t  ankit12@gmail.com  \t Ankit    \t IT    \n ";
			cout<<"\n ajay         \t 8876356487 \t  ajay332@gmail.com  \t Ajay     \t IT    \n ";
			cout<<"\n ashish       \t 9903346435 \t  ashish1@gmail.com  \t Ashish   \t IT    \n ";
			cout<<"\n vipin        \t 9548374932 \t  vipin23@gmail.com  \t Vipin    \t CSIT  \n ";
			cout<<"\n akhil        \t 9837648693 \t  akhl672@gmail.com  \t Akhil    \t CSE   \n ";
			cout<<"\n yash         \t 9834765634 \t  yash345@gmail.com  \t Yash     \t CSE   \n ";

			break;

		case 2:
			cout<<"\n\n \4 COMPANIES APPLIED : \n ";

			cout<<"\n COMPANY NAME \t\t STUDENT NAME \t\t STATUS  \n";

			cout<<"\n Infosys      \t\t Mohit        \t\t Attended \n";
			cout<<"\n TCS          \t\t Vipin        \t\t Unknown  \n";
			cout<<"\n Wipro        \t\t Ajay         \t\t Selected \n";
			cout<<"\n mexin        \t\t Ankit        \t\t Selected \n";
			cout<<"\n ASD Solution \t\t Naveen       \t\t Unknown  \n";
			cout<<"\n Web solution \t\t Ashish       \t\t Unknown  \n";
			cout<<"\n Swan system  \t\t Akhil        \t\t Selected \n";
			cout<<"\n Cleartrip    \t\t Vipul        \t\t Selected \n";

			break;

		case 3:
			cout<<"\n\n \4 SELECTED STUDENTS : \n ";

			cout<<"\n COMPANY NAME \t\t STUDENT NAME \t\t STATUS \n";


			cout<<"\n Infosys      \t\t Mohit        \t\t Selected \n";
			cout<<"\n Wipro        \t\t Ajay         \t\t Selected \n";
			cout<<"\n Mexin        \t\t Ankit        \t\t Selected \n";
			cout<<"\n Swan system  \t\t Akhil        \t\t Selected \n";
			cout<<"\n cleartrip    \t\t Vipul        \t\t Selected \n";

			break;

	default :
		cout<<"\n THIS IS NOT EXIST TRY AGAIN \n ";
	}

}
void student :: ropstudents()
{
cout<<"\n  STUDENT NAME   \t   COMPANY NAME  \t BRANCH   \t    PHONE    \n";
cout<<"\n   Vinay         \t    TCS          \t  CSE     \t 9845263142 \n";
cout<<"\n   Akash         \t   Wipro         \t  CSIT    \t 9837455263 \n";
cout<<"\n   Avinash       \t   Mexin         \t   IT     \t 8937467354 \n";
cout<<"\n   Rahul         \t   Swan system   \t   IT     \t 8829472523 \n";
cout<<"\n   Tanuj         \t   Cleartrip     \t  CSE     \t 9439764273 \n";
cout<<"\n   Aditya        \t   Infosys       \t  CSIT    \t 9374836403 \n";
cout<<"\n   Ashish        \t    TCS          \t   IT     \t 9023823662 \n";
cout<<"\n   Sahil         \t   Wipro         \t  CSIT    \t 9920838267 \n";
cout<<"\n   Tanmay        \t   ASD Services  \t   IT     \t 9374727636 \n";
cout<<"\n   Shubham       \t   WEB solution  \t   IT     \t 9934467523 \n";

}
void student :: feed()
{

cout<<"\n \4 Infosys interview is being held tommorrow at 10:00 AM in college campus. \n ";
cout<<"\n \4 More IT and BPO companies added. \n ";
cout<<"\n \4 Four companies added checkout!!! \n ";
cout<<"\n \4 Infosys company has been added interested students can apply \n ";
cout<<"\n \4 Hello everyone please check this feed regularly to get the updates \n ";


}
int main()
{
int ch,x;
clrscr();
student obj;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:/TURBOC3/BGI");
setbkcolor(1);
	do
       {
	cout<<"\n \t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4 PLACEMENT MANAGEMENT SYSTEM \4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4 \n\n\n\n";

	cout<<"\n 1) PLACEMENT COMPANIES \n";
	cout<<"\n 2) RECORD OF STUDENTS \n";
	cout<<"\n 3) RECORD OF PREVIOUS YEAR PLACEMENT \n";
	cout<<"\n 4) FEED \n";
	cout<<"\n 5) EXIT \n";
	cout<<"\n select the option from above : ";
	cin>>ch;

	clrscr();
	switch(ch)

	{

		case 1:
			cout<<"\n \4 PLACEMENT COMPANIES : \n ";
			obj.companies();
			break;

		case 2:
			cout<<"\n \4 RECORD OF STUDENTS : \n ";
			obj.rostudents();
			break;

		case 3:
			cout<<"\n \4 RECORD OF PREVIOUS YEAR PLACEMENT : ";
			obj.ropstudents();
			break;

		case 4:
			cout<<"\n \4 FEED : ";
			obj.feed();
			break;

		case 5:
			if(ch==5)
			{
				exit(1);
			}


	default:
		cout<<"\n THIS IS NOT EXIST TRY AGAIN \n";

	}

	cout<<"\n Back to menu then press :: y ";
	cout<<"\n If you want to exit then press :: n";
	x=getch();
	if(x=='n'|| x=='N')
	exit(0);
	clrscr();
	closegraph();
	} while(x=='y'|| x=='Y');

getch();
return 0;
}
