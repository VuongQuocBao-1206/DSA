#include "class.h"
#include <iostream>

DSLKDon::DSLKDon() : head(nullptr) {}

DSLKDon::~DSLKDon() {
    Node* a = head;
    while (a != nullptr) {
        Node* b = a->next;
        delete a;
        a = b;
    }
}

void DSLKDon::insert(int data) {
    Node* a = new Node{data, head};
    head = a;
}

void DSLKDon::insertAtEnd(int data) {
    Node* a = new Node{data, nullptr};
    if (head == nullptr) {
        head = a;
    } else {
        Node* b = head;
        while (b->next != nullptr) {
            b = b->next;
        }
        b->next = a;
    }
}

void DSLKDon::remove(int data) {
    Node* a = head;
    Node* b = nullptr;
    while (a != nullptr && a->data != data) {
        b = a;
        a = a->next;
    }
    if (a != nullptr) {
        if (b != nullptr) {
            b->next = a->next;
        } else {
            head = a->next;
        }
        delete a;
    }
}

void DSLKDon::display() const {
    Node* a = head;
    while (a != nullptr) {
        std::cout << a->data << " -> ";
        a = a->next;
    }
    std::cout << "null" << std::endl;
}