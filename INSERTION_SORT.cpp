/*
	INSERTION SORT
*/
#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &nums,int n){
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
	return;
}

void print(vector<int> &nums){
	for(auto x:nums){
		cout<<x<<" ";
	}
	cout<<"\n";
}

void insertion_sort(vector<int> &nums,int n){
	for(int i=0;i<n;i++){
		int key=nums[i];
		int j=i-1;
		while(j>=0 && nums[j]>key){
			nums[j+1]=nums[j];
			j--;
		}
		nums[j+1]=key;
	}
	return ;
}

void IO(void){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		ios::sync_with_stdio(NULL);
		cin.tie(NULL);
}

int main(){
	IO();
	int n;
	cin>>n;
	vector<int> nums(n);
	input(nums,n);
	insertion_sort(nums,n);
	print(nums);
	return 0;
}