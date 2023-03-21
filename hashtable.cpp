//hashtable.cpp
//Chris Bowman
//Created 19 Mar 2023
#include "hashtable.h"
int HashTable::hash(int id) {
    return id % HASHTABLESIZE;
}
bool HashTable::insertEntry(int id, string *data) {
    return table[hash(id)].addNode(id, data);
}
void HashTable::printTable() {
    for (int i = 0; i < HASHTABLESIZE; i++) {
        std::cout << "Entry " << i << ": \t";//On the assignment, the index appears to start at 1. Should I be adding 1 or something?
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
HashTable::HashTable() {
    
}
HashTable::~HashTable() {
    
}
bool HashTable::removeEntry(int id) {
    return false;
}
int HashTable::getCount() {
    return -1;
}