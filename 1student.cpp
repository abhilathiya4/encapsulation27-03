#include<iostream>
#include<string.h>

using namespace std;

class student{
	
	private :
		
		int stu_id;
		char stu_name[50];
		int stu_age;
		char stu_course[50];
		char stu_email[50];
		char stu_city[50];
		char stu_college[50];
	
	public :
		
		void setter();
		void getter();
};

	void student::setter(){
		
		cout<<"enter id : ";
		cin>>stu_id;
		
		cout<<"enter name : ";
		cin>>stu_name;
		
		cout<<"enter age : ";
		cin>>stu_age;
		
		cout<<"enter course : ";
		cin>>stu_course;
		
		cout<<"enter email : ";
		cin>>stu_email;
		
		cout<<"enter city : ";
		cin>>stu_city;
		
		cout<<"enter college : ";
		cin>>stu_college;
	
	}
	
	void student::getter(){
		
		cout<<stu_id<<endl;
		cout<<stu_name<<endl;
		cout<<stu_age<<endl;
		cout<<stu_course<<endl;
		cout<<stu_email<<endl;
		cout<<stu_city<<endl;
		cout<<stu_college<<endl;
		
	}
	

int main(){
	
	student d1,d2,d3,d4,d5;
	cout<<"enter information of student 1: "<<endl;
	d1.setter();
	d1.getter();
	
	cout<<endl;
	cout<<"enter information of student 2: "<<endl;
	d2.setter();
	d2.getter();
	cout<<endl;
	cout<<"enter information of student 3: "<<endl;
	d3.setter();
	d3.getter();
	cout<<endl;
	cout<<"enter information of student 4: "<<endl;
	d4.setter();
	d4.getter();
	cout<<endl;
	cout<<"enter information of student 5: "<<endl;
	d5.setter();
	d5.getter();
	
	cout<<"  thank you !!"<<endl<<"   I really appreciate your effort"<<endl<<"  getting this  message is a huge proud";
	
	return 0;
}
