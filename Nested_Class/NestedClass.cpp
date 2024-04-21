#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
    char Name[10];
    int Roll;
    int  section;
    class Address
    {
        private:

        int House_No;
        char street[10];
        char Area[19];
        char District[10];
        char State[10];

        public:
        void Set_Address(int house_no ,char *s, char *A , char *D , char *state)
        {
            House_No=house_no;
             strcpy(street,s);
             strcpy(Area,A);
             strcpy(District,D);
             strcpy(State,state);
        }

        void view_Address()
        {
            cout<<"House Noumber"<<House_No<< "street"<< street << "area"<<Area<<"district"<<District<<"state"<< State;
        }


    };
    Address add;
    public:

    void Set_studentInfo(int roll,char *n,int sec)
    {
        Roll = roll;
        strcpy(Name,n);
        section = sec;
    }
    
    void view_student_info()
    {
        cout << "student name ="<< Name<<endl<< "roll = "<< Roll<<endl<<"section = "<<section;
    }
};

int main()
{
    Student S1;
    char name[7]="vishal";
    S1.Set_studentInfo(4,name,12);
    S1.view_student_info();
    return 0;
}