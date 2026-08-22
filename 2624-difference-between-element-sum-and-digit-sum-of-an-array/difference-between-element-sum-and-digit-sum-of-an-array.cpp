class Solution {
public:
   int elementSum(vector<int>& nums){
    int size=nums.size()-1;
    int sum=0;
    for(int i=0;i<=size;i++){
      sum+=nums[i];
    }return sum;
   }
   int digitSum(vector<int>& nums){
    int size=nums.size()-1;
    int sum=0;
    for(int i=0;i<=size;i++){
        int num=nums[i];
    
    while(num>0){
        int digit=num%10;
        sum+=digit;
        num=num/10;
    }
    }
    return sum;
   }
    int differenceOfSum(vector<int>& nums) {
        return abs(elementSum(nums)-digitSum(nums));
    }
};