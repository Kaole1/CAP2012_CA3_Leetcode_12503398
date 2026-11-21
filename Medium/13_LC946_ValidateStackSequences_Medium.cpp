class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {

        stack<int> st;

        int j = 0;

        for (int i = 0; i < pushed.size(); i++) {

            // Push the current element
            st.push(pushed[i]);

            // Pop while the top matches the expected element
            while (!st.empty() && st.top() == popped[j]) {

                st.pop();
                j++;
            }
        }

        return j == popped.size();
    }
};