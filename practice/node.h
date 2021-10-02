#pragma once

namespace seki {
    template <typename T>
    class Node {
        public:
            T data;
            Node<T> *next;
            Node(T);
           // Node();
    };

   template<typename T>
   Node<T>::Node(T data) : data{data}, next{nullptr} {}
}

