#include<iostream>
using namespace std;

int HistogramArea(int arr[],int n){
	int ans=0;

	for(int i=0;i<n;i++){
		int min_element=arr[i];
		for(int j=i;j<n;j++){
			min_element=min(arr[j],min_element);
			int length=j-i+1;
			int curr_area = min_element*length;
			ans=max(ans,curr_area);
		}
	}

	return ans;
}

int main(){
	// freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	cout<<HistogramArea(arr,n)<<endl;

	return 0;
}