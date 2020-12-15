/*Given an array of integers nums containing N + 1 integers where each integer is in the range
 [1, n]inclusive. There is only one duplicate number in nums, return this duplicate number.*/ 

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

	int cases , n;
	cin>>cases;
	vector<int>ans;
	
	for(int i = 0 ; i < cases ; i++){
	
	cin>>n;
	int *nums = new int[n+1];
    
    for(int i = 0 ; i <n+1; i++){
            cin>>nums[i];
	}
	sort(nums , nums + n+ 1);
	for(int i = 0 ; i <n ; i++){
		
		if(nums[i] == nums[i+1]){
			ans.push_back(nums[i]);
			break;
		}
	}
  }
  cout<<endl;
  for(int i = 0 ; i < ans.size() ; i++){
  	cout<<ans[i]<<endl;
  }
 }
