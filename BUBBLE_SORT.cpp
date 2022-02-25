/*
	BUBBLE SORT
*/
#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &nums,int n){
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
}

void print(vector<int> &nums){
	for(auto x:nums){
		cout<<x<<" ";
	}
	cout<<"\n";
}

void swap(vector<int> &nums,int idx1,int idx2){
	int temp=nums[idx1];
	nums[idx1]=nums[idx2];
	nums[idx2]=temp;
	return;
}

void Bubble_Sort(vector<int> &nums,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(nums[j]>nums[j+1]){
				swap(nums,j,j+1);
			}
		}
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
	Bubble_Sort(nums,n);
	print(nums);
	return 0;
}