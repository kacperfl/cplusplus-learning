#include <iostream>

struct A {
    int x;
};

void test() {
    A a;
    A* p = &a;
    p->x = 20;
}

int main(){
test();

}