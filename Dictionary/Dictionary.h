#ifndef CPP_START_PROJECT_DICTIONARY_H
#define CPP_START_PROJECT_DICTIONARY_H


template<typename K, typename V>
class Dictionary {
    virtual int size() = 0;
    virtual bool put(K, V) = 0;
    virtual V *get(K k) = 0;
    virtual bool remove(K k) = 0;
};


#endif //CPP_START_PROJECT_DICTIONARY_H
