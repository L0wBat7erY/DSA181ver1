#include"UnrolledLinkedList.h"

void UnrolledLinkedList::add(int val) {
	// TODO
	
}

int UnrolledLinkedList::getAt(int pos) {
	if (pos < 0 || pos >= size) 
		throw "IndexOutOfBoundsException"; // check whether pos is valid or not
	// TODO
    return 0;
}

void UnrolledLinkedList::setAt(int pos, int val) {
	if (pos < 0 || pos >= size)
		throw "IndexOutOfBoundsException"; // check whether pos is valid or not
	// TODO

}


void UnrolledLinkedList::insertAt(int pos, int val) {
	if (pos < 0 || pos > size)
		throw "IndexOutOfBoundsException"; // check whether pos is valid or not	
	// TODO

}

void UnrolledLinkedList::deleteAt(int pos)
{
	if (pos < 0 || pos >= size) 
		throw "IndexOutOfBoundsException"; // check whether pos is valid or not
	// TODO

}

int UnrolledLinkedList::firstIndexOf(int val) {
	// TODO
    return 0;
}

int UnrolledLinkedList::lastIndexOf(int val) {
	// TODO
    return 0;
}

bool UnrolledLinkedList::contains(int val) {
	// TODO
    return true;
}

void UnrolledLinkedList::reverse() {
	// TODO

}

int* UnrolledLinkedList::toArray() {
	// TODO
    int* element = NULL;
    return element;
}
