/* stack 
Name: Yin Lina */

#include <iostream>
#include <stack>
using namespace std;

void ShowValue(stack<int>nstack){
	
    while (!nstack.empty())
    {
        cout<<nstack.top()<< "\t";
        nstack.pop();
    }
};

int main(){
  
  	// creating values
  	stack <int> stacks; // creating stack's object to store value that have data's type <Integer>
  	stacks.push(10); 	// function push() : is add item into stack
  	stacks.push(35);
  	stacks.push(60);
  	stacks.push(40);
  	stacks.push(50);
  
    cout<<"Show all value in this stack : ";
  	ShowValue(stacks);
  	
  	cout<<endl<<endl; // enter
  	if(stacks.empty()){	// show size of element
    	cout<<"Do not have element in this stack"<<endl;
  	}
  	else{
    	cout<<"Have "<<stacks.size()<<" element in this stack."<<endl;
  	}
  
  	cout<<"Show back element: "<<stacks.top()<<endl;
  	// function top() : show that the last of element in stack (back element)
  
  	return 0;
}

