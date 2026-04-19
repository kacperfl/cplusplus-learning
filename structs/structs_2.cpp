#include <iostream>

struct Node {
    int value;
    Node* next;
};

int main() {

    // we openen de box dat Node heet we maken nieuwe instanties van het box dat we in heap alloceren
    Node* node_1 = new Node; 
    Node* node_2 = new Node;
    Node* node_3 = new Node;
    Node* node_4 = new Node;

    // de node_ cijfer zijn al pointers waarbij ze een waarden toewijzen op hun variabelen
    node_1-> value = 10;
    node_2-> value = 15;
    node_3 -> value = 20;
    node_4 -> value = 25;


    // bij de next geven we de vervolging waarden van de volgende node door en eidigen we met nullptr omdat de pointer wel bestaat maar naar niks toewijst
    node_1->next = node_2;
    node_2->next = node_3;
    node_3 -> next = node_4;
    node_4 -> next = nullptr;

    // we geven aan dat current pointer vaiabelen momenteel naar de eerste node toewijst
    Node* current = node_1;

    // zodra de huidige node, (aan het begin node_1 ) geen null ptr bevat blijft de loop door gaan
    while(current != nullptr){
        std::cout << current->value << '\n'; // printen van de huidige waarden binnen het node
        delete current; // tijdens loopen de gebruikte node verwijderen uit de heap
        current = current->next; // we passen de current var aan met de volgende node
    }


    // we verwijderen de node om memory leaks te verkomen
    // delete node_1;
    // delete node_2;
    // delete node_3;
    // delete node_4;
}