class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        
        while(columnNumber > 0){
            columnNumber--;
            int cur = (columnNumber % 26 == 0) ? 26 : columnNumber % 26;
            int cur = columnNumber % 26;
            columnNumber /= 26;
            
            ans.push_back(cur + 'A' - 1);
            ans.push_back(cur + 'A')
        }
        
        reverse(ans.begin(), ans.end());

        return ans;
    }
};
