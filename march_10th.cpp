#include <string>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        int M = 0, C = 0, X = 0, I = 0, remainder = 0;
        string ans;
        M = num / 1000, remainder = num % 1000;
        C = remainder / 100, remainder = remainder % 100;
        X = remainder / 10, remainder = remainder % 10;
        I = remainder;

        //add M to ans
        for (int i = 1; i <= M; ++i) {
            ans += "M";
        }

        //add C to ans
        if (C >= 5) {
            if (C == 9 ) {
                ans += "CM";
            } else {
                ans += "D";
                C -= 5;
                for (int i = 0; i < C; ++i) {
                    ans += "C";
                }
            }
        } else {
            if (C == 4) {
                ans += "CD";
            } else {
                for (int i = 0; i < C; ++i) {
                    ans += "C";
                }
            }
        }

        //add X to ans
        if (X >= 5) {
            if (X == 9 ) {
                ans += "XC";
            } else {
                ans += "L";
                X -= 5;
                for (int i = 0; i < X; ++i) {
                    ans += "X";
                }
            }
        } else {
            if (X == 4) {
                ans += "XL";
            } else {
                for (int i = 0; i < X; ++i) {
                    ans += "X";
                }
            }
        }

        //add I to ans
        if (I >= 5) {
            if (I == 9 ) {
                ans += "IX";
            } else {
                ans += "V";
                I -= 5;
                for (int i = 0; i < I; ++i) {
                    ans += "I";
                }
            }
        } else {
            if (I == 4) {
                ans += "IV";
            } else {
                for (int i = 0; i < I; ++i) {
                    ans += "I";
                }
            }
        }
        return ans;
    }
};