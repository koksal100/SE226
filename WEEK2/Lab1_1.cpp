#include <iostream>;
using namespace std;

int main(){

string name;
string studentId;

cout<<"What is your name"<<endl;
getline(cin,name);
cout<<"Hello "<<name<<endl;

cout<<"What is your student ID?"<<endl;
cin>>studentId;
cout<<"Your id is "<<studentId<<endl;



int var1;
    int var2;
    int diff;
    int sum;
    int prod;

    cout<<"Please give an integer for var1"<<endl;
    cin>>var1;
    cout<<"Please give an integer for var2"<<endl;
    cin>>var2;


    sum=var1+var2;
    diff=abs(var1-var2);
    prod=var1*var2;

    cout<<"var1: "<<var1<<"\nvar2:"<<var2<<"\nsum: "<<sum<<"\ndiff: "<<diff<<"\nprod: "<<prod<<endl;


    string name1;
    int labGrade;
    int midtermGrade;
    int finalGrade;
    int lastScore;


    cout<<"What is your name"<<endl;
    cin>>name1;

    cout<<"What is your lab grade"<<endl;
    cin>>labGrade;

    cout<<"What is your midterm grade"<<endl;
    cin>>midtermGrade;

    cout<<"What is your final grade"<<endl;
    cin>>finalGrade;


    lastScore=labGrade*0.25+midtermGrade*0.35+finalGrade*0.40;

    cout<<"name: "<<name1<<"\nlabGrade:"<<labGrade<<"\nmidtermGrade: "<<midtermGrade<<"\nfinalGrade: "<<finalGrade<<"\nlastScore: "<<lastScore<<endl;


    cout<<"*"<<"**"<<"***"<<"**"<<"*"<<endl;




return 0;
}
