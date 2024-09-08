#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main() {

    LinkedList<char> *list = new LinkedList<char>();
    char r = 'R';
    char j = 'J';
    char a = 'A';
    char i = 'I';
    char o = 'O';
    list->addNodeLast(&r);
    list->addNodeFirst(&i);
    list->addNodeFirst(&a);
    list->addNodeFirst(&j);
    list->addNodeLast(&o);

    for( char *c : list->getLinkedList()){
        cout<<*c<<"-";
    }
    cout<<endl;

    cout<<"\n"<<*list->getLast()<<endl;

    delete(list);

    return 0;
}
