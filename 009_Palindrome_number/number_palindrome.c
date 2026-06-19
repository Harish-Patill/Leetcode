#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int x) {
    long int ans=0;
    long int original = x;

    if(x<0) return false;
    while(x>0){
        ans=ans*10+x%10;
        x=x/10;
    }

    return (ans == original);
}


/*
A classic palindrome question but for a number, will initially store the original number into another variable (named as original), because we 
will be modifying the actual original number, and will store the numbers in reverse order in another variable (named as ans), at last the 
original and ans variables will be compared as to what to be returned.

the logic behing storing the number in reverse order:
            x%10 --> will give the last number
            x/10 --> will update the x value by removing the last digit
            will store the (x%10) value in a new variable and update the x by (x/10) operation

            but the new (x%10) need to be appended, else it will replace the old value, so we will multiply the value with 10 then add (x%10)
                i.e ans = ans*10 + x%10;
*/