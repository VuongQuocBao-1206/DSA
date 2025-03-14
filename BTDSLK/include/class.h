#pragma once

struct Node {
    int data;
    Node* next;
};
struct DoubleNode {
    int data;
    DoubleNode* next;
    DoubleNode* prev;
};

class DSLKDon {
public:
    DSLKDon();
    ~DSLKDon();
    void insert(int data);
    void remove(int data);
    void display() const;
    void insertAtEnd(int data);

private:
    Node* head;
};

class DSLKDonVong {
    public:
        DSLKDonVong();
        ~DSLKDonVong();
        void insert(int data);
        void remove(int data);
        void display() const;
        void insertAtEnd(int data);
        void insertAtBegin(int data);
        
    
private:
    Node* head;
};

class DSLKKep {
public:
    DSLKKep();
    ~DSLKKep();
    void insert(int data);
    void remove(int data);
    void display() const;
    void insertAtEnd(int data);
    void insertAtBegin(int data);

private:
    DoubleNode* head;
};