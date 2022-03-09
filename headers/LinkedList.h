#ifndef GENERICLINKEDLIST
typedef struct LinkedList {
    void* data;
    struct LinkedList* next;
    struct LinkedList* prev;
} LinkedList;

void LinkedListAppend (LinkedList* currentElm, LinkedList* tbAdded) {
    /* adds tbAdded infront of currentElm */
    (currentElm->next)->next = tbAdded;
    tbAdded->next = currentElm->next;
    tbAdded->prev = currentElm;
    currentElm->next = tbAdded;
}

void LinkedListPrepend (LinkedList* currentElm, LinkedList* tbAdded) {
    /* adds tbAdded behind currentElm */
    (currentElm->prev)->next = tbAdded;
    tbAdded->prev = currentElm->prev;
    tbAdded->next = currentElm;
    currentElm->prev = tbAdded;
}

void LinkedListDel (LinkedList* currentElm) {

}


void LinkedListSeek (LinkedList* currentElm, int i) {

}

void LinkedListSize (LinkedList* currentElm) {

}

void LinkedListSeekDel (LinkedList* currentElm, int i) {

}

void LinkedListInsert (LinkedList* currentElm, int i) {

}
#endif

#ifndef LINKEDLISTTYPE
typedef struct TLinkedList {
    LINKEDLISTTYPE data;
    struct LinkedList* next;
    struct LinkedList* prev;
}
#endif
