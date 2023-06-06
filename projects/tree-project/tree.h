#ifndef TREE_H
#define TREE_H

#include<vector>
#include<string>
#include<iostream>

class Node
{
private:
   std::string data;
   std::vector<Node*> children;

   int size() const;
   void print() const;

   friend class Tree;
};

class Tree
{
public:
   Tree();
   Tree(std::string root_data);
   void add_subtree(const Tree& subtree);
   int size() const;
   void print() const;

private:
   Node* root;
};

#endif