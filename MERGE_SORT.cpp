/*
	MERGE SORT
*/
#include<iostream>
#include<vector>
using namespace std;

void IO(void){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		ios::sync_with_stdio(NULL);
		cin.tie(NULL);
}

void input(vector<int> &nums,int n){
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
}

void Merge(vector<int> &nums,int begin,int mid,int end){
	int i=begin,j=mid+1,k=begin;
	vector<int> temp(end+1);
	while(i<=mid && j<=end){
		if(nums[i]<=nums[j]){
			temp[k++]=nums[i++];
		}else{
			temp[k++]=nums[j++];
		}
	}
	while(i<=mid){
		temp[k++]=nums[i++];
	}
	while(j<=end){
		temp[k++]=nums[j++];
	}
	for(int i=begin;i<=end;i++){
		nums[i]=temp[i];
	}
	return ;
}

void Merge_Sort(vector<int> &nums,int begin,int end){
	if(begin < end){
		int mid=begin+((end-begin)/2);
		Merge_Sort(nums,begin,mid);
		Merge_Sort(nums,mid+1,end);
		Merge(nums,begin,mid,end);
	}
}

void print(vector<int> &nums){
	for(auto x:nums){
		cout<<x<<" ";
	}
	cput<<"\n";
}

int main(){
	IO();
	int n;
	cin>>n;
	vector<int> nums(n);
	input(nums,n);
	Merge_Sort(nums,0,n-1);
	print(nums);
	return 0;
}