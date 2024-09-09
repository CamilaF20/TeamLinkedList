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
    return 0;
}

template<class T>
T *LinkedList<T>::deleteNode(Node<T> *) {
    return nullptr;
}

template<class T>
std::vector<T *> LinkedList<T>::getLinkedList() {
    return std::vector<T *>();
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

/**
 * Responsable Marlon Delgado
 * Método que inserta un nuevo nodo antes del nodo objetivo en la lista enlazada.
 * Si el nodo objetivo es el primer nodo de la lista, el nuevo nodo se añade al inicio de la lista.
 * Si la lista está vacía o el nodo objetivo no se encuentra en la lista, el método no realiza ninguna acción.
 *
 * @tparam T Parámetro de la clase, tipo de dato almacenado en la lista enlazada.
 * @param targetNode Puntero al nodo en la lista antes del cual se debe insertar el nuevo nodo.
 * @param newData Puntero al dato que debe almacenarse en el nuevo nodo.
 * @return void
 */
template<class T>
void LinkedList<T>::addNodeBeforeTo(Node<T> *targetNode, T *newData) {
    if (isEmpty()) {
        return;
    }

    Node<T> *newNode = new Node<T>(newData);
    if (head == targetNode) {
        addNodeFirst(newData);
        return;
    }

    Node<T> *current = head;
    Node<T> *previous = nullptr;

    while (current != nullptr && current != targetNode) {
        previous = current;
        current = current->next;
    }


    if (current == targetNode) {
        previous->next = newNode;
        newNode->next = current;
    }
}


template<class T>
void LinkedList<T>::addNodeAfterTo(Node<T> *, T *) {

}

template<class T>
void LinkedList<T>::addNodeLast(T *) {

}

template<class T>
void LinkedList<T>::addNodeFirst(T *) {

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

