#include<iostream>

namespace uuic {
    class Pair {
        public:
            int a, b;
            int sum() {
                return a + b;
            }
    };
};

int main() {
    uuic::Pair p;
    p.a = 34;
    p.b = 44;

    std::cout << ((34 + 44) == p.sum()) << std::endl;

    return 0;
}
