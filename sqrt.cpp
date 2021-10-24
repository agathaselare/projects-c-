class Solution {
public:
    using ll = long long;
    int mySqrt(int x) {
        int n = x;
        int d= x;
        int dig= 0;
        ll sol = x;
        bool done = false;
        sol = (sol/2)+1;
        if (x > 10000000){
            while (d != 0)
            {
                d = d / 10;
                ++dig;
            }
            
            for (int it= 0; it < (dig/1.2); ++it){
                sol = n/1000;
                }
            
             
        }
        
       
        while(done == false){
            ll comp = sol * sol;
        if (comp>n){
                sol = sol -1;
        }
           
        
        else{
            done = true;
            break;
        }

    
    }
        return (sol);
    }
};
