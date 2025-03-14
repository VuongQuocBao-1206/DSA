#include "class.h"
#include <iostream>

DSLKKep::DSLKKep() : head(nullptr) {}

DSLKKep::~DSLKKep() {
    DoubleNode* a = head;
    while (a != nullptr) {
        DoubleNode* b = a->next;
        delete a;
        a = b;
    }
}

void DSLKKep::insert(int data) {
    DoubleNode* a = new DoubleNode{data, head, nullptr};
    if (head != nullptr) {
        head->prev = a;
    }
    head = a;
}

void DSLKKep::insertAtBegin(int data) {
    insert(data);
}

void DSLKKep::insertAtEnd(int data) {
    DoubleNode* a = new DoubleNode{data, nullptr, nullptr};
    if (head == nullptr) {
        head = a;
    } else {
        DoubleNode* b = head;
        while (b->next != nullptr) {
            b = b->next;
        }
        b->next = a;
        a->prev = b;
    }
}

void DSLKKep::remove(int data) {
    DoubleNode* a = head;
    while (a != nullptr && a->data != data) {
        a = a->next;
    }
    if (a != nullptr) {
        if (a->prev != nullptr) {
            a->prev->next = a->next;
        } else {
            head = a->next;
        }
        if (a->next != nullptr) {
            a->next->prev = a->prev;
        }
        delete a;
    }
}

void DSLKKep::display() const {
    DoubleNode* a = head;
    while (a != nullptr) {
        std::cout << a->data << " <-> ";
        a = a->next;
    }
    std::cout << "null" << std::endl;
}