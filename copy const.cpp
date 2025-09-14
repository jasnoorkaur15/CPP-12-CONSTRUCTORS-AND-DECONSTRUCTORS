//Jasnoor Kaur
//24070123049
//Batch: A2

#include <iostream>
using namespace std;

class student{
    int prn;
    string name;
    int fee;
    public:
    student(int rn, string nm, int fe){
        prn = rn;
        name = nm;
        fee = fe;
    }
    student(student &t){
        prn = t.prn;
        name = t.name;
        fee = t.fee;
    }
    
    void display(){
        cout<<endl<<prn<<"\t"<<name<<"\t"<<fee;
    }
};

int main() {
    
    student s(15, "Student1", 10000);
    s.display();
    student Student1(s);
    Student1();
    
    return 0;
}

//OUTPUT:

//15	Student1	10000
//15	Student1	10000
