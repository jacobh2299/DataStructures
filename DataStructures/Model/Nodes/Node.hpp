//
//  Node.hpp
//  DataStructures
//
//  Created by Harris, Jacob on 2/6/18.
//  Copyright © 2018 Harris, Jacob. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp


template <class Type>
class Node
{
private:
    
protected:
    Type data;
public:
    Node();
    Node(Type data);
    void setData(Type data);
    Type getData();
};

template <class Type>
Node<Type> :: Node()
{
    
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this -> data = data;
}

template <class Type>
void Node<Type> ::setData(Type data)
{
    this -> data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}


#endif /* Node_hpp */
