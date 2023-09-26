#include<iostream>
#include<string.h>
using namespace std;
class book_store{  public:
	char *title;
	char *author;
	char *publisher;
	double price;
	int stock;
	static int unsucc;
	static int succ;
	book_store()	{
		title=new char[20];
		author= new char[20];
		publisher=new char[20];
		price=0;
		stock=0;
	}
	void getdata()	{
		cout<<"\nEnter the book title : ";
		cin>>title;
		cout<<"\nEnter the book author: ";
		cin>>author;
		cout<<"\nEnter the publisher :";
		cin>>publisher;
		cout<<"\nEnter the book price :";
		cin>>price;
		cout<<"\nEnter the total stocks of books :";
		cin>>stock;	
	}
	void display()	{
		cout<<title<<"\t\t"<<author<<"\t\t"<<publisher<<"\t\t"<<price<<"\t\t"<<stock<<"\n";
	}
	static void successfull()	{	succ++; 	}
	static void unsuccessfull()	{	unsucc++;	}
};
int book_store::succ;
int book_store::unsucc;
int main()	{
	int i=0,n=0,opt,copies,opt2;
	float new_val;
	char ch, book[20],new_name[20];
	book_store b[20];
	do{
cout<<"\n1.Enter data\n2.Display Data\n3.Search\n4.Updata price\n5.Buy Book\n6.Transaction details\n7.Exit\n";
		cout<<"\nEnter the choice : ";
		cin>>opt;
		switch(opt)
		{	case 1:
				do{
				
					b[n].getdata();
					n++;
					cout<<"\nWant to enter another entry(y/n):";
					cin>>ch;
				}while(ch=='y');
				break;
			case 2:	cout<<"\nName\t\tAuthor\t\tPublisher\tPrice\t\tStock\n";
				cout<<"------------------------------------------------------------------------------\n";
				for(i=0;i<n;i++)
				{	b[i].display();		}
				break;
			case 3:	cout<<"Enter Book Name to be Search For :";
				cin>>book;
				for(i=0;i<n;i++)
				{	if(strcmp(b[i].title,book)==0)
					{	cout<<"\nBook Found!\n";
						cout<<"\nName\t\tAuthor\t\tPublisher\tPrice\t\tStock\n";
						cout<<"-------------------------------------------------------------\n";
cout<<b[i].title<<"\t\t"<<b[i].author<<"\t\t"<<b[i].publisher<<"\t\t"<<b[i].price<<"\t\t"<<b[i].stock<<"\n";
						break;
					}
				}
				if(i==n)	  {	cout<<"\nBook Not Found!\n";		}
				break;
			case 4:
				cout<<"Enter Book Name to be Update :";
				cin>>book;
				for(i=0;i<n;i++)
				{	if(strcmp(b[i].title,book)==0)
					{
cout<<"1.Update BookName\n2.Update Author Name\n3.Update Publisher Name\n4.Update Price\n5.Update Stock";
						cout<<"\nEnter Your Choice :";
						cin>>opt2;
						switch(opt2)
						{	case 1:	cout<<"\nEnter New Book Title :";
								cin>>new_name;
								b[i].title = new_name;
								cout<<"\nBook Title Updated!\n";
								break;
							case 2:	cout<<"\nEnter New Author Name :";
								cin>>new_name;
								b[i].author = new_name;
								cout<<"\nAuthor Name Updated!\n";
								break;
							case 3:	cout<<"\nEnter New Publisher Name :";
								cin>>new_name;
								b[i].publisher =	new_name;
								cout<<"\nPublisher Name Updated!\n";
								break;
							case 4:	cout<<"\nEnter New Price:";
								cin>>new_val;
								b[i].price = new_val;
								cout<<"\nPrice Updated!\n";
								break;
							case 5:	cout<<"\nEnter NewStock :";
								cin>>new_val;
								b[i].stock = new_val;
								cout<<"\nStock Updated Updated!\n";
								break;
							default:	cout<<"\nEnter ValidChoice";
								break;
						}
						break;
				}	}
						if(i==n)
						{	cout<<"\nBook Not Found!\n";		}
						break;
			case 5:	cout<<"\nWhich Book You Want to Buy :";
				cin>>book;
				for(i=0;i<n;i++)
				{	if(strcmp(b[i].title,book)==0)
					{	cout<<"\nHow Many Copies You Want to Buy :";
						cin>>copies;
						if(copies>b[i].stock)
						{	cout<<"\nTransaction Unsuccessfull!\n";
							book_store::unsuccessfull();
						}
					else{
						cout<<"Total Price to be paid Rs."<<copies*b[i].price<<"\n";
							b[i].stock = b[i].stock - copies;
							book_store::successfull();
							}
							break;
					}	}
				break;
		case 6:	cout<<"\nTransaction Details:\n";
			cout<<"\nTotal Transaction:"<<book_store::succ+book_store::unsucc;
			cout<<"\nSuccessfull Transaction	:"<<book_store::succ;
			cout<<"\nUnsuccessfull Transaction :"<<book_store::unsucc<<"\n";
			break;
		case 7:	exit(0);
			break;
		default:	cout<<"\nEnter Valid Choice!";
			break;
		}
} while(opt!=7);
return 0;
}

