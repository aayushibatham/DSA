class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
          int largest=nums[0];
          for(int i=0;i<nums.size(); i++){
            if (nums[i]>largest ){
                largest=nums[i];
            }
          }
          int slargest=-1;
          for(int i=0;i<nums.size(); i++){
            if(nums[i]>slargest && nums[i]!= largest){
                slargest=nums[i];
            }
            
          }
        return slargest;
      
    }
};