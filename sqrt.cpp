#include <bits/stdc++.h>
using namespace std;
/*Mientras que conseguí pasar arrange coins a que me funcionase en VS este no lo consigo, 
por favor mirad el código en un comentario abajo que es el que metí en leetcode.
Muchas gracias
RocíoPV*/
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
            cout <<sol;
        }
        int main (){
            int s;
            cin >> s;
            mySqrt(s);
            
        }

//CODIGO ORIGINAL QUE USÉ EN LEETCODE
       /* class Solution {
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
};*/
