/*
ÌâÄ¿£ºGiven a balanced parentheses string S, compute the score of the string based on the following rule:

() has score 1
AB has score A + B, where A and B are balanced parentheses strings.
(A) has score 2 * A, where A is a balanced parentheses string.
*/

class Solution {
public:
    int scoreOfParentheses(string S) {
    stack<string> s;
	for (char c : S) {
		if (c == '(') s.push("(");
		else {
			if (!s.empty() && s.top() == "(") {
				s.pop();
				s.push("1");
			}
			else {
				int tmp = 0;
				while (!s.empty() && s.top() != "(") {
					tmp += stoi(s.top());
					s.pop();
				}
				if (!s.empty()) s.pop();
				tmp *= 2;
				s.push(to_string(tmp));
			}

		}
	}
	int res = 0;
	while (!s.empty()) {
		res += stoi(s.top());
		s.pop();
	}
	return res;

    }
};
