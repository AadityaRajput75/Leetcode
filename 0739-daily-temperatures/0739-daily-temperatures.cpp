class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       int n = temperatures.size();
        std::vector<int> answer(n, 0);
        std::stack<int> st; // Stores indices of days

        for (int i = 0; i < n; ++i) {
            // Process all days in the stack that are colder than today's temperature
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prev_day = st.top();
                st.pop();
                answer[prev_day] = i - prev_day;
            }
            st.push(i);
        }

        return answer;
        
    }
};