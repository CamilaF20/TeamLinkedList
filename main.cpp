
#include <iostream>
#include "LinkedList.cpp"
#include "Notion.cpp"

using namespace std;

int main() {
    LinkedList<Notion> *list = new LinkedList<Notion>();

    list->addNodeFirst( new Notion(234,"Primera Nota"));
    list->addNodeLast( new Notion(100,"Segunda Nota"));
    list->addNodeLast( new Notion(50,"Tercera Nota"));
    list->addNodeFirst( new Notion(10,"Cuarta Nota"));

    //cout<<list->findNode(new Notion(800,""))<<endl;

    list->addNodeAfterTo( list->findNode(new Notion(100,"")), new Notion(80,"loren ipsum"));
    list->addNodeAfterTo( list->findNode(new Notion(50,"")), new Notion(2000,"loren ipsum"));
    //list->addNodeBeforeTo( list->findNode(new Notion(234,"")), new Notion(1200,"Ultisima"));

    //10-234-100-50
    //10-234-100-80-50

    for( Notion *notion : list->getLinkedList()){
        cout<<notion->getId()<<"-"<<notion->getName()<<endl;
    }




    delete(list);


    return 0;
}
