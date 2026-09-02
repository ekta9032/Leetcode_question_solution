class Solution {
public:
  bool isPrime(int nums){
     if(nums==1){
        return false;
    }
    if(nums==2 || nums==3){
        return true;
    }
   
    for(int i=2;i<=nums-1;i++){
      if(nums%i==0){
          return false;
      } 
    }
    return true;
  }
    int maximumPrimeDifference(vector<int>& nums) {
        int n=nums.size();
        int first=-1;
        int last=-1;
        for(int i=0;i<n;i++){
         if(isPrime(nums[i])){
            if(first==-1){
                first=i;
            }
            last=i;
         }
        }
      return last-first;
    }
};