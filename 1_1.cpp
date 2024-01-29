#include<iostream>
using namespace std;

class Admin{
	protected:
    	int manager_salary;
    	int can_terminate;
    	int employee_salary;
    	int total_staff;
    	int total_revenue;
	public:
    	char company_name[30];
    	void AdminValue(){
        	cout<<"Enter Manager Salary : ";
        	cin>>manager_salary;
        	cout<<"Enter Termination of Contract : ";
        	cin>>can_terminate;
    	}
};

class Manager : public Admin{
	public:
    	void ManagerValue(){
        	cout<<"Enter Employee Salary : ";
        	cin>>employee_salary;
        	cout<<"Enter Total Staff in Company : ";
        	cin>>total_staff;
        	cout<<"Enter Total Revenue : ";
        	cin>>total_revenue;
    }
	public:
    	void myAccess(){
        	cout<<" Manager Salary : " <<manager_salary<<endl;
        	cout<<" Termination of Contract : " <<can_terminate<<endl;
    }
};

class Employee : public Manager{
	public:
    	void EmployeeValue(){
        	cout<<"Enter Company Name : ";
        	cin>>company_name;
    	}
    void myAccess(){
        cout<<" Employee Salary is : "<<employee_salary<<endl;
        cout<<" Total Staff in Company is : "<<total_staff<<endl;
        cout<<" Total Revenue of Company is : "<<total_revenue<<endl;
        cout<<" Company Name is : "<<company_name<<endl;
    }
};

int main(){
    Employee e;
    e.AdminValue();
	e.ManagerValue();
    e.EmployeeValue();
    e.Manager::myAccess();
    e.Employee::myAccess();
    return 0;
}
