#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
struct student
{
	int id;
	string fname;
	string lname;
	string address;
	string phone;
	string email;
};
void input(student *s1);
void output(student *s1);
void sort(student *s1);
void add_contact(student *s1);
void find_contact(student *s1);
void del_contact(student *s1);
void mod_contact(student *s1);
int main()
{
	student s,*s2;
	s2=&s;
	char ch;
	cout<<"Press W for Write"<<endl;
	cout<<"Press R for Read"<<endl;
	cout<<"Press S for Sort"<<endl;
	cout<<"Press A for Add contact"<<endl;
	cout<<"Press F for Find contact"<<endl;
	cout<<"Press D for Delete contact"<<endl;
	cout<<"Press M for Modify contact"<<endl;
	cin>>ch;
	if(ch=='W'||ch=='w')
	{
	input(s2);	
	}
	if(ch=='R'||ch=='r')
	{
	output(s2);	
	}
	if(ch=='S'||ch=='s')
	{
	sort(s2);
	}
	if(ch=='A'||ch=='a')
	{
	add_contact(s2);	
	}
	if(ch=='F'||ch=='f')
	{
	find_contact(s2);	
	}
	if(ch=='D'||ch=='d')
	{
	del_contact(s2);	
	}
	if(ch=='M'||ch=='m')
	{
	mod_contact(s2);
	}
}
void input(student *s1)
{
	fstream file;
	cout<<"Enter contact id,first Name, last name, address, phone no and email"<<endl;
	file.open("project.txt",ios::app);
   for(int i=0;i<=1;i++)	
  {
	cin>>(*s1).id>>(*s1).fname>>(*s1).lname>>(*s1).address>>(*s1).phone>>(*s1).email;
	file<<(*s1).id<<"\n"<<(*s1).fname<<"\n"<<(*s1).lname<<"\n"<<(*s1).address<<"\n"<<(*s1).phone<<"\n"<<(*s1).email<<"\n";
	}
	file.close();
}
void output(student *s1)
{
	fstream file;
	file.open("project.txt",ios::in);
  while(!file.eof())
	{
    	file>>(*s1).id>>(*s1).fname>>(*s1).lname>>(*s1).address>>(*s1).phone>>(*s1).email;
    	cout<<"id ="<<(*s1).id<<"\n"<<"first name ="<<(*s1).fname<<"\n"<<"last name ="<<(*s1).lname<<"\n"<<"address ="<<(*s1).address<<"\n"<<"Phone number ="<<(*s1).phone<<"\n"<<"Email ="<<(*s1).email<<endl;
    }
  file.close();
}
void add_contact(student *s1)
{
	fstream file;
	cout<<"Enter contact id,first Name, last name, address, phone no and email"<<endl;
	int t;
	file.open("project.txt",ios::app);
  for(t=1;t<=1;t++)	
  {
    cin>>(*s1).id>>(*s1).fname>>(*s1).lname>>(*s1).address>>(*s1).phone>>(*s1).email;
	file<<(*s1).id<<"\n"<<(*s1).fname<<"\n"<<(*s1).lname<<"\n"<<(*s1).address<<"\n"<<(*s1).phone<<"\n"<<(*s1).email<<"\n";
	}
	file.close();
}
void sort(student *s1)
{
	fstream file;
	student arr[30],temp;
	int x=0,a;
	file.open("project.txt",ios::in);
		while(! file.eof())
	{
    	file>>(*s1).id>>(*s1).fname>>(*s1).lname>>(*s1).address>>(*s1).phone>>(*s1).email;
    	arr[x]=*s1;
    	cout<<arr[x].id<<"\n"<<arr[x].fname<<"\n";
    	x++;
    }
    for(int i=0;i<x;i++)
    {
    	for(int i=i+1;i<x;i++)
    	{
    		if(arr[x].id>arr[a].id)
    		{
    			temp=(arr[i]);
    			(arr[i])=(arr[a]);
    			(arr[a])=temp;
			}
		}
	}
	for(int i=0;i<x;i++)
	{
		cout<<arr[i].id<<"\n"<<arr[i].fname<<"\n";
	}
}
void find_contact(student *s1)
{
	fstream file;
	int x;
	cout<<"enter id:"<<endl;
	cin>>x;
	file.open("project.txt",ios::in);
		while(! file.eof())
	{
    	file>>(*s1).id>>(*s1).fname>>(*s1).lname>>(*s1).address>>(*s1).phone>>(*s1).email;
    	if((*s1).id==x)
    	{
    		    	cout<<"id ="<<(*s1).id<<"\n"<<"first name ="<<(*s1).fname<<"\n"<<"last name ="<<(*s1).lname<<"\n"<<"address ="<<(*s1).address<<"\n"<<"Phone number ="<<(*s1).phone<<"\n"<<"Email ="<<(*s1).email<<endl;
		}
    }
}
void del_contact(student *s1)
{
	fstream file,file2;
	int x;
	cout<<"enter id:"<<endl;
	cin>>x;
	file.open("project.txt",ios::in);
	{
			while(! file.eof())
	{
    	file>>(*s1).id>>(*s1).fname>>(*s1).lname>>(*s1).address>>(*s1).phone>>(*s1).email;
    	if(x!=(*s1).id)
    	{
    		file2.open("temp.txt",ios::app);
        	file2<<(*s1).id<<"\n"<<(*s1).fname<<"\n"<<(*s1).lname<<"\n"<<(*s1).address<<"\n"<<(*s1).phone<<"\n"<<(*s1).email<<"\n";
		}
    }
    file2.close();
    
}
file.close();
rename("project.txt","temp.txt");
remove("project.txt");
}
void mod_contact(student *s1)
{
fstream file,file2;
	int x;
	cout<<"enter id:"<<endl;
	cin>>x;
	file.open("project.txt",ios::in);
	{
			while(! file.eof())
	{
    	file>>(*s1).id>>(*s1).fname>>(*s1).lname>>(*s1).address>>(*s1).phone>>(*s1).email;
    	if(x!=(*s1).id)
    	{
    		file2.open("temp.txt",ios::app);
        	file2<<(*s1).id<<"\n"<<(*s1).fname<<"\n"<<(*s1).lname<<"\n"<<(*s1).address<<"\n"<<(*s1).phone<<"\n"<<(*s1).email<<"\n";
		}
    }
    file2.close();    
}
file.close();
rename("project.txt","temp.txt");
remove("project.txt");
fstream file3;
	cout<<"Enter Modify Data"<<endl;
	file3.open("temp.txt",ios::app);
   for(int i=1;i<=1;i++)	
  {
	cin>>(*s1).id>>(*s1).fname>>(*s1).lname>>(*s1).address>>(*s1).phone>>(*s1).email;
	file3<<(*s1).id<<"\n"<<(*s1).fname<<"\n"<<(*s1).lname<<"\n"<<(*s1).address<<"\n"<<(*s1).phone<<"\n"<<(*s1).email<<"\n";
	}
	file3.close();	
}
