/*
 * BSTY.hpp
 *
 *  Created on: 2015��4��8��
 *      Author: Ч��
 */

#ifndef BSTY_HPP_
#define BSTY_HPP_
#include "NodeTY.hpp"
#include <string>
using namespace std;

class BSTY {
NodeTY *root;
public:
BSTY(); // constructor �C sets root to NULL
~BSTY(); // destructor �C deletes tree
bool insert(string x);
/* recursively inserts x into the tree with the current root (possibly of a
subtree) being n */
bool insert(string x, NodeTY *n);
/* Note the overloading of methods �C this is needed if you choose to write
this method recursively */
void printTreeio();
/* prints out the data in the tree in order (this should print out the
dictionary alphabetically ) */
void printTreeio(NodeTY *n);
/* again, needed if you choose recursion */
bool search(string x);
/* searches tree for x �C returns true if found, false otherwise */
bool search(NodeTY *n, string x);
int calculateBalance(NodeTY *n);
NodeTY* rebalance(NodeTY *n);
NodeTY* rightRotation(NodeTY *n);
NodeTY* leftRotation(NodeTY *n);
int height(NodeTY *n);
};




#endif /* BSTY_HPP_ */
