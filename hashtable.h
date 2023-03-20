//hashtable.h
//Chris Bowman
//Created 19 Mar 2023
#ifndef HASHTABLE_H
    #define HASHTABLE_H
    #include <string>
    using std::string;
    class HashTable {
        public:
            HashTable();
            ~HashTable();
            bool insertEntry(int, string*);
            string getData(int);
            bool removeEntry(int);
            int getCount();
            void printTable();
        private:
            int hash(int);
    };
#endif