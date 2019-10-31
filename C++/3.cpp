#include<iostream>
#include<ios>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    cout<<"Please enter your first name: ";
    string name;
    cin>>name;
    cout<<"Hello, "<<name<<"!"<<endl;

    cout<<"Enter all your homework grades, ";
    double midterm,final;
    cin>>midterm>>final;

    cout<<"Enter all your homework grades, "
          "followed by end-of-file: ";

    int count = 0;
    double sum = 0;

    double x;

    while (cin>>x)
    {
        /* code */
        ++count;
        sum += x;
    }

    streamsize prec = cout.precision();
    cout<<"Your final grades is "<<setprecision(3)<<0.2 * midterm + 0.4 * final + 0.4 * sum / count << setprecision(prec) << endl;

    return 0;
}