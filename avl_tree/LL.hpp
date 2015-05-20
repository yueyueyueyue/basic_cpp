/*
 * LL.hpp
 *
 *  Created on: 2015年3月13日
 *      Author: 效彰
 */

#ifndef LL_HPP_
#define LL_HPP_
#include "NodeL.hpp"
class LL {
	public:
	NodeL *first;
	NodeL *last;
	int currsize;
	LL(); //constructor
	~LL(); //destructor
	int size(); // returns the current size of the list
	void push(string word); //adds new node to end of list
	void remove(NodeL *n); // removes node n from the list

	// finds the first node in the list with the priority of x and returns it
	void printList(); // prints out the entire list
};



#endif /* LL_HPP_ */
