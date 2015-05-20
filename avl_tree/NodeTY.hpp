/*
 * NodeTY.hpp
 *
 *  Created on: 2015年4月8日
 *      Author: 效彰
 */

#ifndef NODETY_HPP_
#define NODETY_HPP_
#include "NodeL.hpp"
#include <string>
using namespace std;

class NodeTY {

public:
	string word;
	int order;
	NodeTY *left;
	NodeTY *right;
	NodeTY(string word);
	~NodeTY();
	NodeTY(string word,NodeTY *left,NodeTY *right);
	int findOrder();
	int charOrder(char ch);
};//NodeTY




#endif /* NODETY_HPP_ */
