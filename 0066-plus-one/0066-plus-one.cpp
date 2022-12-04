class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int res = digits.size() - 1;
        
      for(int i=res; i>=0; i--){
          if (digits[i]==9){
              digits[i]=0;
          }
          else{
              digits[i] = digits[i]+1;
              return digits;
          }
      }

        digits.insert(digits.begin(), 1);
        return digits;
        
    }
};