# Approach
we have taken two variables here (maxi to take max of particular i like after adding extra in that i and k to check max element from whole array to check if that element is greatest or not ) and a vector to return the answer array
then we have iterated one by one and on first loop added the extra candy then in the second loop we checked max of whole array between the element with extra candies and the other elements
if the extracandies one is still max then we will return true for that 
# Complexity
- Time complexity:
0(n^2)

- Space complexity:
0(n)

# Code
```
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
  vector<bool> ans;
        int maxi; //to take max of particular i like after adding extra in that i
        int k; //to check max element from whole array to check if that element is greatest or not
        for(int i=0;i<candies.size();i++){
            maxi=candies[i]+extraCandies;
            k=maxi; //k ko aise islie rkkha jisse niche iteration me wo next k lie previous k ka use krke per iteration update kr paye for the sare element ka max 
            for(int i=0;i<candies.size();i++){
                k=max(candies[i],k);
                }
                if(k==maxi){
                    ans.push_back(true);
                }
                else{
                    ans.push_back(false);
                }
            }
            return ans;
        }
};
```
