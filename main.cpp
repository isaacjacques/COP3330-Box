#include <iostream>
#include "box.h"
using namespace std;

int main(){
    cout << "starting." << endl;

    Box box1(1,'#','*');
    box1.Summary();

    Box box2(2,'#','*');
    box2.Summary();

    Box box3(5,'#','*');
    box3.Summary();


    cout << "done." << endl;

    return 0;
}