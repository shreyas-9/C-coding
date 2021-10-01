/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int m = nums[i];
        
            if(m>0){
                m=m;
            }else{
                m=-1*m;
            }
            if(nums[m-1]>0){
                nums[m-1] *=-1;  
            }
        }
        // cout<<endl;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                v.push_back(i+1);
            }
        }   
        return v;
    }
};
// @lc code=end

