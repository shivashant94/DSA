#include<iostream>
#include<vector>
using namespace std;

int division(int dividend, int divisor){

    int s = 0;
    int e = abs(dividend); 
    int ans = 0;

    int mid = s+(e-s)/2;
    while( s<=e ){
        // Perfect solution
        if( mid*abs(divisor) == abs(dividend) ){
            ans = mid;
            break;
        }
        //not perfect solution
        if( mid*abs(divisor) > abs(dividend) ){
            // left search
            e = mid-1;
        }else{
            // store ans
            ans = mid;
            // right search 
            s = mid+1 ;
        }
        mid = s+(e-s)/2;
    }    

    if((divisor < 0 ) && (dividend < 0) || (divisor > 0 )&&(dividend > 0)){
        return ans ;
    }else {
        return -ans;
    }        
}

int main(){
    int dividend =  -22;
    int divisor = 7;
    
    int ans = division(dividend,divisor);
    cout << "Ans is "<<ans << endl;
    return 0;

}