/*
 * Node.hpp
 *
 *  Created on: 2015��3��13��
 *      Author: Ч��
 */

#ifndef NODEL_HPP_
#define NODEL_HPP_
#include<string>
using namespace std;


class NodeL {
// friend means private fields and methods can be accessed by methods in the class LL
	friend class LL;
	public:
	NodeL *next;
	string data;
	NodeL(string x);
	~NodeL();
	void printNode();
};



#endif /* NODEL_HPP_ */
