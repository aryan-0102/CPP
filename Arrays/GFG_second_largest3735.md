

# Second Largest Element - [Array]

---

## 🔗 Problem & Resources

* **Problem Link:** [GFG](https://www.geeksforgeeks.org/problems/second-largest3735/1)


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
    int getSecondLargest(vector<int> &arr) {
        // code here
        
        int largest = -1;
        int second = -1;
        for(auto a:arr){
            if(a>largest){second = largest ; largest =a ;}
            if(a>second && a<largest) second = a;
        }
        
        return second ;
    }
};
