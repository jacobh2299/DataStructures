//
//  N_AryTreeNode.hpp
//  DataStructures
//
//  Created by Harris, Jacob on 4/23/18.
//  Copyright © 2018 Harris, Jacob. All rights reserved.
//

#ifndef N_AryTreeNode_hpp
#define N_AryTreeNode_hpp

#include <set>
#include "Node.hpp"
using namespace std;

template <class Type>
class N_AryTreeNode : public Node<Type>
{
private:
    set<N_AryTreeNode<Type>*> nodes;
    N_AryTreeNode<Type> * root;

public:
    N_AryTreeNode<Type>();
    ~N_AryTreeNode<Type>();
    N_AryTreeNode<Type>(Type data);
    
    vector<N_AryTreeNode<Type>*> getNodes();
    N_AryTreeNode<Type> * getRoot();
    int getChildCount();
    
    void setRoot(N_AryTreeNode<Type> * root);
    void addChild(Type data);
};

template <class Type>
N_AryTreeNode<Type> :: N_AryTreeNode()
{//unused
}

template <class Type>
N_AryTreeNode<Type> :: N_AryTree(Type data) : Node<Type>(data)
{
}

tempalte <class Type>
N_AryTreeNode<Type> :: ~N_AryTreeNode()
{
    nodes.clear();
}

tempalte <class Type>
N_AryTreeNode<Type> * N_AryTreeNode<Type> :: getRoot()
{
    return root;
}

tempalte <class Type>
set<N_AryTreeNode<Type>*> N_AryTreeNode<Type> :: getNodes()
{
    return nodes;
}

tempalte <class Type>
int N_AryTreeNodes<Type> :: getChildCount()
{
    return nodes.size();
}

tempalte <class Type>
void N_AryTreeNode<Type> :: setRoot(N_AryTreeNode<Type> * root)
{
    this->root=root;
}

tempalte <class Type>
void N_AryTreeNode<Type> :: addChild(Type data)
{
    N_AryTreeNode<Type> * node = new N_AryTreeNode<Type>(data);
    nodes.insert(node);
}


#endif /* N_AryTreeNode_hpp */
