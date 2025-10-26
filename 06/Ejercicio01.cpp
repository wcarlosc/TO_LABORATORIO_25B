
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;
        Node(T value) : data(value), next(nullptr) {}
    };
    Node* head;

public:
    LinkedList() : head(nullptr) {}
    
    void add(T value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    
    void display() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {

    cout << "Edades: ";
    LinkedList<int> ages;
    ages.add(15);
    ages.add(20);
    ages.add(17);
    ages.add(25);
    ages.add(31);
    ages.display();

    cout << "Alturas (m): ";
    LinkedList<double> heights;
    heights.add(1.75);
    heights.add(1.82);
    heights.add(1.60);
    heights.display();

    cout << "Nombres : ";
    LinkedList<string> words;
    words.add("Diego");
    words.add("Paquito");
    words.add("Marcelo");
    cout << "Nombres: ";
    words.display();
    
    return 0;
}