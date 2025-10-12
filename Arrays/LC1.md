# Two Sum - [Array]

---

## 🔗 Problem & Resources

* **Problem Link:** [Leetcode](https://leetcode.com/problems/two-sum/)
* **Handwritten Notes:** [Notes](https://github.com/aryan-0102/CPP/blob/main/Arrays/Handwritten/LC_1.jpg)

---

## 🤔 My Approach & Intuition
Map stores the indices of the seen values . In each iteration (target-current) to check if the counterpart exists or not.
### Data Structure(s) Used

* **[Array]:**



## ⚙️ Complexity Analysis

* **Time Complexity:** $O(N)$ <mark> Only if the find operation on unordered map is considered O(1) operation </mark>
    * **Space Complexity:** $O(1)$
    ---

## 💻 Code Implementation

``````cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> sol ;

        unordered_map <int,int> mpp ;

        for(int i = 0 ;i<nums.size();++i){
            if(mpp.find(target-nums[i]) != mpp.end()) {
                sol.push_back(i);
                sol.push_back(mpp[target-nums[i]]);
                
                }

                mpp[nums[i]] = i;

        }

        return sol ;
    }
};
