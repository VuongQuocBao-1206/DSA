#include "include/class.h"
#include <iostream>

using namespace std;

int main() {

    cout << "Danh sach lien ket don: " << endl <<endl;
    DSLKDon list1;
    list1.insert(5);
    list1.insert(4);
    list1.insert(3);
    list1.insert(2);
    list1.insert(1);

    cout << "Danh sach ban dau: ";
    list1.display();

    list1.remove(3);
    cout << "Danh sach sau khi xoa Node co gia tri 3: ";
    list1.display();

    list1.insertAtEnd(6);
    cout << "Danh sach sau khi chen Node co gia tri 6 vao cuoi: ";
    list1.display();



    cout << "Danh sach lien ket don vong: " << endl << endl;
    DSLKDonVong list2;
    list2.insert(1);
    list2.insert(2);
    list2.insert(3);
    list2.insert(4);
    list2.insert(5);

    cout << "Danh sach ban dau: ";
    list2.display();

    list2.insertAtBegin(6);
    cout << "Danh sach sau khi chen Node co gia tri 6 vao dau: ";
    list2.display();

    list2.insertAtEnd(6);
    cout << "Danh sach sau khi chen Node co gia tri 6 vao cuoi: ";
    list2.display();



    cout << "Danh sach lien ket kep: " << endl << endl;
    DSLKKep list3;
    list3.insert(1);
    list3.insert(2);
    list3.insert(3);
    list3.insert(4);
    list3.insert(5);

    cout << "Danh sach ban dau: ";
    list3.display();

    list3.insertAtBegin(6);
    cout << "Danh sach sau khi chen Node co gia tri 6 vao dau: ";
    list3.display();

    list3.insertAtEnd(6);
    cout << "Danh sach sau khi chen Node co gia tri 6 vao cuoi: ";
    list3.display();

    return 0;
}