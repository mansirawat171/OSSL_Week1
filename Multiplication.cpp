#include <iostream>
#include <string>

using namespace std;

int multiply(int &a, int &b){
    int ans = a*b;
    return ans;
}

int main () {
    int a,b;
    string name;
    cout<<"Enter name: "<<endl;
    cin>>name;
    cout<<"--------------HELLO "<<name<<"---------------"<<endl;
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b: "<<endl;
    cin>>b;
    cout<<"--------------ANSWER--------------- "<<endl;
    cout<<multiply(a,b)<<endl;
    cout<<"------------THANK YOU------------- "<<endl;

    return 0;
}
