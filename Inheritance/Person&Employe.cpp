#include<iostream>
using namespace std;
class person
{
    private:
    int salary;
    char company_Name[10];
    public:
    void set_com_Name(char *ch)
    {
        company_Name=ch;
    }
    void set_salary()
    {
        int n1;
        cout<<"enter emp salary"
        cin>>n1;
        salary=n1;
    }

};
class Employee : public person
{
    private:
    char emp_name[10];
    public:
    void set_Name(char ch)
    {
        char com_name[10];
        cout<<"please enter company name";
        cin>>com_name;
        set_com_Name(com_name);
        emp_name=ch;
        set_salary();
        
    }
    void display_emp_information()
    {
        cout<<"company name = "<< company_Name;
        cout<<"employee name"<< emp_name;
        cout<<"emp salary"<<salary;
    }
};

int main()
{
    char ch[10]="vishal kumar";
    Employee E1;
    E1.set_Name(ch);
    E1.display_emp_information();
}