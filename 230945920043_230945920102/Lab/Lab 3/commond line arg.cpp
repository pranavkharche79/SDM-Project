#include <iostream>
using namespace std;
int main(int num, char* arg[]) 
{
    cout<<"enter a number"<<endl;
    cin>>num;
    cout << "command-line arguments: " << num << endl;


    for (int i = 1; i < num; i++) {
        cout << "Argument =" << num << arg[i] <<endl;
        cout<<"r";
    }
    return 0;
}

