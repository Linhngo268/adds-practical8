#include "LinkedList.h"
#include "Node.h"
#include <vector>
#include <string>
#include<iostream>
using namespace std;
int main(){
    vector<string> a;
    vector<int> in;
    int in1=0;
    int in2=0;
    
    
    string c="";
    string method="";
    string input;
    getline(cin,input);
    input=input+" ";
    
   for(int i=0;i<input.size();i++){
       if(input[i]!=' '){
            c=c+input[i];
        }else if(input[i]==' '&& c!=""){
            a.push_back(c);
            c="";
        }
    }
    
   
     
    method=a[a.size()-3];
    
    for(int i=0; i<a.size()-3; i++){
        in.push_back(stoi(a[i]));
    }
    
    in1=stoi(a[a.size()-2]);
    in2=stoi(a[a.size()-1]);
    
    int array[in.size()];
    for(int i=0;i<in.size();i++){
        array[i]=in[i];
    }
    
   
    
    LinkedList* l=new LinkedList(array,in.size());


    if(method=="AF"){
        l->addFront(in1);
    }else if(method=="AE"){
        l->addEnd(in1);
    }else if(method=="AP"){
        l->addAtPosition(in1,in2);
    }else if(method=="DF"){
        l->deleteFront();
    }else if(method=="DE"){
        l->deleteEnd();
    }else if(method=="DP"){
        l->deletePosition(in1);
    }else if(method=="GI"){
        cout<<(l->getItem(in1))<<" ";
        
    }else if(method=="S"){
        cout<<(l->search(in1))<<" ";
        
    }
        
    
    //cout<<"!!!"<<in1<<method<<"!!"<<endl;
    l->printItems();

    return 0;
}