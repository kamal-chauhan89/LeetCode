class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int res = digits.size() - 1;
        
        while(res >= 0){
            if(digits[res] == 9){
                digits[res] = 0;
            }else{
                digits[res] += 1;
                return digits;
            }
            res--;
        }

        digits.insert(digits.begin(), 1);
        return digits;
        
    }
};