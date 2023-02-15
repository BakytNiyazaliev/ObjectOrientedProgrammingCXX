#pragma once
#include <iostream>

class Node;

class List
{
private:
    size_t mSize;
    Node *mHead;
    Node *mTail;

    void qsort(const int _begin, const int _right);

public:
    List();
    List(const int _size);
    List(const int *_arr, const int _arrSize);
    List(const List &_other);

    Node &find(const int _key);

    bool isEmpty();

    void erase_back();
    void erase_forward();
    void erase_by_position(const unsigned int _pos);
    void erase_by_key(const int _key);

    void push_back(const int _value);
    void push_forward(const int _value);
    void push_by_position(const int _value, const unsigned int _pos);
    void push_by_key(const int _value, const int _key);

    int min();
    int max();

    void clear();
    void sort();

    Node &operator[](const unsigned int _pos);

    void operator=(const List &_other);

    bool operator==(const List &_other);
    bool operator!=(const List &_other);

    List operator+(const List &_other);

    friend std::ostream &operator<<(std::ostream &_out, List &_obj);
    friend std::istream &operator>>(std::istream &_in, List &_obj);
};