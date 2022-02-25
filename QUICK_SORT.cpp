/*
	QUICK SORT
*/
#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &nums,int n){
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
	return ;
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

int partition(vector<int> &nums,int begin,int end){
	int x=nums[end];//pivot element
	int i=begin-1;
	for(int j=begin;j<=end-1;j++){
		if(nums[j]<=x){
			swap(nums,++i,j);
		}
	}
	swap(nums,end,++i);
	return i;
}

void Quick_Sort(vector<int> &nums,int begin,int end){
	if(begin<end){
		int mid=partition(nums,begin,end);
		Quick_Sort(nums,begin,mid-1);
		Quick_Sort(nums,mid+1,end);
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
	Quick_Sort(nums,0,n-1);
	print(nums);
	return 0;
}