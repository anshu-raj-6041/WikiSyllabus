class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;

        while (true) {
            int sum = 0;

            // Find sum of square of digits
            while (n != 0) {
                int digit = n % 10;
                sum += (digit * digit);
                n = n / 10;
            }

            if (sum == 1) {
                return true; // Happy Number
            }

            // update no
            n = sum;

                // If already seen this no, we are in a cycle => not Happy No
                if (s.find(n) != s.end()) {
                return false;
            }
            s.insert(n);
        }
    }
};
