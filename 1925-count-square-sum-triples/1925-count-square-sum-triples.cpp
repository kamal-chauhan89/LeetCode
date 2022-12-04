class Solution {
public:
    int countTriples(int n) {
        int sum= 0;
        for(int i=1; i<=n;i++){
            for(int j=i+1; j<=n; j++){
                int sq= pow(i,2)+pow(j,2);
                int t = sqrt(sq);
                if (t<=n && t*t== sq)
                    sum = sum+2 ;
            }
        }
        
        return sum;
    }
};