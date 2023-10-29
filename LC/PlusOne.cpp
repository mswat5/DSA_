# Approach
i have given it with the code line by line

# Complexity
- Time complexity:
0(n)

- Space complexity:
0(1)
# Code
```
class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int n = v.size();
        for(int i = n-1; i >= 0; i--){
            if(i == n-1) //accn to test case last element me add krna hai one so for that..
                v[i]++;
            if(v[i] == 10) //ab jese [9] nd [9,9] wale case me kast me 1 add krne pe 10 ajayega so usko single digit krne k lie ye..(nd ye loop ke andar individual condition hai islie cases like [9,9,9] aise wale me iterate krke iske statements work krjayenge..like last 9 ko kia fir last second 9 ko then last third wale ko)
            {
                v[i] = 0; //to us current element ko 0 krdenge 
                if(i != 0) //nd agr wo phla element nh tha to fir 
                {
                    v[i-1]++; //uske pixle wale me 1 add krdenge
                }
                else{
                    v.push_back(0);
                    v[i] = 1;
                }
            }
        }
        return v;
    }
};
```
