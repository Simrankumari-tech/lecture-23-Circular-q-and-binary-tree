#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Queue{
    T *a;
    int n;
    int cs;
    int f, e;
public :
Queue(int s= 5){
    a = new T(s);
    n= s;
    f= 0; 
    e= n-1;
    cs = 0;
}
void push(T d){
if(cs <n){
    e =(e+1) % n;
    a[e] = d;
    cs++;
}
else{
    cout << "overflow" <<endl;
}
}

void pop(){
if(cs>0){
    f = (f+1) %n;
    cs--;
}
else{
    cout << "underflow" ;
}

}
T front (){
return a[f];
}
bool empty(){
    return cs== 0;
}
int size(){
    return cs;
}
};
int main(){
    Queue< char > q;
    q.push('S');
    q.push('B');
    q.push('N');
    q.push(4);
    q.push(5);
    while(!q.empty()){
        cout << q.front()<< " ";
        q.pop();
    }
    cout << endl;
    return 0;
}