

class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        queue<pair<int,int>> q;
        for(int i=0;i<arr.size();i++) {
            if(arr[i] < 0) q.push({i, arr[i]});
        }
        
        vector<int> ans;
        
        int last = k-1;
        
        while(last < arr.size()) {
            while(q.size() and q.front().first < (last-k+1)) q.pop();
            
            if(q.size() and q.front().first <= last) ans.push_back(q.front().second);
            else ans.push_back(0);
            
            last++;
        }
        
        return ans;
    }
};
 

