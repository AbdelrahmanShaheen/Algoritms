// K-th Symbol in Grammar.

class Solution {
public:
    int kthGrammar(int N, int K) {
        
        //base case :
        if(K == 1 || N == 1)
        return 0;
        
        //index of parent.
        int Parent = (K+1)/2;
        
        int ParentVal = kthGrammar(N-1 , Parent);
        
        if(ParentVal == 0)
        {
            if(K%2 == 1)return 0;
            else 
                return 1;
        }
        else{
            if(K%2 == 1)return 1;
            else
                return 0;
        }
    }
};
