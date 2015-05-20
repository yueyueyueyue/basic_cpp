/*
 * LL.cpp
 *
 *  Created on: 2015年3月13日
 *      Author: 效彰
 */

#include <iostream>
#include <stdlib.h>
using namespace std;
#include "NodeL.hpp"
#include "LL.hpp"
LL::LL() {
	first = NULL;
	last = NULL;
	currsize = 0;
}
LL::~LL() {
	if (currsize > 0) {
		NodeL *temp = first;
		while (temp->next != NULL) {
			first = temp->next;
			temp->next = NULL;
			delete temp;
			temp = first;
		}//while
		delete temp;
		first = NULL;
		last = NULL;
		currsize = 0;
	}//if
}
int LL::size() {
	return currsize;
}
void LL::push(string word){
	if(first=NULL){
		first=new NodeL(word);
		last=first;
	}
	else{
		last->next=new NodeL(word);
		last=last->next;
	}
}
// (7 pts)

//(14 pts)
void LL::remove(NodeL *n) {

	if(n==first){
		if(currsize==1){
			delete first;
			first=NULL;
			last=NULL;
			currsize--;
		}//if
		else{
			NodeL *temp=first;
			first=first->next;
			delete temp;
			currsize--;
		}//else
	}//if
	else{
		NodeL *temp=first;
		while(temp->next!=n){
			temp=temp->next;
			}//while
		if(temp->next==last){
			delete last;
			last=temp;
			currsize--;
		}//if
		else{
			NodeL *d=temp->next;
			temp->next=temp->next->next;
			delete d;
			currsize--;
		}
	}//else


}



