#include "class.h"
#include <iostream>

DSLKDonVong::DSLKDonVong() : head(nullptr) {}

DSLKDonVong::~DSLKDonVong() {
    if (head != nullptr) {
        Node* a = head;
        do {
            Node* b = a->next;
            delete a;
            a = b;
        } while (a != head);
    }
}

void DSLKDonVong::insert(int data) {
    Node* a = new Node{data, nullptr};
    if (head == nullptr) {
        head = a;
        a->next = head;
    } else {
        Node* b = head;
        while (b->next != head) {
            b = b->next;
        }
        b->next = a;
        a->next = head;
    }
}

void DSLKDonVong::insertAtBegin(int data) {
    Node* a = new Node{data, head};
    if (head == nullptr) {
        head = a;
        a->next = head;
    } else {
        Node* b = head;
        while (b->next != head) {
            b = b->next;
        }
        b->next = a;
        head = a;
    }
}

void DSLKDonVong::insertAtEnd(int data) {
    Node* a = new Node{data, head};
    if (head == nullptr) {
        head = a;
        a->next = head;
    } else {
        Node* b = head;
        while (b->next != head) {
            b = b->next;
        }
        b->next = a;
    }
}

void DSLKDonVong::display() const {
    if (head == nullptr) return;

    Node* a = head;
    do {
        std::cout << a->data << " -> ";
        a = a->next;
    } while (a != head);
    std::cout << "(head)" << std::endl;
}