

# Largest Element - [Array]

---

## 🔗 Problem & Resources

* **Problem Link:** [Leetcode](https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1)


---

## 🤔 My Approach & Intuition

### Data Structure(s) Used

* **[Array]:**


## ⚙️ Complexity Analysis

* **Time Complexity:** $O(N)$
    * **Space Complexity:** $O(1)$
    ---

## 💻 Code Implementation

``````cpp
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        auto it = max_element(arr.begin(), arr.end());
        return *it;
    }
};
