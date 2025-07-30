#include <iostream>
using namespace std;
class person{ 
    private :
     string name[10] = {"taha", "behzad", "erfan", "khosro","zahra", "soheil", "ida", "arash", "ali", "paresa"};
     int age[10] = {25,30,28,22,26,19,18,15,23,22};

    public:
    double giveavg(){
        double sum=0;
        for(int n=0;n<10;n++){
            sum+=age[n];};
        return (double) sum/10;
};  
};
int main() {
    person p;
    cout << "Average Age: " << p.giveavg() << endl; 
    return 0;
}
