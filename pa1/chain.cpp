#include "chain.h"
#include "chain_given.cpp"
#include <cmath>
#include <iostream>

// PA1 functions

/**
 * Destroys the current Chain. This function should ensure that
 * memory does not leak on destruction of a chain.
 */
Chain::~Chain()
{
  // Chain::clear();
}

/**
 * Inserts a new node at the back of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
void Chain::insertBack(const Block &ndata)
{
  Chain::Node* lastNode = Chain::walk(Chain::head_, Chain::length_);
  Chain::Node* newNode = new Node(ndata);
  lastNode->next = newNode;
  newNode->next = Chain::head_;
}


/**
 * Swaps the two nodes at the indexes "node1" and "node2".
 * The indexes of the nodes are 1 based.
 * assumes i and j are valid (in {1,length_} inclusive)
 * 
 */
void Chain::swap(int i, int j)
{
  Chain::Node* i_node = Chain::walk(Chain::head_, i);
  Chain::Node* j_node = Chain::walk(Chain::head_, j);
  std::swap(i_node, j_node);
  std::swap(i_node->next, j_node->next);
}

/**
 * Reverses the chain
 */
void Chain::reverse()
{
  Chain::reverse(Chain::head_, nullptr);
}
void Chain::reverse(Node* curr, Node* prev) {
  Node* next = curr->next;
  curr->next = prev;
  if (next != nullptr)
    reverse(next, curr);
}

/*
* Modifies the current chain by "rotating" every k nodes by one position.
* In every k node sub-chain, remove the first node, and place it in the last 
* position of the sub-chain. If the last sub-chain has length less than k,
* then don't change it at all. 
* Some examples with the chain a b c d e:
*   k = 1: a b c d e
*   k = 2: b a d c e
*   k = 3: b c a d e
*   k = 4: b c d a e
*/
void Chain::rotate(int k)
{
/* YOUR CODE HERE */
}

/**
 * Destroys ALL dynamically allocated memory associated with the
 * current Chain class.
 */
void Chain::clear()
{
  Chain::clear(Chain::head_);
}
void Chain::clear(Node* curr) {
  Node* next = curr->next;
  delete curr;
  curr = nullptr;
  if (next != nullptr)
    clear(next);
}

/* makes the current object into a copy of the parameter:
 * All member variables should have the same value as
 * those of other, but the memory should be completely
 * independent. This function is used in both the copy
 * constructor and the assignment operator for Chains.
 */
void Chain::copy(Chain const &other)
{
  Node* st = Chain::head_;
  while (st->next != Chain::head_) {
    
  }
}
void Chain::copy(Node* curr, Node* oth)
{
/* YOUR CODE HERE */
}
