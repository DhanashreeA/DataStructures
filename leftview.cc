#include<iostream>
using namespace std;


class node{

	public: 
	int data;
	node *right;
	node *left;

	node(){
		data = -1;
		right = left = NULL;
	}

	node(int d){
		data = d;
		right = left = NULL;
	}
	
	void setData(int d){
		data = d;
	}
		
	int getData(){
		return data;
	}
	
	void setRight(node *r){
		right = r;
	}

	node *getRight(){
		return right;
	}

	void setLeft(node *l){
		left = l;
	}

	node *getLeft(){
		return left;
	}
};

class btree{
	node *root;

	public:
	btree(){
		root = NULL;
	}
	void printTree();
	void print(node *);
	void leftView();
	void printLeftView(node *,int,int *);
	node *searchNode(int);
	void deleteNode(int);
	void insertTree(int);
};

/*node *searchNode(data){
	node *temp,*parent;
	if(root == NULL)
		return NULL;
	temp = root;
	while(temp != NULL || temp->data == data){
		parent = temp;
		if(data > temp->data)
			temp = temp->right;			
		else
			temp = temp->left;
	}	
	return parent; 
}*/

void btree::deleteNode(int data){
	node *temp,*parent;
	if(root == NULL){
		cout<<"Empty Tree!"<<endl;
		return;
	}
	temp = root;
	while(temp != NULL && temp->data != data){
		parent = temp;
		if(data > temp->data)
			temp = temp->right;			
		else
			temp = temp->left;
	}
	if(temp == NULL)
		cout<<"Node not found!"<<endl;
	else if(temp->left == NULL && temp->right == NULL){
		if(parent->left == temp)
			parent->left = NULL;
		else
			parent->right = NULL;
	}
	else if(temp->left == NULL)
	{
		if(parent->left == temp)
			parent->left = temp->right;
		else
			parent->right = temp->right;
	}	
	else if(temp->right == NULL)
	{
		if(parent->left == temp)
			parent->left = temp->left;
		else
			parent->right = temp->left;
	}
	else{
		node *temp1,*parent1;
		temp1 = temp->left;
		parent1=temp;
		while(temp1->right != NULL){
			parent1 = temp1;
			temp1 = temp1->right;
		}
		temp->data = temp1->data;
		cout<<parent1->data<<"\t"<<parent1->right->data<<endl;
		if(parent1->left == temp1)
			parent1->left = NULL;
		else
			parent1->right = NULL;			
	}
}

void btree::printTree(){
	cout<<"Tree:";
	print(root);
	cout<<endl;
}

void btree::print(node *temp){
	if(temp == NULL)
		return;
	cout<<"\t"<<temp->data;
	print(temp->left);
	print(temp->right);
}

void btree::insertTree(int data){
	node *temp, *parent;
	if(root == NULL)
	{
		root = new node;		
		root->data = data;
		cout<<"Done:";
		return;
	}
	else{
		temp = root;
		while(temp != NULL){
			parent = temp;
			if(data > temp->data)
				temp = temp->right;			
			else
				temp = temp->left;
		}
		temp = new node;
		temp->data = data;
		if(data > parent->data)
			parent->setRight(temp);		
		else
			parent->setLeft(temp);
	}
}

void btree::printLeftView(node *root,int level,int *max_level){
	if(root == NULL)
		return;
	if(*max_level < level)
	{
		cout<<root->data<<" ";
		*max_level = level;
	}
	printLeftView(root->left,level+1,max_level);
	printLeftView(root->right,level+1,max_level);
}

void btree::leftView(){
	int max = 0;
	printLeftView(root,1,&max);
	cout<<endl;
}

int main(){
	int data,n;
	btree tree;
	cout<<"Insert number of nodes:";
	cin>>n;
	cout<<endl;
	while(n != 0){
		cout<<"Insert the data value:";
		cin>>data;
		cout<<endl;
		tree.insertTree(data);
		n--;
	}		
	tree.printTree();
	tree.leftView();
	return 0;
}

