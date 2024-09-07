//
// Created by Jairo Riaño on 6/09/24.
//

#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList() {
    LinkedList<T>::head = NULL;
}

template<class T>
T *LinkedList<T>::getLast() {
    return nullptr;
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
    std::vector<T *> listData;
    Node<T> *curret= head;
    int size = 0;
    while (curret != nullptr) {
        listData.push_back(curret->info);
        curret = curret->next;
        size++;
    }
    return size;
}

template<class T>
T *LinkedList<T>::deleteNode(Node<T> *) {
    return nullptr;
}

template<class T>
std::vector<T *> LinkedList<T>::getLinkedList() {
    std::vector<T *> listData;
    Node<T> *curret= head;

    while (curret != nullptr) {
        listData.push_back(curret->info);
        curret = curret->next;
    }
    return listData;
}

template<class T>
T *LinkedList<T>::findInfo(int) {
    return nullptr;
}

template<class T>
Node<T> *LinkedList<T>::findNode(int) {
    return nullptr;
}

template<class T>
void LinkedList<T>::addNodeSorted(T *) {
}

template<class T>
void LinkedList<T>::addNodeBeforeTo(Node<T> *, T *) {
}

template<class T>
void LinkedList<T>::addNodeAfterTo(Node<T> *, T *) {
}

template<class T>
void LinkedList<T>::addNodeLast(T *info) {
    Node<T> *newNode = new Node<T>(info);

    if (head == nullptr) {
        head = newNode;
    } else {
        Node<T> *temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;  // Recorremos la lista hasta el último nodo
        }
        temp->next = newNode;
    }
}

template<class T>
void LinkedList<T>::addNodeFirst(T *info) {
    Node<T> *newNode = new Node<T>(info);
    newNode->next = head; // El nuevo nodo apunta al primer nodo actual
    head = newNode; // Ahora el nuevo nodo es el primero
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
}
