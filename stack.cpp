// stack.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
using namespace std;
class stack{
	private:
	class Node{
	public:
		int data;
	Node * head;
	Node(int a,Node *p):data(a),head(p){};
              }*node;
	

public:
	stack():node(NULL){}
	   ~stack(){
		   while (node){
		   Node*p=node;
		   node=node.head;
		    delete(p);

	   }
}
	   bool isEmpty(){
	   return node==NULL;
}
	   void push(int item){
	   node=new Node(item,node);

	   }
	   int pop(){
	   int a=node.data;
	   Node *p=node;
	   node=node.head;
	   delete p;
	   return a;
	   }
};
	
int main(){
stack linkstack;
linkstack.push(8);
linkstack.push(56);
linkstack.push(43);
while(!linkstack.isEmpty()){
cout<<linkstack.pop()<<endl;
};
system("pause");
return 0;
}