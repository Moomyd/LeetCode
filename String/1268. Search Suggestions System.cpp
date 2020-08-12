/*
ÌâÄ¿£ºGiven an array of strings products and a string searchWord. We want to design a system that suggests at most three product names from products after each character of searchWord is typed. Suggested products should have common prefix with the searchWord. If there are more than three products with a common prefix return the three lexicographically minimums products.

Return list of lists of the suggested products after each character of searchWord is typed.
*/
class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        std::sort(products.begin(), products.end());
        vector<vector<string>> res;
        for (int i = 0; i < searchWord.size(); ++ i) {
            vector<string> candidates;
            for (int j = 0; j < products.size(); ++ j) {
                if (products[j].find(searchWord.substr(0, i + 1)) == 0) {
                    if (candidates.size() == 3) break;
                    candidates.push_back(products[j]);
                }
            }
            res.push_back(candidates);
        }
        return res;
    }
};
