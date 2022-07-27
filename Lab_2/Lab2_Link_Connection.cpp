/* Link connection */
#include<iostream>
using namespace std;

// creating class link
class Link{
  	public:
    	int Number_Value; // store values
    	Link *Next; 	  // store next address link
    	Link();
};

Link::Link(){
  	Number_Value = -1;
  	Next = NULL; 	// null when ending values 
};

//-----------> main function <-----------------
int main (int argc, char** argv)
{
  	Link Link1;
  	Link Link2;
  	Link Link3;
  	Link Link4;
  	Link Link5;
  	Link Link6;
  	Link Link7;
  	Link Link8;
  	Link Link9;
  	Link Link10;
  	
  	Link1.Number_Value= 10;
  
  	Link1.Next= &Link2;
  	Link2.Number_Value= 20;
  
  	Link2.Next= &Link3;
  	Link3.Number_Value= 30;
  
  	Link3.Next= &Link4;
  	Link4.Number_Value= 40;
  
  	Link4.Next= &Link5;
  	Link5.Number_Value= 50;

  	Link5.Next= &Link6;
  	Link6.Number_Value= 60;
  
  	Link6.Next= &Link7;
  	Link7.Number_Value= 70;
  
  	Link7.Next= &Link8;
  	Link8.Number_Value= 80;

  	Link8.Next= &Link9;
  	Link9.Number_Value= 90;
  
  	Link9.Next= &Link10;
  	Link10.Number_Value= 100;

  	Link10.Next=NULL;	
	// null is don't have next address, because this is ending number_values
  
  	Link *tmp;
  	tmp = &Link1;
  	
  	bool b=true; 
  	while(true){
        if(tmp != NULL){
        	cout <<endl;
            cout << "Show Original Address : " << tmp << endl;
            cout << "Show Original Value : " << tmp->Number_Value<< endl;
            cout << "Show New Address : " << tmp->Next << endl;
            cout << "\n";
            tmp = tmp->Next;
            cout<<"======================================="<<endl;
        }else{
            b = false;
        }
  	}
}

