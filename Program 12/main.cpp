#include <iostream>

using namespace std;

// Struktur data untuk simpul (node) dalam double linked list circular
struct Node {
    string data;    // Data dalam simpul
    Node* prev;     // Pointer ke simpul sebelumnya
    Node* next;     // Pointer ke simpul berikutnya
};

// Class untuk implementasi antrian bank menggunakan double linked list circular
class BankQueue {
private:
    Node* front;    // Pointer ke simpul depan antrian
    Node* rear;     // Pointer ke simpul belakang antrian

public:
    // Konstruktor
    BankQueue() {
        front = NULL;
        rear = NULL;
    }

    // Method untuk mengecek apakah antrian kosong
    bool isEmpty() {
        return (front == NULL);
    }

    // Method untuk menambahkan nasabah ke antrian
    void enqueue(string data) {
        Node* newNode = new Node;
        newNode->data = data;

        if (isEmpty()) {
            newNode->next = newNode;
            newNode->prev = newNode;
            front = newNode;
            rear = newNode;
        } else {
            newNode->next = front;
            newNode->prev = rear;
            rear->next = newNode;
            front->prev = newNode;
            rear = newNode;
        }

        cout << "Nasabah " << data << " ditambahkan ke antrian." << endl;
    }

    // Method untuk menghapus nasabah dari antrian (nasabah yang dilayani)
    void dequeue() {
        if (isEmpty()) {
            cout << "Antrian kosong. Tidak ada nasabah yang dilayani." << endl;
            return;
        }

        string nasabah = front->data;
        if (front == rear) {
            delete front;
            front = NULL;
            rear = NULL;
        } else {
            Node* temp = front;
            front = front->next;
            rear->next = front;
            front->prev = rear;
            delete temp;
        }

        cout << "Nasabah " << nasabah << " dilayani." << endl;
    }

    // Method untuk menampilkan seluruh nasabah dalam antrian
    void displayQueue() {
        if (isEmpty()) {
            cout << "Antrian kosong." << endl;
            return;
        }

        Node* current = front;
        cout << "Isi antrian bank: ";
        do {
            cout << current->data << " ";
            current = current->next;
        } while (current != front);
        cout << endl;
    }
};

int main() {
    BankQueue bankQueue;

    bankQueue.displayQueue();   // Output: Antrian kosong.

    bankQueue.enqueue("Rugigo");
    bankQueue.enqueue("Mia");
    bankQueue.enqueue("Kevin");
    bankQueue.enqueue("Grace");
    bankQueue.enqueue("Givan");
    bankQueue.enqueue("Aditya");

    bankQueue.displayQueue();   // Output: Isi antrian bank: Rugigo Mia Kevin Grace Givan Aditya

    bankQueue.dequeue();        // Output: Nasabah Rugigo dilayani.

    bankQueue.displayQueue();   // Output: Isi antrian bank: Mia Kevin Grace Givan Aditya

    bankQueue.enqueue("Deselve");

    bankQueue.displayQueue();   // Output: Isi antrian bank: Mia Kevin Grace Givan Aditya Deselve

    bankQueue.dequeue();        // Output: Nasabah Mia dilayani.
    bankQueue.dequeue();        // Output: Nasabah Kevin dilayani.
    bankQueue.dequeue();        // Output: Nasabah Grace dilayani.
    bankQueue.dequeue();        // Output: Nasabah Givan dilayani.
    bankQueue.dequeue();        // Output: Nasabah Aditya dilayani.
    bankQueue.dequeue();		// Output: Nasabah Deselve dilayani.
    bankQueue.dequeue();		// Output: Antrian kosong. Tidak ada nasabah yang dilayani.
    
    return 0;
}
