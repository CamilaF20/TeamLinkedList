
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

/**
 * Responsable Guevara Uribe
 * Método que obtiene una lista enlazada
 * @tparam T Elementos de la lista enlazada
 * @return Vector con los apuntadores de los elementos de la lista
 */
template<class T>
std::vector<T *> LinkedList<T>::getLinkedList() {

    std::vector<T *> list;
    Node<T> *node = head;

    while (node != nullptr) {
        list.push_back(node->info);
        node = node->next;
    }
    return list;
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
void LinkedList<T>::addNodeLast(T *) {

}
/**
 * loren ipsum
 * @tparam T
 * @param node Objeto a partir del cual se va a crear el nodo
 */
template<class T>
void LinkedList<T>::addNodeFirst(T * node) {
        Node<T> *newNode = new Node<T>(node);

        if (isEmpty()) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
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

/**
 *      1123345948304563443464
 *                533535355456
 *   -----------------------------
 *                         900
 * Método que suma dos números representados en listas
 * @tparam T Paramétro de la clase
 * @param list Indica la lista del segundo número
 * @return  coleccion con el resultado de la suma
 */
template<class T>
std::vector<T*> LinkedList<T>::sumNumber(LinkedList<T>* list){

}


template<class T>
LinkedList<T>::~LinkedList() {

}
