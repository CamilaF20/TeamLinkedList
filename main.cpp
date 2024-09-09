
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
    list->addNodeFirst(&o);
    list->addNodeFirst(&r);
    list->addNodeFirst(&i);
    list->addNodeFirst(&a);
    list->addNodeFirst(&j);

    for( char *c : list->getLinkedList()){
        cout<<*c<<"-";
    }
    cout<<endl;

    cout<<"\n"<<*list->getLast()<<endl;

    delete(list);

    string line;

    do{
        cin>>line;
        cout<<line<<endl;
    }while( line != "-1");

    return 0;
}
