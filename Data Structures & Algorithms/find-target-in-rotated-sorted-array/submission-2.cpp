class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<r){
            int mid=(l+r)/2;
            if(nums[mid]>nums[r]){
                l=mid+1;
            }else{
                r=mid;
            }
        }
        int mn=l;
        int ind=-1;
        if (nums.empty()) return -1;
        if(mn!=0&& nums[0]<=target&&nums[mn-1]>=target){
            int l=0,r=mn-1;
            while(l<=r){
                int mid=(l+r)/2;
                if(nums[mid]==target){
                    ind=mid;
                    break;
                }else if(nums[mid]>target){
                    r=mid-1;
                }else{
                    l=mid+1;
                }

            }
        }
        else if(nums[mn]<=target&&nums.back()>=target){
             int l=mn,r=nums.size()-1;
            while(l<=r){
                int mid=(l+r)/2;
                if(nums[mid]==target){
                    ind=mid;
                    break;
                }else if(nums[mid]>target){
                    r=mid-1;
                }else{
                    l=mid+1;
                }

            }

        }
        return ind;

        
    }
};
