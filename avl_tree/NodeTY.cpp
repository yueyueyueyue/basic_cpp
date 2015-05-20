/*
 * NodeTY.cpp
 *
 *  Created on: 2015年4月8日
 *      Author: 效彰
 */

#include <iostream>
#include <stdlib.h>
using namespace std;
#include"NodeTY.hpp"

NodeTY::NodeTY(string word){
	this->word=word;
	this->left=NULL;
	this->right=NULL;
	this->order=findOrder();
}
NodeTY::~NodeTY(){
	delete this->left;
	delete this->right;
}
NodeTY::NodeTY(string word,NodeTY *left,NodeTY *right){
	this->word=word;
	this->left=left;
	this->right=right;
	this->order=findOrder();
}
int NodeTY::findOrder(){
	this->order=0;
	for(int i=0;i<this->word.size();i++){
		order+=charOrder(this->word[i])*(10^(8-i));
	}
	return order;
}

int NodeTY::charOrder(char ch){
	int chOrder=0;
	if (ch=='a'){
		chOrder= 1;
	}//if
	if(ch=='b'){
		chOrder= 2;
	}//if
	if(ch=='c'){
		chOrder= 3;
	}//if
	if(ch=='d'){
		chOrder= 4;
	}//if
	if(ch=='e'){
		chOrder= 5;
	}//if
	if (ch=='f'){
		chOrder= 6;
	}//if
	if (ch=='g'){
		chOrder= 7;
	}//if
	if (ch=='h'){
		chOrder= 8;
	}//if
	if (ch=='i'){
		chOrder= 9;
	}//if
	if (ch=='j'){
		chOrder= 10;
	}//if
	if (ch=='k'){
		chOrder= 11;
	}//if
	if (ch=='l'){
		chOrder= 12;
	}//if
	if (ch=='m'){
		chOrder= 13;
	}//if
	if (ch=='n'){
		chOrder= 14;
	}//if
	if (ch=='o'){
		chOrder= 15;
	}//if
	if (ch=='p'){
		chOrder= 16;
	}//if
	if (ch=='q'){
		chOrder= 17;
	}//if
	if (ch=='r'){
		chOrder= 18;
	}//if
	if (ch=='s'){
		chOrder= 19;
	}//if
	if (ch=='t'){
		chOrder= 20;
	}//if
	if (ch=='u'){
		chOrder= 21;
	}//if
	if (ch=='v'){
		chOrder= 22;
	}//if
	if (ch=='w'){
		chOrder= 23;
	}//if
	if (ch=='x'){
		chOrder= 24;
	}//if
	if (ch=='y'){
		chOrder= 25;
	}//if
	if (ch=='z'){
		chOrder= 26;
	}//if
	return chOrder;
}




