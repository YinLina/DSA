/* priority_queue */
/* Name: Yin Lina */
#include <iostream>
#include <queue>
using namespace std;

void ShowValue(priority_queue<int>p_q){

	while(!p_q.empty()) {
        cout<<p_q.top()<< "\t";
        p_q.pop();        
    }

};
int main(){
  
  	// creating object of priority queue
  	priority_queue<int>priority_q;
  	
  	priority_q.push(25); // push() is adding element into priority queue
  	priority_q.push(40);
  	priority_q.push(10);
  	priority_q.push(20);
  	priority_q.push(30);
  	
  	cout<<"Show the priority queue values is : ";
  	ShowValue(priority_q);
  	
  	cout<<endl;
  	cout<<"Show back element: "<<priority_q.top()<<endl; // show  prority back
	cout<<"Show big values  : "<<priority_q.top()<<endl;   
	
  	if(priority_q.empty()){
    	cout<<"Do not have element"<<endl;
  	}
  	else{
    	cout<<"Have "<<priority_q.size()<<" element in priority queue."<<endl; 
		// count numbers of element in priority queue
  	}
  
  	return 0;
}

