class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n=nums.size();

       unordered_map<int,int>m;
       vector<int>ans;

       for(int i=0;i<n;i++){

        int first= nums[i];
        int second= target-first;

        if(m.count(second)){
            ans.push_back(i);
            ans.push_back(m[second]);
        }else{
            m[first]=i;
        }
       }
       return ans;
    }
};













//  int n=nums.size();
//         unordered_map<int,int>m;
//         vector<int> ans;

//         for(int i=0;i<n;i++){
//             int first = nums[i];
//             int second= target-first;

//             if(m.count(second) >0){
//                 ans.push_back(i);
//                 ans.push_back(m[second]);
//             }
//             else{
//                 m[first]=i;
//             }
//         }
//         return ans;