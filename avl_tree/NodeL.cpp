/*
 * Node.cpp
 *
 *  Created on: 2015年3月13日
 *      Author: 效彰
 */

#include "NodeL.hpp"

#include <iostream>
#include <stdlib.h>
using namespace std;

NodeL::NodeL(string x){
	data =x;
	next=NULL;
}
NodeL::~NodeL(){
	if(next!=NULL){
		cout<<"deleting this node may cause a memory leak"<<endl;
	}//if
}




