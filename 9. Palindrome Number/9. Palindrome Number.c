    bool isPalindrome(int x) {
        long result = 0;
        int y=x, rem;
        while(y!=0){
            rem = y%10;
            result = result*10 + rem;
            y = y/10;
        }
        if(x<0) return 0;
        else{ 
            if(result == x) return 1;
            else return 0;}
    }