#include<iostream>
using namespace std;
class Student
{
    private:
        int rollno;
        string name;
    public:
        Student(int r, string n)
        {
            rollno = r;
            name = n;
        }
        void display()
        {
            cout<<"Roll No : "<<rollno<<endl;
            cout<<"Name : "<<name<<endl;
        }
        ~Student()
        {
            cout<<"Student object destroyed"<<endl;
        }
};
int main()
{
    Student s1(17, "Guruprasath");
    s1.display();
    return 0;
}