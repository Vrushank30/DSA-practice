class Solution {
    public:
        bool isPalindrome(int n) {
            int dup=n;
            long ans=0;
            while(n>0){
                int lastDigit=n%10;
                n=n/10;
                ans=(ans*10)+lastDigit;
            
            }
            if(ans==dup){
                    return true;
            }
            else{
                    return false;
            }
        }
    };