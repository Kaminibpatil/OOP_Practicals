#include<iostream>
#include<string.h>
using namespace std;
class a
{   protected:
	char name[10];
	char dob[15];
	char bg[10];
}; 
class b
{  protected:
	float height,weight;
};
class c
{  protected:
	long int policyno;
	char addr[10];
};
class employee:public a,public b,public c
{  public:
	long int lcno;
	char phone[11];
	int key;
	int accept()
	{
	cout<<"\nEnter the name of Employee:";
	cin>>name;
	cout<<"Enter Date of Birth:";
	cin>>dob;
	cout<<"Enter the Blood Group:";
	cin>>bg;
	cout<<"Enter the Height:";
	cin>>height;
	cout<<"Enter the Weight:";
	cin>>weight;
	cout<<"Enter the Policy number:";
	cin>>policyno;
	cout<<"Enter the Address:";
	cin>>addr;
	cout<<"Enter the Licence number:";
	cin>>lcno;
	cout<<"Enter the Phone number: ";
	cin>>phone;
	}
	int display()
	{
	cout<<"\nDetails Entered are:";
	cout<<"\n"<<"Name"<<"\t"<<"DOB"<<"\t\t"<<"BG"<<"\t"<<"Height"<<"\t"<<"Weight"<<"\t"<<"Policyno"<<"\t"<<"Address"<<"\t"<<"Lcno"<<"\t\t"<<"Phone";
	cout<<"\n"<<name<<"\t"<<dob<<"\t"<<bg<<"\t"<<height<<"\t"<<weight<<"\t"<<policyno<<"\t"<<addr<<"\t"<<lcno<<"\t"<<phone;
	}
	int search(char key[10])
	{  if(strcmp(name,key)==0)
	{	return 1;	}
	else	return 0;	}
};
int main()
{
int i,n;
char key[10];
employee e[10];
	int ch;
do{
	cout<<"\n\n\n1.Enter Employee Details \n"<<"2.Display all details\n"<<"3.Search \n"<<"4.Modify\n"<<"5.Insert\n"<<"6.Delete";
	cout<<"\nEnter Your Choice:";
	cin>>ch;
switch(ch)
	{  case 1:
	cout<<"\nEnter number of Employee detail you want to add: ";
	cin>>n;
	for(i=0;i<n;i++){
	cout<<"\nEnter the detail of employee"<<i+1<<"\n";
	e[i].accept();
	}
	break;
	case 2: 	for(i=0;i<n;i++)
	e[i].display();
	break;
	case 3:	cout<<"\nEnter name you want to search: ";
	cin>>key;
	for(i=0;i<n;i++)
	if(e[i].search(key)){
	cout<<"entry found";
	e[i].display();
	break;
	}
	if(i==n)
	{	cout<<"\nRecord not found";		}	
	break;	
	case 4: cout<<"\nEnter name of the Employee: ";
	cin>>key;
	for(i=0;i<n;i++)
	if(e[i].search(key))
	{   e[i].accept();
	break;
	}
	if(i==n)  {
	cout<<"\nRecord not present";
	break;
	}
	break;
	case 5: 	e[n++].accept();
	break;
	case 6:  cout<<"\nEnter name of the Employee: ";
	cin>>key;
	for(i=0;i<n;i++)
	{	if(e[i].search(key))  {
	for(;i<n-1;i++)
	{	e[i]=e[i+1];	}
	n--;
	}	}
	if(i==n)
	cout<<"\nrecord not present";
	break;
	}
}while(ch!=7);
}

