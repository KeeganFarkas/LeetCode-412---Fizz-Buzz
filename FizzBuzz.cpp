// Runtime: 3ms - Beats 90.66%
// Memory: 7.1MB - Beats 96.95%
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> numList(n);
        for (int i = 1; i <= n; i++){
            if (i % 15 == 0)
                numList[i - 1] = ("FizzBuzz");
            else if (i % 3 == 0)
                numList[i - 1] = ("Fizz");
            else if (i % 5 == 0)
                numList[i - 1] = ("Buzz");
            else
                numList[i - 1] = (to_string(i));
        }
        return numList;
    }
};
