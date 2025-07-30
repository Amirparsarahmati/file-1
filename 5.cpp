#include <iostream>
using namespace std;

class person{
    protected:
    string FirstName;
    string LastName;

    public:
    person(string firstname, string lastname) : FirstName(firstname), LastName(lastname) {}

    void showinfo(){
        cout << "Name: " << FirstName << " " << LastName << "\n";
    }
};
class Student : public person{
    private:
    float Grade;

    public:
    Student(string firstname , string lastname , float grade) : person(firstname , lastname),Grade(grade){}

     void showstudentinfo(){
        showinfo();
        cout << "Grade: " << Grade << "\n";
     }
};
class Teacher : public person{
    private:
    float Salary;

    public:
    Teacher(string firstname , string lastname , float salary) : person(firstname , lastname),Salary(salary){}

    void showteacherinfo(){
        showinfo();
        cout << "Salary: " << Salary << "\n";
    }
};

int main(){
    Student student("Sara","Shayeste",18.5);
    Teacher teacher("Mohammad","Ahmadi",25000000);

    cout << "Student Info: "  << "\n";
    student.showstudentinfo();

    cout << "Teacher Info: " << "\n";
    teacher.showteacherinfo();

    return 0;
}
