#include<bits/stdc++.h>
using namespace std;
template <typename  T>
class Stack{
    queue<T >q1, q2;
    public :
    void push( T d){
        if(!q2.empty()) q2.push(d);
        else q1.push(d) ;

    }
   
    T top(){
if(!q1.empty()){
    while(q1.size() >1){
        T f = q1.front();
        q2.push(f);
        q1.pop();
    }
    T f = q1.front();
         q1.pop();
        q2.push(f) ;
       
        return f;
    
}
else{
while(q2.size() >1){
        T f = q2.front();
        q1.push(f);
        q2.pop();
    }
    T f = q2.front();
         q2.pop();
        q1.push(f) ;
       
        return f;
    
}

    }
     void pop(){
        if(!q1.empty()){
    while(q1.size() >1){
        T f = q1.front();
        q2.push(f);
        q1.pop();
    }
    q1.pop();
    }
    
        else{
while(q2.size() >1){
        T f = q2.front();
        q1.push(f);
        q2.pop();
    }
     q2.pop();
    }

     }
   
    bool empty(){
return q1.empty() and q2.empty();
    }

};
int main(){
  Stack< int > s;
    s.push(1);
    s.push(2);
    s.push(3 );
    s.push(4);
    s.push(5);
    while(!s.empty()){
        cout << s.top()<< " ";
        s.pop();
    }
    cout << endl;
    return 0;
}