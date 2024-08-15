class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives = 0;
        int tens = 0;
        for (auto bill : bills)
        {
            if (bill == 5)
            {
                fives++;
            }
            else if (bill == 10 && fives >= 1)
            {
                tens++;
                fives--;
            }
            else if (bill == 20 && tens >= 1 && fives >= 1)
            {
                tens--;
                fives--;
            }
            else if (bill == 20 && fives >=3)
            {
                fives-=3;
            }
            else 
            {
                return false;
            }
        }
        return true;
    }
};
