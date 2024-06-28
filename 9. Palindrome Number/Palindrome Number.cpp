class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        long div = 1;
        while (x >= div * 10)
        {
            div *= 10;
        }
        while(x)
        {
            if(x % 10 != x / div)
            {
                return false;
            }
            x = (x % div)/10;
            div /=100;
        }
        return true;

    }
};