#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

template <typename T>
class Node {
public:
    Node* front;
    T val;
    Node* next;

    Node() {}

    Node(T val) {
        this->val = val;
        this->next = nullptr;
    }
};

template <typename X>
class LinkedList {
private:
    Node<X>* linkedList;

public:
    LinkedList(X size) {
        this->linkedList = nullptr;
    }

    void display() {
        Node<X>* temp = this->linkedList;
        Node<X>* p = this->linkedList;
        while(p != nullptr && p != NULL){
            cout << p->val << "  ";
            p = p->next;
        }
    }

    void insert(X val) {
        Node<X>* newData = new Node<X>(val);
        Node<X>* p = this->linkedList;
        if (this->linkedList == nullptr) {
            this->linkedList = newData;
            return;
        }

       while(p->next != nullptr && p->next != NULL){
            p = p->next;
        }
        newData->next = nullptr;
        newData->front = p;
        p->next = newData;
    }
};

int main() {
    cout << "Please enter the number of elements inside the linked list: ";
    long size;
    cin >> size;

    LinkedList<int> linkListData(size);

    for (int i = 0; i < size; i++) {
        int value;
        cout << "Please enter the element value: ";
        cin >> value;
        linkListData.insert(value);
    }

    linkListData.display();
    return 0;
}
