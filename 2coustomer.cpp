#include<iostream>

using namespace std;

class coustomer{
	
	private :
		
		int cust_id;
		char cust_name[50];
		int cust_age;
		char cust_telecome_brand_name[50];
		int cust_mobile_number;
		char cust_city[50];
		int cust_simcard_validity;
		
	public:
		void setter();
		void getter();
		
};

 	void coustomer :: setter (){
	
	cout<<"enter id : ";
	cin>>cust_id;
	
	cout<<"enter name : ";
	cin>>cust_name;
	
	cout<<"enter age : ";
	cin>>cust_age;
	
	cout<<"enter your telecome brand : ";
	cin>>cust_telecome_brand_name;
	
	cout<<"enter mobile number : ";
	cin>>cust_mobile_number;
	
	cout<<"enter city : ";
	cin>>cust_city;
	
	cout<<"enter validation of simcard(in years) : ";
	cin>>cust_simcard_validity;
	
}

	void coustomer :: getter(){
	
	cout<<cust_id<<endl;
	cout<<cust_name<<endl;
	cout<<cust_age<<endl;
	cout<<cust_telecome_brand_name<<endl;
	cout<<cust_mobile_number<<endl;
	cout<<cust_city<<endl;
	cout<<cust_simcard_validity<<endl;
}

int main(){
	
	coustomer c1,c2,c3,c4,c5;
	
	cout<<"enter details of coustomer 1"<<endl;
	c1.setter();
	c1.getter();
	cout<<endl;
	
	cout<<"enter details of coustomer 2"<<endl;
	c2.setter();
	c2.getter();
	cout<<endl;
	
	cout<<"enter details of coustomer 3"<<endl;
	c3.setter();
	c3.getter();
	cout<<endl;
	
	cout<<"enter details of coustomer 4"<<endl;
	c4.setter();
	c4.getter();
	cout<<endl;
	
	cout<<"enter details of coustomer 5"<<endl;
	c5.setter();
	c5.getter();
	cout<<endl;
	
	cout<<"      thank you !!"<<endl<<" I really appreciate your effort"<<endl<<" getting this  message is a huge proud";
	
	return 0;
}
