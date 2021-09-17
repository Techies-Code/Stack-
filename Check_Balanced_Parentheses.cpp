// Balanced_Parentheses.cpp

#include<iostream>
using namespace std;

#include<stack>

bool BalancedParentheses(string str) {

	stack<char>s;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '(' || str[i] == '{' || str[i] == '[' || str[i] == '<') {
			s.push(str[i]);
		}
		if (str[i] == ')') {
			if (s.top() != '(')
				return false;
			s.pop();
		} else if (str[i] == '}') {
			if (s.top() != '{')
				return false;
			s.pop();
		} else if (str[i] == ']') {
			if (s.top() != '[')
				return false;
			s.pop();
		} else if (str[i] == '>') {
			if (s.top() != '<')
				return false;
			s.pop();
		}
	}

	// if(s.empty())
	// 	return true;
	// return false;
	return s.empty();

}

int main() {
	freopen("input.txt","r",stdin);
	string s;
	cin >> s;

	cout << BalancedParentheses(s) << endl;

	return 0;
}