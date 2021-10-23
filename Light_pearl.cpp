#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int pearls;
    while(cin >> pearls){
   
        int div;
        int sol = 1;
        div = pearls;
        float decheck;
        decheck=pearls;
        bool done = false;
        if (pearls <= 1){
            sol=0;
            cout << sol << "\n";
            
        
        } else if (pearls<=3){
            cout << sol << "\n";

        
        } else {
                while(done == false){

                        decheck = decheck/3;
                        div = div/3;

                        if (decheck > div){
                            div +=1;
                        }
                        if(div <= 3){
                            sol +=1;
                            done = true;
                            break;
                        }
                        else if (div<1){
                            sol = 0;
                            done = true;
                            break;
                        }
                        else {
                            sol +=1;
                        }
                    
                }
                cout << sol << "\n";
            }
    
            
    
    }
}
