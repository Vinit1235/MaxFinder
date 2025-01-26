#include <iostream>
using namespace std;

int maxofThree(int a, int b, int c){
    if (a>b && a>c){
        return a;
    }else if (b>c){
        return b;
    }else {
        return c;
    }
}
int main() {
    int a,b,c;
    cout<<"Enter a,b,c"<<endl;
    cin>>a>>b>>c;
    int maxval = maxofThree( a, b, c); 
        cout<<"The c is max value"<<" "<<maxval<<endl;
    
    return 0;
}
