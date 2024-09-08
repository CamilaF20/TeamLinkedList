//
// Created by Jairo Riaño on 6/09/24.
//

#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList() {
    LinkedList<T>::head = NULL;
}

/**
 * Responsable Andres P. Perez
 * Método que devuelve el ultimo elemento T en la lista
 * @return T
 */
template<class T>
T *LinkedList<T>::getLast() {
    if (isEmpty()) {
        return nullptr;
    }else {
        Node<T>* temp=head;
        while (temp->next!=NULL) {
            temp=temp->next;
        }
        return temp->info;
    }

}

template<class T>
T *LinkedList<T>::getFirst() {
    return nullptr;
}

template<class T>
T *LinkedList<T>::getObject() {
    return nullptr;
}

template<class T>
int LinkedList<T>::getSize() {
    return 0;
}

template<class T>
T *LinkedList<T>::deleteNode(Node<T> * node) {
    return nullptr;
}

template<class T>
std::vector<T *> LinkedList<T>::getLinkedList() {
    std::vector<T*> listElements;
    Node<T>* temp = head;
    while(temp != NULL){
        listElements.push_back(temp->info);
        temp = temp->next;
    }
    return listElements;
}

template<class T>
T *LinkedList<T>::findInfo(int value) {
    return nullptr;
}

template<class T>
Node<T> *LinkedList<T>::findNode(int value) {
    return nullptr;
}

template<class T>
void LinkedList<T>::addNodeSorted(T * node) {

}

template<class T>
void LinkedList<T>::addNodeBeforeTo(Node<T> *node, T * value) {

}

template<class T>
void LinkedList<T>::addNodeAfterTo(Node<T> * node, T * value) {

}

template<class T>
void LinkedList<T>::addNodeLast(T *node) {
    Node<T> *newNode= new Node<T>(node);
    if (isEmpty()) {
        head=newNode;
    }else {
        Node<T> *temp=head;
        while (temp->next != NULL) {
            temp=temp->next;
        }
        temp->next=newNode;
    }
}

template<class T>
void LinkedList<T>::addNodeFirst(T *node) {
    Node<T> *newNode = new Node<T>( node );
    if (isEmpty()) {
        head=newNode;
    }else {
        newNode->next=head;
        head=newNode;
    }
}

/**
 * Responsable Riaño Herrera
 * Método que valida si la lista está vacía
 * @tparam T Parámetro de la clase
 * @return bool
 */
template<class T>
bool LinkedList<T>::isEmpty() {
    return head == NULL;
}

template<class T>
LinkedList<T>::~LinkedList() {
    Node<T>* temp = head;
    while(temp != NULL){
        Node<T>* next = temp->next;
        delete temp;
        temp = next;
    }
}

