#include<iostream>
using namespace std;

#include<stack>

int HistogramArea(int arr[], int n) {

	stack<int>s;

	int max_area = 0;
	int i=0;
	for (; i < n; i++) {
		if (s.empty() || arr[i] >= arr[s.top()]) {
			s.push(i);
		} else {
			while (!s.empty() && arr[s.top()] > arr[i]) {
				int element = arr[s.top()];
				s.pop();
				int width;
				if (s.empty())
					width = i;
				else
					width = i - s.top() - 1;
				int curr_area = width * element;
				max_area = max(max_area, curr_area);
			}
			s.push(i);
		}
	}
	while (!s.empty()) {
		int element = arr[s.top()];
		s.pop();
		int width;
		if (s.empty())
			width = i;
		else
			width = i - s.top() - 1;
		int curr_area = width * element;
		max_area = max(max_area, curr_area);
	}
return max_area;

}

int main() {
	freopen("input.txt", "r", stdin);
	int n;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cout << HistogramArea(arr, n) << endl;

	return 0;
}