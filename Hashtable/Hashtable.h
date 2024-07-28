#ifndef CPP_START_PROJECT_HASHTABLE_H
#define CPP_START_PROJECT_HASHTABLE_H


#include "../Dictionary/Dictionary.h"

template<typename K, typename V>
class Hashtable : public Dictionary<K, V> {
private:
//    Entry<K,V>** ht;
    int M;
    int N;
protected:
    void rehash();

public:
    Hashtable(int c = 5);
    ~Hashtable();

    int size() { return N; }

    bool put(K, V);
    V *get(K k);
    bool remove(K k);
};


#endif //CPP_START_PROJECT_HASHTABLE_H
