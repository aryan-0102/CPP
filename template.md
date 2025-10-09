# [Problem Name] - [Data Structure]

---

## 🔗 Problem & Resources

* **Problem Link:** [Link to the problem on LeetCode, HackerRank, etc.](https://example.com/problem-link)
* **Handwritten Notes:** [Link to your scanned notes (e.g., Google Drive, Notion, Imgur)](https://example.com/notes-link)

---

## 🤔 My Approach & Intuition

### Data Structure(s) Used

* **[Data Structure 1]:** *Briefly explain why you chose this data structure.*
* **[Data Structure 2]:** *Briefly explain why you chose this data structure (if any).*


## ⚙️ Complexity Analysis

* **Time Complexity:** $O(N)$
    * **Space Complexity:** $O(N)$
    ---

## 💻 Code Implementation

``````cpp
// Use the appropriate language tag for syntax highlighting (e.g., cpp, java, python, js)

// Add your well-commented code solution here.
#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (numMap.count(complement)) {
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }
        return {}; // No solution found
    }
};
