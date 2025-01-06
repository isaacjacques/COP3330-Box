#include "box.h"
#include <iostream>

using namespace std;

Box :: Box(short size, char border, char fill) {
    SetSize(size);
    SetBorder(border);
    SetFill(fill);
}

void Box::SetSize(short s) {
    if(s > MAX_SIZE) {
        size = MAX_SIZE;
    } else {
        size = s;
    }
}

void Box::GrowSize(short s) {
    for(short i=0;i<s;i++) {
        size++;
    }
}

short Box::GetSize(){
    return size;
}

void Box::SetBorder(char b) {
    border = b;
}

char Box::GetBorder(){
    return border;
}

void Box::SetFill(char f) {
    fill = f;
}

char Box::GetFill(){
    return fill;
}
void Box::Summary(){
    cout << "Size:" << size << endl; 
    cout << "Border:" << border << endl; 
    cout << "Fill:" << fill << endl; 
    Draw();
}

void Box::Draw(){
    if(size==1){
        cout << border << endl;
    } else if (size==2) {
        cout << border << ' ' << border << endl;
        cout << border << ' ' << border << endl;
    } else {
        for(int i=0;i<size;i++){
            cout << ' ' << border;
        }
        cout << endl;
        for(int i=0;i<size-2;i++){
            cout << ' ' << border;
            for(int j=0;j<size-2;j++){
                cout << ' ' << fill;
            }
            cout << ' '<< border << ' ' <<  endl;
        }
        for(int i=0;i<size;i++){
            cout << ' ' << border;
        }
        cout << endl;
    }
}