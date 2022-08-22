#include<iostream>
#include<string.h>
using namespace std;
// employee system

class A
{
	public:
	int emp_id;
	char emp_name[100];
	int emp_salary;
	int emp_age;
	char emp_role[100];
	char emp_email[100];
	int emp_ex_year;
	static char emp_com_name[100];
};

class B : public A
{
	public : 
	
 setB()
	{
	cout << "employee id : ";     cin >> emp_id; 
	cout << "employee name : ";   cin >> emp_name; 
	cout << "employee age : ";    cin >> emp_age;
	
		
	}
	getagewisedata()
	{
		int ch,q = 0,p=0,r=0;
		cout << "enter 1 for employee age equal to 25" << endl;
		cout << "enter 2 for employee age greater than 25" << endl;
		cout << "enter 3 for employee age less than 25" << endl;
		cin  >> ch;
		
		switch(ch)
		{
		case 1:
			
			if(emp_age==25)
			{
				q++;
			/*	if(q>0)
				{
				cout << "data of 25 year of employee::";
				cout << "employee name : " << emp_name; 
	             cout << "employee age : " <<  emp_id;
			    }*/
				}
				break;
		case 2:
			
		    if(emp_age>25)
		    {
		    	
		    	p++;
		    /*if(p>0)	
		    {
				cout << "data of greter than 25 year of employee::";
				cout << "employee name : " << emp_name; 
	             cout << "employee age : " <<  emp_id;
	 	
	 	    }*/
	     	}
	     	break;
		case 3:
			
		    if(emp_age<25)
	    	{
	    	r++;
	    /*	if(r>0)
	    	{
			cout << "data of less than 25 year of employee::";
				cout << "employee name : " << emp_name; 
	             cout << "employee age : " <<  emp_id;
		
		    }*/
		    }
		    break;
		   
	    
	   }
	}
};

class C : public B
{
	public : 
  void setC()
   {
   
	cout << "employree role : "; cin >> emp_role; 
	cout << "employree email : "; cin >> emp_email; 
	cout << "employree salary : "; cin >> emp_salary; 
	cout << "employree experience year : "; cin >> emp_ex_year; 
	//cout << "employree company name : "; cin >> e1.emp_com_name; 
   }
	get_salary_wise_data()
	{
		int ch;
		cout << "enter 1 for employee salary equal to 25000 rupee" << endl;
		cout << "enter 2 for employee salary greater than 25000 rupee" << endl;
		cout << "enter 3 for employee salary less than 25000 rupee" << endl;
		cin  >> ch;
		
		switch(ch)
		{
		case 1:
			if(emp_salary==25000)
			{
				setC();
				}
				break;
		case 2:
		    if(emp_salary>25000)
		    {
	 		setC();
	 		
	     	}
	     	break;
		case 3:
		    if(emp_salary<25000)
	    	{
			setC();
		    }
		    break;
		   
	    }
	  
	}	
	
};

class D : public C
 {
	
    public :
    	B.a1;
	getdataall()
	{
			if(getagewisedata() == a1.q)
			{
					cout << "data of 25 year of employee::";
				cout << "employee name : " << emp_name; 
	             cout << "employee age : " <<  emp_id;
			}
			else if(getagewisedata() == p)
			{
				cout << "data of greter than 25 year of employee::";
				cout << "employee name : " << emp_name; 
	             cout << "employee age : " <<  emp_id;
			}
			else if(getagewisedata() == r)
			{
				cout << "data of less than 25 year of employee::";
				cout << "employee name : " << emp_name; 
	             cout << "employee age : " <<  emp_id;
			}
			
			
			
		//	get_salary_wise_data();
		//	get_exp();
			
/*	cout << "employee id : " << emp_id << endl; 
	cout << "employee name : " << emp_name << endl; 
	cout << "employee age : " <<  emp_age << endl; 
	cout << "employee salary : " << emp_salary << endl;
	cout << "employee role : " << emp_role << endl; 
	cout << "employee email : " <<  emp_email << endl; 
	cout << "employee experience year : " << emp_ex_year << endl; 
	cout << "employee company name : " << emp_com_name << endl; 
	cout << endl;*/
	}
	
	get_exp()
	{
	int ch;
		cout << "enter 1 for employee experiance equal to 5 year" << endl;
		cout << "enter 2 for employee experiance greater than 5 year" << endl;
		cout << "enter 3 for employee experiance less than 5 yaer" << endl;
		cin  >> ch;
		
		switch(ch)
		{
		case 1:
			if(emp_ex_year==5)
			{
				setB();
				}
				break;
		case 2:
		    if(emp_ex_year>5)
		    {
	 		setB();
	 		
	     	}
	     	break;
		case 3:
		    if(emp_ex_year<5)
	    	{
			setB();
		    }
		    break;
		   
	    
	   }
	
	}
};

char A :: emp_com_name[100] = "rnw";

int main()
{
   D e1[100];
   int i,n;
   
   cout << "enter how many employee record you want to know ::";
   cin >> n;
   for(i=0;i<n;i++)
   {
   	e1[i].setB();
   	e1[i].setC();
   }
   cout << endl;
   
   for(i=0;i<n;i++)
   {
   	e1[i].getdataall();
   }
   
   return 0;
   
}
   
