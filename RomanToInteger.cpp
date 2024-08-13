class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int > R;
        R['I'] = 1;
        R['V'] = 5;
        R['X'] = 10;
        R['L'] = 50;
        R['C'] = 100;
        R['D'] = 500;
        R['M'] = 1000;
        int Total = 0;
        int PrevValue = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            char Current = s[i];
            int CValue = R[Current];
            if (CValue < PrevValue)
            {
                Total -= CValue;
            }
            else
            {
                Total += CValue;
            }
            PrevValue = CValue;
        }
        return Total;
    }
};
