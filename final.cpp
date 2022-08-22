#include<iostream>
#include<string.h>
using namespace std;
/* employee system accorging multilevel inheritage*/


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
int id()
{
	cout << "employee id :: ";   cin >> this->emp_id;
	return emp_id;
};
void name()
{
	cout << "employee name ::";  cin >> this->emp_name;
};
int age()
{
	cout << "employree age :: "; cin >> this->emp_age;
	return emp_age;
};
void salary()
{
	cout << "employee salary :: "; cin >> this->emp_salary;
}
void exp_year()
{
	cout << "employee exp year ::"; cin >> this->emp_ex_year;
}
void role()
{
	cout << "employree role :: "; cin >> this->emp_role;
}
void email()
{
	cout << "employee email :: "; cin >> this->emp_email;
}

};

char A :: emp_com_name[100] = "rnw";

class B : public A
{
	public: 
	
	setB()
	{
		id();
	
		name();
	
		age();
		
	}
	
  get_age_wise_data()
	{
	
	 int ch,m=0,n=0,p=0;
	    cout << "enter 1 for employee age equal to 25" << endl;
		cout << "enter 2 for employee age greater than 25" << endl;
		cout << "enter 3 for employee age less than 25" << endl;
		
		switch(ch)
		{
		case 1:
			if(age() == 25)
			{
				m++;
				if(m>0)
				{
				
				cout << " age 25 year wise data ::";
				name();
				id();
			    }
				}
				break;
		case 2:
		    if(age() > 25)
		    {
		    	n++;
		    	if(n>0)
		    	{
				
	 			cout << " age 25 year wise data ::";
				name();
				id();
			     }
	     	}
	     	break;
		case 3:
		    if(age() < 25)
	    	{
	    		p++;
	    		if(p>0)
	    		{
				
				cout << " age 25 year wise data ::";
				name();
				id();
			    }
		    }
		    break;
		   
	     }
		
	}
};

class C : public B
{
	public:
	setC()
	{
		salary();
		
		exp_year();
		
		role();
		
		email();
	}
	
};

class D : public C
{
	public:
		getalldata()
		{
			get_age_wise_data();
		}
		
};

int main()
{
	D e1[100];
	int i,n;
   
   cout << "enter how many employee recorde you want to know ::";
   cin >> n;
   
   for(i=0;i<n;i++)
   {
   	e1[i].setB();
   	e1[i].setC();
   }
   cout << endl;
   
   for(i=0;i<n;i++)
   {
   	e1[i].getalldata();
   }
   

		   
	    
	
	return 0;
   
}
