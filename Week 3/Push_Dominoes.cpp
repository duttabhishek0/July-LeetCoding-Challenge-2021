 class Solution {
public:
    string pushDominoes(string s) {
        
        int n=s.size();
        vector<int> v(n,0);
        int cnt=0;
        char ch='.';
        for(int i=0;i<n;i++){
            if(s[i]=='R') {
                cnt=1;
                ch='R';
            }
            else if(s[i]=='L') {
                cnt=0;
                ch='L';
            }
            else{
                if(ch=='R') cnt++;
            }
            v[i]=cnt;
        }
        cnt=0;
        ch='.';
        for(int i=n-1;i>=0;i--){
            if(s[i]=='R') {
                cnt=0;
                ch='R';
                continue;
            }
            else if(s[i]=='L') {
                cnt=-1;
                ch='L';
                continue;
            }
            else{
                if(ch=='L') cnt--;
            }
            if(ch=='L'){
                if(v[i]==0) s[i]='L';
                else if(v[i]+cnt >0) s[i]='L';
                else if(v[i]+cnt <0) s[i]='R';
            }
            else{
                if( v[i]>0) s[i]='R';
            }
            
        }
        
        return s;
    }
}; 
