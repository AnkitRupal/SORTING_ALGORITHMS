/*
	SELECTION SORT
*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void input(vector<int> &nums,int n){
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
}

int minimum(vector<int> &nums,int begin,int end){
	int idx=-1,mini=INT_MAX;
	for(int i=begin;i<end;i++){
		if(nums[i]<mini){
			mini=nums[i];
			idx=i;
		}
	}
	return idx;
}

void swap(vector<int> &nums,int idx1,int idx2){
	int temp=nums[idx1];
	nums[idx1]=nums[idx2];
	nums[idx2]=temp;
	return;
}

void Selection_Sort(vector<int> &nums,int n){
	for(int i=0;i<n;i++){
		int idx=minimum(nums,i,n);
		swap(nums,idx,i);
	}
}

void print(vector<int> &nums){
	for(auto x:nums){
		cout<<x<<" ";
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
	Selection_Sort(nums,n);
	print(nums);
	return 0;
}