//
//  Graph.hpp
//  DataStructures
//
//  Created by Harris, Jacob on 3/23/18.
//  Copyright © 2018 Harris, Jacob. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <set>
#include <queue>
#include <assert.h>

using namespace std;
template <class Type>
class Graph{
private:
    static const int MAXIMUM = 20;
    bool adjacencyMatrix [MAXIMUM][MAXIMUM];
    int weightCostatrix [MAXIMUM][MAXIMUM];
    Type graphData[MAXIMUM];
    int vertexCount;
    void depthFirstTraversal(Graph<Type> & graph, int vertex, bool markedVertices[]);
public:
    Graph();
    
    void addVertex(const Type& value);
    
    void addEdge(int source, int target);
    void addEdgeUndirected(int source, int target);
    void addEdgeCost(int source, int target, int cost);
    
    void removeEdge(int source, int target);
    void removeUndirected(int source, int target);
    void removeEdgeCost(int source, int target, int cost);
    
};
//MISSING CODE//

template <class Type>
const int Graph<Type> :: MAXIMUM;

template <class Type>
Graph<Type> :: Graph(){
    this -> vertexCount = 0;
}

template <class Type>
int Graph<Type> :: size() const{
    return vertexCount;
}

template <class Type>
Type& Graph<Type> :: operator[](int vertex){
    assert(vertex < vertexCount);
    return graphData[vertex];
}

template <class Type>
Type Graph<Type> :: operator[](int vertex){
    assert(vertex < vertexCount);
    return graphData[vertex];
}

template <class Type>
void Graph<Type> :: addVertex(const Type& value){
    assert(vertexCount < MAXIMUM);
    int newVertexNumber = vertexCount;
    vertexCount++;
    
    for(int otherVertexNumber = 0; otherVertexNumber < vertexCount; otherVertexNumber++){
        adjacencyMatrix[otherVertexNumber][newVertexNumber] = false;
        adjacencyMatrix[newVertexNumber][otherVertexNumber] = false;
    }
    graphData[newVertexNumber] = value;
}
#endif /* Graph_hpp */
