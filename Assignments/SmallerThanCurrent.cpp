

// class Solution {
// public:
//     vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//       int n = nums.size();
//       vector<int>a(51);
//       vector<int>b(51);
//       vector<int>res(n);
//       for(int i=0; i<n; ++i){
//         a[nums[i]]++;
//       }
//       for(int i=1; i<51; ++i){
//         b[i] = a[i-1]+b[i-1];
//       }
//       for(int i=0; i<n; ++i){
//         res[i] = b[nums[i]];
//       }
//       return res;
//     }
// };

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>a(101);
        vector<int>b(101);
        int n=nums.size();
        for(int i=0;i<n;i++)  // making the frequency array
            a[nums[i]]++;
        for(int i=1;i<101;i++)  //filling the prefix sum array
            b[i]=b[i-1]+a[i-1];
        vector<int>ans(n);  // final solution array
        // for(int i=0;i<10;i++)
        //     cout<<b[i]<<" ";
        for(int i=0;i<n;i++){
            ans[i]=b[nums[i]];
        }
        return ans;
    }
};
