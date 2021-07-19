class Solution {
  
public:
    int countVowelPermutation(int n) {
      const int MOD = 1e9 + 7;
        long long a,e,i,o,u;
        a = e = i = o = u = 1;
        long long ad,ed,id,od,ud;
        
        for(int j = 2; j <= n;j++){
            ad =  e;
            ed = (a + i)%MOD;
            id = (a + e + o + u)%MOD;
            od = (i + u)%MOD;
            ud = a;
            
            a = ad;
            e = ed;
            i = id;
            o = od;
            u = ud;
        }
        return (a + e + i + o + u)%MOD;
    }
};
