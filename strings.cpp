#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b, c, d;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    c = a[0];
    d = b[0];
    a.erase(a.begin() + 0);
    b.erase(b.begin() + 0);
    cout<<d+a<<" "<<c+b;
    return 0;
}

