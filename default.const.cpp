//Jasnoor Kaur
//24070123049
//Batch: A2

#include <iostream>
using namespace std;

class fetch{
    public:
    int a,b;

    //Default Constructor
    fetch(){
        a = 3;
        b = 4;
    }

    void disp(){
        cout<<"A is "<<a<<"\n";
        cout<<"B is "<<b<<"\n";
    }
};

int main() {
    fetch f1;
    f1.disp();
    
    return 0;
}

// OUTPUT:

//A is 3
//B is 4
