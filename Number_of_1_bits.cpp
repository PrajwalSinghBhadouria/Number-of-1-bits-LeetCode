class Solution {
public:
    int hammingWeight(int n) {
        int r;
        int sum = 0;
        while(n!=0){
            r = n%2;
            sum = sum + r;
             n = n/2;
        }
        return sum;
    }
};
