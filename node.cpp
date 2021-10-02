#include "node.h"


namespace seki {
    template<typename T>
    Node<T>::Node(T data): data(data), next(nullptr) {
    }

   /* template<typename T>
    Node<T>::Node() {
        T a;
        data = a;
        next = nullptr;
    }*/
//    template class Node<int>;
}
