//hashtable.cpp
//Chris Bowman
//Created 19 Mar 2023
#include "hashtable.h"
int HashTable::hash(int id) {
    return id % HASHTABLESIZE;
}
bool HashTable::insertEntry(int id, string *data) {
    bool inserted = table[hash(id)].addNode(id, data);
    if (inserted) {
        count++;
    }
    return inserted;
}
void HashTable::printTable() {
    for (int i = 0; i < HASHTABLESIZE; i++) {
        std::cout << "Entry " << i << ": \t";//On the assignment, the index appears to start at 1. Should I be adding 1 here or something?
        table[i].printList();
    }
}
string HashTable::getData(int id) {
    string result = "";
    Data *d = new Data;
    if (table[hash(id)].getNode(id, d)) {
        result = d->data;
    }
    return result;
}
bool HashTable::removeEntry(int id) {
    bool removed = table[hash(id)].deleteNode(id);
    if (removed) {
        count--;
    }
    return removed;
}
int HashTable::getCount() {
    return count;
}
HashTable::HashTable() {
    count = 0;
}
HashTable::~HashTable() {
    
}