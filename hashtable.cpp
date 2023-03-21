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
        std::cout << "Entry " << i << ": ";
        table[i].printList();
    }
}
HashTable::HashTable() {
    
}
HashTable::~HashTable() {
    
}
string HashTable::getData(int id) {
    return "";
}
bool HashTable::removeEntry(int id) {
    return false;
}
int HashTable::getCount() {
    return -1;
}