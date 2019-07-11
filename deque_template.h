#ifndef _ATEMP_
#define _ATEMP_

#include<iostream>
#include<deque>

template<typename StackElement>
class Stack
{
private:
    std::deque<StackElement> myDeque;
public:
    Stack();
    ~Stack();
    bool empty() const;
    void push(const StackElement & value);
    void display(std::ostream & out) const;
    StackElement top() const;
    void pop();

};



template <typename StackElement>
inline bool Stack<StackElement>::empty() const
{
    return myDeque.empty();
}

template <typename StackElement>
inline void Stack<StackElement>::push(const StackElement &value)
{
    myDeque.push_back(value);
}

template <typename StackElement>
inline void Stack<StackElement>::display(std::ostream &out) const
{
    for (int pos = myDeque.size() - 1; pos >= 0; pos--)
    {
        out << myDeque[pos] << std::endl;
    }
}

template <typename StackElement>
inline StackElement Stack<StackElement>::top() const
{
    if (!myDeque.empty())
    {
        return myDeque.back();
    }
    std::cerr << "*** Stack is Empty ***\n";
}

template <typename StackElement>
inline void Stack<StackElement>::pop()
{
    if(!myDeque.empty()){
        myDeque.pop_back();
    }
    else{
        std::cerr << "Stack is empty -- can't remove a value. ***\n";
    }
}


#endif
