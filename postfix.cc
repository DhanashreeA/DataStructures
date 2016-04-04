#include<iostream>
#include<string.h>
using namespace std;

class node{
	public:
		int data;
		node *next;
		node(){
			data = 0;
			next = NULL;
		}
};

class stck{
	node *top;
	public:
	stck(){
		top = NULL;
	}
	void push(int);
	int pop();
};

void stck::push(int data){
	if(top == NULL)
	{
		top = new node();
		top->data = data;
		//cout<<"Done!"<<top<<"   "<<data;
		return;
	}
	node *newnode;
	newnode = new node();
	newnode->data = data;
	newnode->next = top;
	top = newnode;
}

int stck::pop(){
	if(top == NULL)
		return NULL;
	int data;
	data = top->data;
	top = top->next;
	return data;
}

int main(){
	char exp[50];
	stck st;
	cout<<"Enter the postfix expression:";
	cin>>exp;
	//cout<<endl;
	//cout<<exp;
	int num1,num2;
	for(int i=0; i<strlen(exp) ; i++){
		if(exp[i] >= '0' && exp[i] <= '9'){
			cout<<"True"<<endl;
			st.push(exp[i] - '0');
		}
		else{
			num1 = st.pop();
			num2 = st.pop();	
			switch(exp[i]){
				case '+':
					cout<<num2+num1<<" ";
					st.push(num2+num1);
				break;
				case '-':
					cout<<num2-num1<<" ";
					st.push(num2-num1);
				break;
				case '*':
					cout<<num2*num1<<" ";
					st.push(num2*num1);
				break;
				case '/':
					cout<<num2/num1<<" ";
					st.push(num2/num1);
				break;
				case '%':
					cout<<num2%num1<<" ";
					st.push(num2%num1);
				break;

			}
		}
	}
	cout<<"Result:"<<st.pop()<<endl;
	return 0;
}

