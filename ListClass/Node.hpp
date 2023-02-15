#pragma once
#include "List.hpp"

class Node
{
private:
    Node *pointerToNext;
    Node *pointerToPrevius;
    int mValue;


    friend class List;

public:
    Node();
    Node(const int _value);
    Node(const int _value, Node *_pointerToNextObject, Node *_pointerToPreviusObject);
    Node(const Node &_other);
    ~Node();

    Node * getNext();
    int getValue() const;

    void setValue(const int _value);

    void operator=(const int _value);
    void operator=(const Node *_other);
    
    bool operator==(const Node *_other) const;
    bool operator!=(const Node *_other) const;

    friend std::ostream &operator<<(std::ostream &_out, const Node &_obj);
    friend std::istream &operator>>(std::istream &_in, Node &_obj);
};