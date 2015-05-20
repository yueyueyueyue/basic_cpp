/*
 * BSTY.cpp
 *
 *  Created on: 2015年4月8日
 *      Author: 效彰
 */
#include "BSTY.hpp"
#include<iostream>
BSTY::BSTY(){
	this->root=NULL;
}
BSTY::~BSTY(){
	delete root->left;
	delete root->right;
}

bool BSTY::insert(string x){
	if(this->root==NULL){
		root=new NodeTY(x);
		return true;
	}
	else{
		return insert(x,root);
	}//else
}//bool

bool BSTY::insert(string x,NodeTY *n){
	NodeTY *temp=new NodeTY(x);
	if(temp->order<=n->order){
		if(n->left!=NULL){
			return insert(x,n->left);
		}//if
		else{
			n->left=temp;
			return true;
		}//else
	}//if
	else{
		if(n->right!=NULL){
			return insert(x,n->right);
		}//else
		else{
			n->right=temp;
			return true;
		}//else
	}//else
}//bool

void BSTY::printTreeio(){
	this->printTreeio(root);
}//void

void BSTY::printTreeio(NodeTY *n){
	if(n->left!=NULL){
		this->printTreeio(n->left);
	}//if
	if(n->right!=NULL){
		this->printTreeio(n->right);
	}//if
	cout<<n->word<<endl;
}//void

bool BSTY::search(string x){
	if(this->root==NULL){
		return false;
	}//if
	else{
		this->search(root,x);
	}
}//bool

bool BSTY::search(NodeTY *n,string x){
	NodeTY *temp=new NodeTY(x);
	if(x==n->word){
		return true;
	}//if
	else{
		if(temp->order<=n->order){
			if(n->left!=NULL){
				return this->search(n->left,x);
			}
			else{
				return false;
			}
		}//if
		else{
			if(n->right!=NULL){
				return this->search(n->right,x);
			}
			else{
				return false;
			}
		}//else
	}//else
}//bool
int BSTY::calculateBalance(NodeTY *n){
	if(n!=NULL){
		return height(n->left)-height(n->right);
	}
	else{
		return 0;
	}
}
int BSTY::height(NodeTY *n){
	if(n==NULL){
		return -1;
	}
	else{
		int left=height(n->left);
		int right=height(n->right);

		return 1+std::max(left,right);
	}
}

NodeTY* BSTY::rightRotation(NodeTY *n){
	NodeTY *temp=n->left;
	n->left=temp->right;
	temp->right=n;
	return temp;
}


NodeTY* BSTY::leftRotation(NodeTY *n){
	NodeTY *temp=n->right;
	n->right=temp->left;
	temp->right=n;
	return temp;
}

NodeTY* BSTY::rebalance(NodeTY *n){
	if(calculateBalance(n->left)>1||calculateBalance(n->left)<-1){
		n=rebalance(n->left);
	}
	if(calculateBalance(n->right)>1||calculateBalance(n->right)<-1){
		n=rebalance(n->right);
	}
	int balance=this->calculateBalance(n);
	if(balance>1||balance<-1){
		if(balance>1){
			if(calculateBalance(n->left)>0){
				n=this->rightRotation(n);
			}
			else{
				n->left=leftRotation(n->left);
				n=rightRotation(n);
			}
		}
		else{
			if(calculateBalance(n->left)<0){
				n=this->leftRotation(n);
			}
			else{
				n->left=rightRotation(n->left);
				n=leftRotation(n);
			}
		}
	}
	return n;
}
