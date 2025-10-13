


# Sorted Union - [Array]

---

## 🔗 Problem & Resources

* **Problem Link:** [GFG](https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1)
* **Handwritten Notes:** [Notes](https://github.com/aryan-0102/CPP/blob/main/Arrays/Handwritten/GFG_Union.jpg)

---

## 🤔 My Approach & Intuition

### Data Structure(s) Used

* **[Array]:**



## ⚙️ Complexity Analysis

* **Time Complexity:** $O(N+M)$
    * **Space Complexity:** $O(1)$
    ---

## 💻 Code Implementation

``````cpp
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> result;
        int i = 0, j = 0;
        int m = a.size(), n = b.size();

        while(i < m && j < n) {
            if(a[i] < b[j]) {
                if(result.empty() || result.back() != a[i])
                    result.push_back(a[i]);
                i++;
            }
            else if(a[i] > b[j]) {
                if(result.empty() || result.back() != b[j])
                    result.push_back(b[j]);
                j++;
            }
            else {
                if(result.empty() || result.back() != a[i])
                    result.push_back(a[i]);
                i++;
                j++;
            }
        }

        // Add remaining elements from a[]
        while(i < m) {
            if(result.empty() || result.back() != a[i])
                result.push_back(a[i]);
            i++;
        }

        // Add remaining elements from b[]
        while(j < n) {
            if(result.empty() || result.back() != b[j])
                result.push_back(b[j]);
            j++;
        }

        return result;
    }
};
