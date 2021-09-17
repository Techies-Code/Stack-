#include<iostream>
#include"Stack.h"
using namespace std;


int main(){

	Stack<char> s(5);

	for(int i=0;i<=5;i++){
		s.push(i+'a');
	}

	while(!s.isEmpty()){
		cout<<s.Top()<<" ";
		s.pop();
	}

	return 0;
}