#include <iostream>
#include <string>
using namespace std;
class person {
protected:string name; 
          string family_name;};

class student:public person {
private:
    float avg = 19.5;
public:
    float getAvg(){return avg;}};

class teacher:public person {
private:
    float sal = 1000;
public:
    float getSal(){ return sal;}};
int main() {
    student s;
    teacher t;
    cout << "Student average: " << s.getAvg() << endl;
    cout << "Teacher salary: " << t.getSal() << endl;}
