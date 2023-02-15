#include "Node.hpp"

Node::Node()
{
    pointerToNext = nullptr;
    pointerToPrevius = nullptr;
    mValue = 0;
}

Node::Node(const int _value)
{
    mValue = _value;
    pointerToNext = nullptr;
    pointerToPrevius = nullptr;
}

Node::Node(const int _value, Node *_pointerToNextObject, Node *_pointerToPreviusObject)
{
    pointerToNext = _pointerToNextObject;
    pointerToPrevius = _pointerToPreviusObject;
    mValue = _value;
}

Node::Node(const Node &_other)
{
    pointerToNext = _other.pointerToNext;
    pointerToPrevius = _other.pointerToPrevius;
    mValue = _other.mValue;
}

Node::~Node()
{
    Node *tempNext = pointerToNext, *tempPrevius = pointerToPrevius;
    
    if(pointerToPrevius)
        pointerToPrevius->pointerToNext = tempNext;

    if(pointerToNext)
        pointerToNext->pointerToPrevius = tempPrevius;
}

Node * Node::getNext()
{
    return pointerToNext;
}



int Node::getValue() const
{
    return mValue;
}

void Node::setValue(const int _value)
{
    mValue = _value;
}

void Node::operator=(const Node *_other)
{
    mValue = _other->mValue;
}

bool Node::operator==(const Node *_other) const
{
    return mValue == _other->mValue;
}

bool Node::operator!=(const Node * _other) const
{
    return !this->operator==(_other); 
}

std::ostream &operator<<(std::ostream &_out, const Node &_obj)
{
    _out << _obj.getValue();
    return _out;
}

std::istream &operator>>(std::istream &_in, Node &_obj)
{
    int temp;
    _in >> temp;
    _obj.setValue(temp);
    return _in;
}
