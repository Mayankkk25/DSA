class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= (int)s.size())
            return s;

        vector<string> rows(numRows);
        int curRow = 0;
        int dir = -1; // direction flag

        for (char c : s) {
            rows[curRow] += c;
            if (curRow == 0 || curRow == numRows - 1)
                dir = -dir;   // flip direction
            curRow += dir;
        }

        string result;
        for (auto &row : rows)
            result += row;

        return result;
    }
};
