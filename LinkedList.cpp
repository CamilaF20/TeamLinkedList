
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
T *LinkedList<T>::deleteNode(Node<T> * node) {
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


/**
 * Responsable Andryw Barrera
 * Método que añade un valor u dato a la ultima posición
 * @tparam T Parámetro de la clase
 * @return nothing
 */
template<class T>
void LinkedList<T>::addNodeLast(T *data) {
    Node newNode = new Node(data);
    if (isEmpty()) {
        head = newNode;
    }else {
        Node aux = head;
        while (aux -> next != nullptr) {
            aux = aux->next;
        }
        aux -> next = newNode;
    }

template<class T>
void LinkedList<T>::addNodeAfterTo(Node<T> * node, T * value) {

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
  Node<T>* temp = head;
    while(temp != NULL){
        Node<T>* next = temp->next;
        delete temp;
        temp = next;
    }
}
