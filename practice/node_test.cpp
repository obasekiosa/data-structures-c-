#include "node.h"
#include<iostream>


int main() {
    seki::Node<int> n(32);
    //n.data = 32;
    std::cout << n.data << std::endl;
    std::cout << "lll\n" << n.next << std::endl;
}

