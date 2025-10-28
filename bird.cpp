#include <iostream>
#include "bird.h"

using namespace std;


Duck::Duck() : Bird("Duck") {
    cry();
}
Duck::~Duck() {
    cry();
}
void Duck::cry() {
    cout << "Quack!" << endl;
}


Penguin::Penguin() : Bird("Penguin") {
    cry();
}
Penguin::~Penguin() {
    cry();
}
void Penguin::fly() {
    cout << "This bird can't fly." << endl;
}

void Penguin::cry() {
    cout << "Squawk!" << endl;
}


Eagle::Eagle() : Bird("Eagle") {
    cry();
}
Eagle::~Eagle() {
    cry();
}
void Eagle::swim() {
    cout << "This bird can't swim." << endl;
}
void Eagle::cry() {
    cout << "Screech!" << endl;
}
