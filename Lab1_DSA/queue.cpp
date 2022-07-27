/* queue */
/* Name: Yin Lina */
#include<iostream>
#include<queue>

using namespace std;

void ShowValue(queue<int>nqueue){
	
    while (!nqueue.empty())
    {
        cout<<nqueue.front()<<"\t";
        nqueue.pop();
    }
};

int main()
{
  	// creating queue's object to store integer's value
  	queue <int> queue;
  	queue.push(15); 	// push() : adding value integer into queue
  	queue.push(35);
  	queue.push(20);
  	queue.push(40);
  	queue.push(60);
	
	cout<<"Show all value of this queue:  ";
	ShowValue(queue);
	
	cout<<endl<<endl;
	if(queue.empty()){
    	cout<<"Don't have element in the queue"<<endl;
  	}
  	else{
    	cout<<"Have "<<queue.size()<<" element in queue."<<endl; // count numbers of element in queue
  	}
	cout<<endl;
	cout<<"Show first element : "<<queue.front()<<endl; // show the first element of queue
	
  	cout<<"Show last element : "<<queue.back()<<endl;  // show the last element of queue
  
  
  	return 0;
}
