string Solution::solve(string A) {
    string B="";
    queue<char>q;
    vector<int>r(26,0);
    for(int i=0;i<A.size();i++)
    {
        if(r[A[i]-'a']>=1)
        {
            r[A[i]-'a']++;
            while(!q.empty()&&r[q.front()-'a']>1){
                q.pop();
                
            }
            if(q.empty())
            B+='#';
            else
           B+=q.front();
        }
        else{
            r[A[i]-'a']++;
            q.push(A[i]);
            while(r[q.front()-'a']>1)
                q.pop();
              B+=  q.front(); 
            
        }
    }
    return B;
}
