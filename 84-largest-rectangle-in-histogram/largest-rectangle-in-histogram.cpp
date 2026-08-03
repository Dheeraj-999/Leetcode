class Solution {
public:
    int largestRectangleArea(vector<int>& hts) {
        stack<int>s;
        vector<int>right(hts.size(),0);
        vector<int>left(hts.size(),0);

        for(int i=hts.size()-1;i>=0;i--){
            while(s.size()>0 && hts[s.top()] >= hts[i]){
                s.pop();
            }

            if(s.empty()){
                right[i]=hts.size();
            }else{
                right[i]=s.top();
            }
            s.push(i);
        }

        while(!s.empty()){
            s.pop();
        }

        for(int i=0;i<hts.size();i++){
            while(s.size()>0 && hts[s.top()] >= hts[i]){
                s.pop();
            }

            if(s.empty()){
                left[i]=-1;
            }else{
                left[i]=s.top();
            }
            s.push(i);
        }

        int ans=0;
        for(int i=0;i<hts.size();i++){
            int widht= right[i]-left[i]-1;
            int currArea=widht * hts[i];

            ans=max(currArea,ans);
            
        }
return ans;
    }
};