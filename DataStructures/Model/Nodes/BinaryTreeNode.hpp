//
//  BinaryTreeNode.hpp
//  DataStructures
//
//  Created by Harris, Jacob on 3/27/18.
//  Copyright © 2018 Harris, Jacob. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

#include "Node.hpp"

template <class Type>
class BinaryTreeNode : public Node<Type>
{
private:
    BinaryTreeNode<Type> * root;
};

#endif /* BinaryTreeNode_hpp */
