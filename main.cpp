//main.h
//Chris Bowman
//Recieved 19 Mar 2023

#include "main.h"

int main() {
    //seed the rand function
    srand(time(NULL));

    /*
     * This code makes test data of 6 - 25 entries
     * Note this guarantees at least one non unique id and one bad id
     * Do not modify this code from here to the next comment telling
     * you to "START HERE"
     */
    const int testdatasize = BASE + (rand() % OFFSET + 1);
    int ids[testdatasize];
    string strs[testdatasize];
    
    char buffer[BUFFERSIZE];
    for (int i = 0; i < testdatasize; i++) {
        ids[i] = rand() % MAXID + 1;
        for (int j = 0; j < BUFFERSIZE - 1; j++) {
            buffer[j] = 'a' + i;
        }
        buffer[BUFFERSIZE - 1] = '\0';
        strs[i] = buffer;
    }
    ids[testdatasize-2] = ids[testdatasize-3];
    strs[testdatasize-2] = "known duplicate";
    ids[testdatasize-1] = - 1;
    strs[testdatasize-1] = "known bad";
    
    /*
     * Show test data
     */
    cout << "Showing Test Data (" << testdatasize << " entries)..." << endl;
    for (int i = 0; i < testdatasize; i++) {
        cout << ids[i] << " : " << strs[i] << endl;
    }
    cout << endl;

    /*
     * Now you have two parallel arrays with ids and strings for test data.
     * START HERE and create your hash table and use the test data to show
     * it works.
     */
    
    // create your hash table object here
    HashTable myHashTable;
    // show it is empty by calling getCount and printTable
    cout << "Created. \tcount: " << myHashTable.getCount() << endl;
    myHashTable.printTable();
    // try and put ALL the test data into the table and show what happens
    for (int i = 0; i < testdatasize; i++) {
        cout << "Adding (" << ids[i] << ", \"" << strs[i] << "\")... ";//Adding (5, "five")... 
        if (myHashTable.insertEntry(ids[i], &strs[i])) {
            cout << "done." << endl;
        } else {
            cout << "failed." << endl;
        }
    }
    cout << "count: " << myHashTable.getCount() << endl;
    myHashTable.printTable();
    // continue using and testing your table, add and remove data,
    // do whatever it takes to full test your object and prove it
    // is robust and can handle all use cases.
    for (int i = 0; i < testdatasize; i++) {
        cout << "Getting " << ids[i] << ": " << myHashTable.getData(ids[i]) << endl;
    }
    
    
    
    
    return 0;
}
