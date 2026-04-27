# 🔥 3 Ways to Solve Valid Anagram (From Brute Force → Optimal O(n)) 🚀 | C++

💡 Want to solve this in **O(n) without sorting?**
Let’s build intuition step by step 👇

---

## 🧠 Intuition

Anagram ka core idea hai **“frequency balance”**.

Agar har character ka count dono strings me same hai → anagram ✅

👉 Order matter nahi karta
👉 Frequency matter karti hai

---

## ⚙️ Approach 1: Sorting (Brute Force)

### 💡 Idea:

Sort dono strings → agar identical ho gaye → anagram

👉 Kyun kaam karta hai?
Same characters hone pe sorting ke baad arrangement same ho jata hai

### Code:

```cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};
```

### ⏱ Complexity:

* Time: O(n log n)
* Space: O(1)

🔸 Easy but not optimal

---

## ⚙️ Approach 2: Unordered Map (Flexible)

### 💡 Idea:

Map me frequency store karo

+1 for s
-1 for t

👉 End me sab values 0 honi chahiye

### Code:

```cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, int> mpp;

        for(int i = 0; i < s.size(); i++){
            mpp[s[i]]++;
            mpp[t[i]]--;
        }

        for(auto &it : mpp){
            if(it.second != 0) return false;
        }

        return true;
    }
};
```

### ⏱ Complexity:

* Time: O(n)
* Space: O(k)

🔸 Works for all characters (Unicode safe)

---

## ⚙️ Approach 3: Hash Array (Optimal 🔥)

### 💡 Idea:

Array[26] use karo (only lowercase a–z)

Ek pass me:
+1 → s
-1 → t

👉 Sab zero → valid anagram

### Code:

```cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        int freq[26] = {0};

        for(int i = 0; i < s.size(); i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for(int i = 0; i < 26; i++){
            if(freq[i] != 0) return false;
        }

        return true;
    }
};
```

### ⏱ Complexity:

* Time: O(n) ⭐
* Space: O(1) ⭐

🔸 Fastest and interview-favorite 💯

---

## 🔍 Dry Run (Game Changer 💯)

```
s = "listen"
t = "silent"

Step:
l +1, s -1
i +1, i -1
s +1, l -1
t +1, e -1
e +1, n -1
n +1, t -1

Final freq array → all 0 ✅
```

👉 Means all characters balanced → anagram

---

## 🆚 Comparison

| Approach   | Time       | Space  | Notes         |
| ---------- | ---------- | ------ | ------------- |
| Sorting    | O(n log n) | O(1)   | Easy but slow |
| Hash Map   | O(n)       | O(k)   | Flexible      |
| Hash Array | O(n) ⭐     | O(1) ⭐ | Best 💯       |

---

## 🧠 Interview Insight

👉 If characters are only a–z → use array
👉 If Unicode / mixed → use hashmap

---

## 💡 Final Takeaway

> “Anagram = balance frequencies, not order.”

---

👍 If this helped, consider upvoting!
